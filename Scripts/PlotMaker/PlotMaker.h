//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Sep  7 13:12:37 2018 by ROOT version 6.06/08
// from TTree LAPPDdata/LAPPDdata
// found on file: /annie/data/LAPPD25data/LAPPDlasertestData/5.14.18/2500_2150_1350_nd4_3strip_p12_stop0_channel0.root
//////////////////////////////////////////////////////////

#ifndef PlotMaker_h
#define PlotMaker_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class PlotMaker {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           iteration;
   Int_t           channel;
   Double_t        cfdtime;
   Double_t        amplitude;
   Double_t        Twidth;

   // List of branches
   TBranch        *b_iteration;   //!
   TBranch        *b_channel;   //!
   TBranch        *b_cfdtime;   //!
   TBranch        *b_amplitude;   //!
   TBranch        *b_Twidth;   //!

   PlotMaker(TTree *tree=0);
   virtual ~PlotMaker();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef PlotMaker_cxx
PlotMaker::PlotMaker(TTree *tree) : fChain(0)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/annie/data/LAPPD25data/LAPPDlasertestData/5.14.18/2500_2150_1350_nd4_3strip_p12_stop0_channel0.root");
      if (!f || !f->IsOpen()) {
      TString mainpath = "/annie/data/LAPPD25data/ToolAnalysisOutputs/";
      TString subpath = "9.6.18/";
      //TString filename = "7_30_18LAPPD25_Strip13R_2550_2200_1450.root";
      TString filename = "9_6_18LAPPD25_2700_2350_1550_2R.root";

      //TString filename = "7_30_18LAPPD25_Strip13R_2450_2350_1550.root";
	    f = new TFile(mainpath+subpath+filename);
      }
      f->GetObject("LAPPDdata",tree);

   }
   Init(tree);
}

PlotMaker::~PlotMaker()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t PlotMaker::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t PlotMaker::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void PlotMaker::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("iteration", &iteration, &b_iteration);
   fChain->SetBranchAddress("channel", &channel, &b_channel);
   fChain->SetBranchAddress("cfdtime", &cfdtime, &b_cfdtime);
   fChain->SetBranchAddress("amplitude", &amplitude, &b_amplitude);
   fChain->SetBranchAddress("Twidth", &Twidth, &b_Twidth);
   Notify();
}

Bool_t PlotMaker::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void PlotMaker::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t PlotMaker::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef PlotMaker_cxx
