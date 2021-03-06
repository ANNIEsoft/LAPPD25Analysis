void plot2700_2350_1550_Strip19C_Amp()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Dec 12 20:51:51 2018) by ROOT version6.06/08
   TCanvas *c1 = new TCanvas("c1", "c1",10,32,700,500);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   
   TH1D *AmpHist__1 = new TH1D("AmpHist__1","AmpHist",91,-0.5,90.5);
   AmpHist__1->SetBinContent(2,167);
   AmpHist__1->SetBinContent(3,65);
   AmpHist__1->SetBinContent(4,27);
   AmpHist__1->SetBinContent(5,24);
   AmpHist__1->SetBinContent(6,16);
   AmpHist__1->SetBinContent(7,28);
   AmpHist__1->SetBinContent(8,18);
   AmpHist__1->SetBinContent(9,12);
   AmpHist__1->SetBinContent(10,21);
   AmpHist__1->SetBinContent(11,21);
   AmpHist__1->SetBinContent(12,41);
   AmpHist__1->SetBinContent(13,22);
   AmpHist__1->SetBinContent(14,16);
   AmpHist__1->SetBinContent(15,17);
   AmpHist__1->SetBinContent(16,27);
   AmpHist__1->SetBinContent(17,27);
   AmpHist__1->SetBinContent(18,33);
   AmpHist__1->SetBinContent(19,27);
   AmpHist__1->SetBinContent(20,31);
   AmpHist__1->SetBinContent(21,32);
   AmpHist__1->SetBinContent(22,34);
   AmpHist__1->SetBinContent(23,37);
   AmpHist__1->SetBinContent(24,40);
   AmpHist__1->SetBinContent(25,35);
   AmpHist__1->SetBinContent(26,43);
   AmpHist__1->SetBinContent(27,43);
   AmpHist__1->SetBinContent(28,42);
   AmpHist__1->SetBinContent(29,52);
   AmpHist__1->SetBinContent(30,39);
   AmpHist__1->SetBinContent(31,35);
   AmpHist__1->SetBinContent(32,44);
   AmpHist__1->SetBinContent(33,40);
   AmpHist__1->SetBinContent(34,51);
   AmpHist__1->SetBinContent(35,49);
   AmpHist__1->SetBinContent(36,41);
   AmpHist__1->SetBinContent(37,52);
   AmpHist__1->SetBinContent(38,46);
   AmpHist__1->SetBinContent(39,53);
   AmpHist__1->SetBinContent(40,41);
   AmpHist__1->SetBinContent(41,32);
   AmpHist__1->SetBinContent(42,29);
   AmpHist__1->SetBinContent(43,45);
   AmpHist__1->SetBinContent(44,31);
   AmpHist__1->SetBinContent(45,32);
   AmpHist__1->SetBinContent(46,25);
   AmpHist__1->SetBinContent(47,22);
   AmpHist__1->SetBinContent(48,21);
   AmpHist__1->SetBinContent(49,34);
   AmpHist__1->SetBinContent(50,18);
   AmpHist__1->SetBinContent(51,15);
   AmpHist__1->SetBinContent(52,16);
   AmpHist__1->SetBinContent(53,13);
   AmpHist__1->SetBinContent(54,8);
   AmpHist__1->SetBinContent(55,8);
   AmpHist__1->SetBinContent(56,12);
   AmpHist__1->SetBinContent(57,13);
   AmpHist__1->SetBinContent(58,7);
   AmpHist__1->SetBinContent(59,5);
   AmpHist__1->SetBinContent(60,6);
   AmpHist__1->SetBinContent(61,3);
   AmpHist__1->SetBinContent(62,8);
   AmpHist__1->SetBinContent(63,3);
   AmpHist__1->SetBinContent(64,5);
   AmpHist__1->SetBinContent(65,3);
   AmpHist__1->SetBinContent(66,2);
   AmpHist__1->SetBinContent(67,2);
   AmpHist__1->SetBinContent(68,2);
   AmpHist__1->SetBinContent(69,3);
   AmpHist__1->SetBinContent(70,3);
   AmpHist__1->SetBinContent(71,4);
   AmpHist__1->SetBinContent(72,1);
   AmpHist__1->SetBinContent(73,1);
   AmpHist__1->SetBinContent(74,4);
   AmpHist__1->SetBinContent(75,4);
   AmpHist__1->SetBinContent(77,1);
   AmpHist__1->SetBinContent(78,1);
   AmpHist__1->SetBinContent(79,2);
   AmpHist__1->SetBinContent(82,1);
   AmpHist__1->SetBinContent(83,2);
   AmpHist__1->SetBinContent(85,1);
   AmpHist__1->SetBinContent(88,1);
   AmpHist__1->SetBinContent(92,2);
   AmpHist__1->SetEntries(1940);
   
   TF1 *AmpFitFunc1 = new TF1("AmpFitFunc","landau(0)+gaus(3)+gaus(6)",0,90);
   AmpFitFunc1->SetFillColor(19);
   AmpFitFunc1->SetFillStyle(0);
   AmpFitFunc1->SetLineColor(2);
   AmpFitFunc1->SetLineWidth(2);
   AmpFitFunc1->SetChisquare(71.24226);
   AmpFitFunc1->SetNDF(72);
   AmpFitFunc1->GetXaxis()->SetLabelFont(42);
   AmpFitFunc1->GetXaxis()->SetLabelSize(0.035);
   AmpFitFunc1->GetXaxis()->SetTitleSize(0.035);
   AmpFitFunc1->GetXaxis()->SetTitleFont(42);
   AmpFitFunc1->GetYaxis()->SetLabelFont(42);
   AmpFitFunc1->GetYaxis()->SetLabelSize(0.035);
   AmpFitFunc1->GetYaxis()->SetTitleSize(0.035);
   AmpFitFunc1->GetYaxis()->SetTitleFont(42);
   AmpFitFunc1->SetParameter(0,21403.1);
   AmpFitFunc1->SetParError(0,17702.89);
   AmpFitFunc1->SetParLimits(0,0,0);
   AmpFitFunc1->SetParameter(1,-0.4703597);
   AmpFitFunc1->SetParError(1,0.2002232);
   AmpFitFunc1->SetParLimits(1,0,0);
   AmpFitFunc1->SetParameter(2,0.1159999);
   AmpFitFunc1->SetParError(2,0.04669184);
   AmpFitFunc1->SetParLimits(2,0,0);
   AmpFitFunc1->SetParameter(3,45.28157);
   AmpFitFunc1->SetParError(3,1.50419);
   AmpFitFunc1->SetParLimits(3,0,0);
   AmpFitFunc1->SetParameter(4,30.68566);
   AmpFitFunc1->SetParError(4,0.4389992);
   AmpFitFunc1->SetParLimits(4,0,0);
   AmpFitFunc1->SetParameter(5,13.5654);
   AmpFitFunc1->SetParError(5,0.4082615);
   AmpFitFunc1->SetParLimits(5,0,1000);
   AmpFitFunc1->SetParameter(6,1.216705);
   AmpFitFunc1->SetParError(6,0.3826379);
   AmpFitFunc1->SetParLimits(6,0,20);
   AmpFitFunc1->SetParameter(7,74.99999);
   AmpFitFunc1->SetParError(7,12.73503);
   AmpFitFunc1->SetParLimits(7,55,75);
   AmpFitFunc1->SetParameter(8,12.00039);
   AmpFitFunc1->SetParError(8,7.099161);
   AmpFitFunc1->SetParLimits(8,12,20);
   AmpHist__1->GetListOfFunctions()->Add(AmpFitFunc1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   AmpHist__1->SetLineColor(ci);
   AmpHist__1->GetXaxis()->SetLabelFont(42);
   AmpHist__1->GetXaxis()->SetLabelSize(0.035);
   AmpHist__1->GetXaxis()->SetTitleSize(0.035);
   AmpHist__1->GetXaxis()->SetTitleFont(42);
   AmpHist__1->GetYaxis()->SetLabelFont(42);
   AmpHist__1->GetYaxis()->SetLabelSize(0.035);
   AmpHist__1->GetYaxis()->SetTitleSize(0.035);
   AmpHist__1->GetYaxis()->SetTitleFont(42);
   AmpHist__1->GetZaxis()->SetLabelFont(42);
   AmpHist__1->GetZaxis()->SetLabelSize(0.035);
   AmpHist__1->GetZaxis()->SetTitleSize(0.035);
   AmpHist__1->GetZaxis()->SetTitleFont(42);
   AmpHist__1->Draw("");
   
   TF1 *AmpNoiseFit2 = new TF1("AmpNoiseFit","landau",-0.5,90.5);
   AmpNoiseFit2->SetFillColor(19);
   AmpNoiseFit2->SetFillStyle(0);
   AmpNoiseFit2->SetLineColor(4);
   AmpNoiseFit2->SetLineWidth(2);
   AmpNoiseFit2->GetXaxis()->SetLabelFont(42);
   AmpNoiseFit2->GetXaxis()->SetLabelSize(0.035);
   AmpNoiseFit2->GetXaxis()->SetTitleSize(0.035);
   AmpNoiseFit2->GetXaxis()->SetTitleFont(42);
   AmpNoiseFit2->GetYaxis()->SetLabelFont(42);
   AmpNoiseFit2->GetYaxis()->SetLabelSize(0.035);
   AmpNoiseFit2->GetYaxis()->SetTitleSize(0.035);
   AmpNoiseFit2->GetYaxis()->SetTitleFont(42);
   AmpNoiseFit2->SetParameter(0,21403.1);
   AmpNoiseFit2->SetParError(0,0);
   AmpNoiseFit2->SetParLimits(0,0,0);
   AmpNoiseFit2->SetParameter(1,-0.4703597);
   AmpNoiseFit2->SetParError(1,0);
   AmpNoiseFit2->SetParLimits(1,0,0);
   AmpNoiseFit2->SetParameter(2,0.1159999);
   AmpNoiseFit2->SetParError(2,0);
   AmpNoiseFit2->SetParLimits(2,0,0);
   AmpNoiseFit2->Draw("SAME");
   
   TF1 *AmpSinglePEFit3 = new TF1("AmpSinglePEFit","gaus",-0.5,90.5);
   AmpSinglePEFit3->SetFillColor(19);
   AmpSinglePEFit3->SetFillStyle(0);
   AmpSinglePEFit3->SetLineColor(6);
   AmpSinglePEFit3->SetLineWidth(2);
   AmpSinglePEFit3->GetXaxis()->SetLabelFont(42);
   AmpSinglePEFit3->GetXaxis()->SetLabelSize(0.035);
   AmpSinglePEFit3->GetXaxis()->SetTitleSize(0.035);
   AmpSinglePEFit3->GetXaxis()->SetTitleFont(42);
   AmpSinglePEFit3->GetYaxis()->SetLabelFont(42);
   AmpSinglePEFit3->GetYaxis()->SetLabelSize(0.035);
   AmpSinglePEFit3->GetYaxis()->SetTitleSize(0.035);
   AmpSinglePEFit3->GetYaxis()->SetTitleFont(42);
   AmpSinglePEFit3->SetParameter(0,45.28157);
   AmpSinglePEFit3->SetParError(0,0);
   AmpSinglePEFit3->SetParLimits(0,0,0);
   AmpSinglePEFit3->SetParameter(1,30.68566);
   AmpSinglePEFit3->SetParError(1,0);
   AmpSinglePEFit3->SetParLimits(1,0,0);
   AmpSinglePEFit3->SetParameter(2,13.5654);
   AmpSinglePEFit3->SetParError(2,0);
   AmpSinglePEFit3->SetParLimits(2,0,0);
   AmpSinglePEFit3->Draw("SAME");
   
   TF1 *AmpDoublePEFit4 = new TF1("AmpDoublePEFit","gaus",-0.5,90.5);
   AmpDoublePEFit4->SetFillColor(19);
   AmpDoublePEFit4->SetFillStyle(0);
   AmpDoublePEFit4->SetLineColor(8);
   AmpDoublePEFit4->SetLineWidth(2);
   AmpDoublePEFit4->GetXaxis()->SetLabelFont(42);
   AmpDoublePEFit4->GetXaxis()->SetLabelSize(0.035);
   AmpDoublePEFit4->GetXaxis()->SetTitleSize(0.035);
   AmpDoublePEFit4->GetXaxis()->SetTitleFont(42);
   AmpDoublePEFit4->GetYaxis()->SetLabelFont(42);
   AmpDoublePEFit4->GetYaxis()->SetLabelSize(0.035);
   AmpDoublePEFit4->GetYaxis()->SetTitleSize(0.035);
   AmpDoublePEFit4->GetYaxis()->SetTitleFont(42);
   AmpDoublePEFit4->SetParameter(0,1.216705);
   AmpDoublePEFit4->SetParError(0,0);
   AmpDoublePEFit4->SetParLimits(0,0,0);
   AmpDoublePEFit4->SetParameter(1,74.99999);
   AmpDoublePEFit4->SetParError(1,0);
   AmpDoublePEFit4->SetParLimits(1,0,0);
   AmpDoublePEFit4->SetParameter(2,12.00039);
   AmpDoublePEFit4->SetParError(2,0);
   AmpDoublePEFit4->SetParLimits(2,0,0);
   AmpDoublePEFit4->Draw("SAME");
   
   TF1 *AmpFitFunc25 = new TF1("AmpFitFunc2","landau(0)+gaus(3)+gaus(6)",-0.5,90.5);
   AmpFitFunc25->SetFillColor(19);
   AmpFitFunc25->SetFillStyle(0);
   AmpFitFunc25->SetLineColor(2);
   AmpFitFunc25->SetLineWidth(2);
   AmpFitFunc25->GetXaxis()->SetLabelFont(42);
   AmpFitFunc25->GetXaxis()->SetLabelSize(0.035);
   AmpFitFunc25->GetXaxis()->SetTitleSize(0.035);
   AmpFitFunc25->GetXaxis()->SetTitleFont(42);
   AmpFitFunc25->GetYaxis()->SetLabelFont(42);
   AmpFitFunc25->GetYaxis()->SetLabelSize(0.035);
   AmpFitFunc25->GetYaxis()->SetTitleSize(0.035);
   AmpFitFunc25->GetYaxis()->SetTitleFont(42);
   AmpFitFunc25->SetParameter(0,21403.1);
   AmpFitFunc25->SetParError(0,0);
   AmpFitFunc25->SetParLimits(0,0,0);
   AmpFitFunc25->SetParameter(1,-0.4703597);
   AmpFitFunc25->SetParError(1,0);
   AmpFitFunc25->SetParLimits(1,0,0);
   AmpFitFunc25->SetParameter(2,0.1159999);
   AmpFitFunc25->SetParError(2,0);
   AmpFitFunc25->SetParLimits(2,0,0);
   AmpFitFunc25->SetParameter(3,45.28157);
   AmpFitFunc25->SetParError(3,0);
   AmpFitFunc25->SetParLimits(3,0,0);
   AmpFitFunc25->SetParameter(4,30.68566);
   AmpFitFunc25->SetParError(4,0);
   AmpFitFunc25->SetParLimits(4,0,0);
   AmpFitFunc25->SetParameter(5,13.5654);
   AmpFitFunc25->SetParError(5,0);
   AmpFitFunc25->SetParLimits(5,0,0);
   AmpFitFunc25->SetParameter(6,1.216705);
   AmpFitFunc25->SetParError(6,0);
   AmpFitFunc25->SetParLimits(6,0,0);
   AmpFitFunc25->SetParameter(7,74.99999);
   AmpFitFunc25->SetParError(7,0);
   AmpFitFunc25->SetParLimits(7,0,0);
   AmpFitFunc25->SetParameter(8,12.00039);
   AmpFitFunc25->SetParError(8,0);
   AmpFitFunc25->SetParLimits(8,0,0);
   AmpFitFunc25->Draw("SAME");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
