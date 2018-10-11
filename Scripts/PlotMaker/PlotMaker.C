#define PlotMaker_cxx
#include "PlotMaker.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <fstream>

void PlotMaker::Loop()
{
//   In a ROOT session, you can do:
//      root> .L PlotMaker.C
//      root> PlotMaker t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

  ifstream PlotMaker ("PlotMaker.txt");
  double AmpParam[9], TimeParam[9];
  double AmpParamErr[9], TimeParamErr[9];
  string outfilename;
  PlotMaker >> outfilename;
  TString OutputFilename = outfilename;
  cout<<outfilename<<endl;
  for (int i = 0; i < 9; i++)
    {
      PlotMaker >> AmpParam[i] >> TimeParam[i] >> AmpParamErr[i] >> TimeParamErr[i];
      cout<<"Params: "<<AmpParam[i]<<" "<<TimeParam[i]<<endl;
    }



   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;

   TH1D* AmpHist = new TH1D("AmpHist","AmpHist",160,-0.5,150.5);
   TH1D* TimeHist = new TH1D("TimeHist","TimeHist",160,60000,70000);


   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      if (channel == 1){
        if(cfdtime>60000 && cfdtime<75000){
	  AmpHist->Fill(amplitude);
          if(amplitude>20.) TimeHist->Fill(cfdtime);
        }
      }
   }

   // Draw the Amplitude Distribution ////////////////////////////////////////////////
   TCanvas* ac = new TCanvas();
   AmpHist->Draw();

   TF1* AmpFitFunc = new TF1("AmpFitFunc","landau(0)+gaus(3)+gaus(6)",0,80);
   //  TF1* AmpFitFunc = new TF1("AmpFitFunc","gaus(0)+gaus(3)",0,100);
   AmpFitFunc->SetParameter(0,AmpParam[0]);
   AmpFitFunc->SetParameter(1,AmpParam[1]);
   AmpFitFunc->SetParameter(2,AmpParam[2]);
   AmpFitFunc->SetParameter(3,AmpParam[3]);
   AmpFitFunc->SetParameter(4,AmpParam[4]);
   AmpFitFunc->SetParameter(5,AmpParam[5]);
   AmpFitFunc->SetParameter(6,AmpParam[6]);
   AmpFitFunc->SetParameter(7,AmpParam[7]);
   AmpFitFunc->SetParameter(8,AmpParam[8]);

   //AmpFitFunc->SetParLimits(0,0,1000000);
   //AmpFitFunc->SetParLimits(0,1000,1500);
   //AmpFitFunc->SetParLimits(5,5,15);

   AmpFitFunc->SetParLimits(6,0,100);
   AmpFitFunc->SetParLimits(7,70,140);
   AmpFitFunc->SetParLimits(8,10,50);

   AmpHist->Fit("AmpFitFunc","","",0,80);

   //TF1* AmpNoiseFit = new TF1("AmpNoiseFit","gaus",0,100);
   TF1* AmpNoiseFit = new TF1("AmpNoiseFit","landau",0,140);
   AmpNoiseFit->SetParameter(0,(AmpFitFunc->GetParameter(0)));
   AmpNoiseFit->SetParameter(1,(AmpFitFunc->GetParameter(1)));
   AmpNoiseFit->SetParameter(2,(AmpFitFunc->GetParameter(2)));

   TF1* AmpSinglePEFit = new TF1("AmpSinglePEFit","gaus",0,140);
   AmpSinglePEFit->SetParameter(0,(AmpFitFunc->GetParameter(3)));
   AmpSinglePEFit->SetParameter(1,(AmpFitFunc->GetParameter(4)));
   AmpSinglePEFit->SetParameter(2,(AmpFitFunc->GetParameter(5)));

   TF1* AmpDoublePEFit = new TF1("AmpDoublePEFit","gaus",0,140);
   AmpDoublePEFit->SetParameter(0,(AmpFitFunc->GetParameter(6)));
   AmpDoublePEFit->SetParameter(1,(AmpFitFunc->GetParameter(7)));
   AmpDoublePEFit->SetParameter(2,(AmpFitFunc->GetParameter(8)));

   TF1* AmpFitFunc2 = new TF1("AmpFitFunc2","landau(0)+gaus(3)+gaus(6)",0,140);
   //TF1* AmpFitFunc2 = new TF1("AmpFitFunc2","gaus(0)+gaus(3)",0,100);
   AmpFitFunc2->SetParameter(0,(AmpFitFunc->GetParameter(0)));
   AmpFitFunc2->SetParameter(1,(AmpFitFunc->GetParameter(1)));
   AmpFitFunc2->SetParameter(2,(AmpFitFunc->GetParameter(2)));
   AmpFitFunc2->SetParameter(3,(AmpFitFunc->GetParameter(3)));
   AmpFitFunc2->SetParameter(4,(AmpFitFunc->GetParameter(4)));
   AmpFitFunc2->SetParameter(5,(AmpFitFunc->GetParameter(5)));
   //		AmpFitFunc2->SetParameter(6,25.);
   //		AmpFitFunc2->SetParameter(7,2.5e6);
   //		AmpFitFunc2->SetParameter(8,1.75e6);
   AmpFitFunc2->SetParameter(6,(AmpFitFunc->GetParameter(6)));
   AmpFitFunc2->SetParameter(7,(AmpFitFunc->GetParameter(7)));
   AmpFitFunc2->SetParameter(8,(AmpFitFunc->GetParameter(8)));

   AmpNoiseFit->SetLineColor(4);
   AmpNoiseFit->Draw("SAME");
   AmpSinglePEFit->SetLineColor(6);
   AmpSinglePEFit->Draw("SAME");
   AmpDoublePEFit->SetLineColor(8);
   AmpDoublePEFit->Draw("SAME");
   AmpFitFunc2->SetLineColor(2);
   AmpFitFunc2->Draw("SAME");

   // Now Draw the Transit Time Spread
   TCanvas* tc = new TCanvas();
   TimeHist->Draw();
   TF1* TimeFitFunc = new TF1("TimeFitFunc","gaus(0)+gaus(3)+gaus(6)",62000,65000);
   TimeFitFunc->SetParameter(0,TimeParam[0]);
   TimeFitFunc->SetParameter(1,TimeParam[1]);
   TimeFitFunc->SetParameter(2,TimeParam[2]);
   TimeFitFunc->SetParameter(3,TimeParam[3]);
   TimeFitFunc->SetParameter(4,TimeParam[4]);
   TimeFitFunc->SetParameter(5,TimeParam[5]);
   TimeFitFunc->SetParameter(6,TimeParam[6]);
   TimeFitFunc->SetParameter(7,TimeParam[7]);
   TimeFitFunc->SetParameter(8,TimeParam[8]);
   TimeHist->Fit("TimeFitFunc","","",62000,65000);

   TF1* TimeGaus1 = new TF1("TimeGaus1","gaus",62000,64000);
   TimeGaus1->SetParameter(0,TimeFitFunc->GetParameter(0));
   TimeGaus1->SetParameter(1,TimeFitFunc->GetParameter(1));
   TimeGaus1->SetParameter(2,TimeFitFunc->GetParameter(2));
   TimeGaus1->SetLineColor(4);
   TimeGaus1->Draw("SAME");

   TF1* TimeGaus2 = new TF1("TimeGaus2","gaus",62000,64000);
   TimeGaus2->SetParameter(0,TimeFitFunc->GetParameter(3));
   TimeGaus2->SetParameter(1,TimeFitFunc->GetParameter(4));
   TimeGaus2->SetParameter(2,TimeFitFunc->GetParameter(5));
   TimeGaus2->SetLineColor(6);
   TimeGaus2->Draw("SAME");

   TF1* TimeGaus3 = new TF1("TimeGaus3","gaus",62000,64000);
   TimeGaus3->SetParameter(0,TimeFitFunc->GetParameter(6));
   TimeGaus3->SetParameter(1,TimeFitFunc->GetParameter(7));
   TimeGaus3->SetParameter(2,TimeFitFunc->GetParameter(8));
   TimeGaus3->SetLineColor(8);
   TimeGaus3->Draw("SAME");


   ac->SaveAs(OutputFilename + "_Amp.C");

   tc->SaveAs(OutputFilename + "_Time.C");


   ofstream ParamOutput (OutputFilename + ".par");
   ParamOutput << "//FileName:" << endl;
   ParamOutput << outfilename << endl;
   for(int i=0; i<9; i++){
     ParamOutput << AmpFitFunc->GetParameter(i) << "\t" << TimeFitFunc->GetParameter(i) << "\t"
                 << AmpFitFunc->GetParError(i) << "\t" << TimeFitFunc->GetParError(i)
                 << endl;
   }
}
