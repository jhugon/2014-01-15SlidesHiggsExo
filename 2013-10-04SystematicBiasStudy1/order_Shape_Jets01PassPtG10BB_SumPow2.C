{
//=========Macro generated from canvas: canvas1380635114489994/
//=========  (Tue Oct  1 15:45:14 2013) by ROOT version5.32/00
   TCanvas *canvas1380635114489994 = new TCanvas("canvas1380635114489994", "",0,0,700,700);
   gStyle->SetOptStat(0);
   canvas1380635114489994->SetHighLightColor(2);
   canvas1380635114489994->Range(0,0,1,1);
   canvas1380635114489994->SetFillColor(0);
   canvas1380635114489994->SetBorderMode(0);
   canvas1380635114489994->SetBorderSize(10);
   canvas1380635114489994->SetTickx(1);
   canvas1380635114489994->SetTicky(1);
   canvas1380635114489994->SetLeftMargin(0.15);
   canvas1380635114489994->SetRightMargin(0.05);
   canvas1380635114489994->SetTopMargin(0.08);
   canvas1380635114489994->SetBottomMargin(0.13);
   canvas1380635114489994->SetFrameFillStyle(0);
   canvas1380635114489994->SetFrameLineStyle(0);
   canvas1380635114489994->SetFrameLineWidth(2);
   canvas1380635114489994->SetFrameBorderMode(0);
   canvas1380635114489994->SetFrameBorderSize(10);
  
// ------------>Primitives in pad: pad11380635114489994
   TPad *pad11380635114489994 = new TPad("pad11380635114489994", "",0.02,0.3,0.98,0.98);
   pad11380635114489994->Draw();
   pad11380635114489994->cd();
   pad11380635114489994->Range(100.625,-5.576431,163.125,1109.71);
   pad11380635114489994->SetFillColor(0);
   pad11380635114489994->SetBorderMode(0);
   pad11380635114489994->SetBorderSize(10);
   pad11380635114489994->SetTickx(1);
   pad11380635114489994->SetTicky(1);
   pad11380635114489994->SetLeftMargin(0.15);
   pad11380635114489994->SetRightMargin(0.05);
   pad11380635114489994->SetTopMargin(0.08);
   pad11380635114489994->SetBottomMargin(0.005);
   pad11380635114489994->SetFrameFillStyle(0);
   pad11380635114489994->SetFrameLineStyle(0);
   pad11380635114489994->SetFrameLineWidth(2);
   pad11380635114489994->SetFrameBorderMode(0);
   pad11380635114489994->SetFrameBorderSize(10);
   pad11380635114489994->SetFrameFillStyle(0);
   pad11380635114489994->SetFrameLineStyle(0);
   pad11380635114489994->SetFrameLineWidth(2);
   pad11380635114489994->SetFrameBorderMode(0);
   pad11380635114489994->SetFrameBorderSize(10);
   
   TH1D *frame_12e64c10__9 = new TH1D("frame_12e64c10__9","",50,110,160);
   frame_12e64c10__9->SetMaximum(1020.487);
   frame_12e64c10__9->SetDirectory(0);
   frame_12e64c10__9->SetStats(0);
   frame_12e64c10__9->SetLineWidth(2);
   frame_12e64c10__9->SetMarkerStyle(20);
   frame_12e64c10__9->SetMarkerSize(1.2);
   frame_12e64c10__9->GetXaxis()->SetTitle("M(#mu#mu) [GeV/c^{2}]");
   frame_12e64c10__9->GetXaxis()->SetNdivisions(505);
   frame_12e64c10__9->GetXaxis()->SetLabelFont(42);
   frame_12e64c10__9->GetXaxis()->SetLabelOffset(0.01);
   frame_12e64c10__9->GetXaxis()->SetLabelSize(0);
   frame_12e64c10__9->GetXaxis()->SetTitleSize(0.045);
   frame_12e64c10__9->GetXaxis()->SetTitleOffset(1.4);
   frame_12e64c10__9->GetXaxis()->SetTitleFont(42);
   frame_12e64c10__9->GetYaxis()->SetTitle("Events/1.0 GeV/c^{2}");
   frame_12e64c10__9->GetYaxis()->SetLabelFont(42);
   frame_12e64c10__9->GetYaxis()->SetLabelOffset(0.01);
   frame_12e64c10__9->GetYaxis()->SetLabelSize(0.05);
   frame_12e64c10__9->GetYaxis()->SetTitleSize(0.066);
   frame_12e64c10__9->GetYaxis()->SetTitleOffset(1.19);
   frame_12e64c10__9->GetYaxis()->SetTitleFont(42);
   frame_12e64c10__9->Draw("");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(50);
   grae->SetName("h_realDataJets01PassPtG10BB8TeV");
   grae->SetTitle("Histogram of realDataJets01PassPtG10BB8TeV_plot__dimuonMass");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(8);
   grae->SetMarkerSize(1.2);
   grae->SetPoint(0,110.5,861);
   grae->SetPointError(0,0.5,0.5,28.84706,29.84706);
   grae->SetPoint(1,111.5,776);
   grae->SetPointError(1,0.5,0.5,27.36126,28.36126);
   grae->SetPoint(2,112.5,666);
   grae->SetPointError(2,0.5,0.5,25.31182,26.31182);
   grae->SetPoint(3,113.5,647);
   grae->SetPointError(3,0.5,0.5,24.94111,25.94111);
   grae->SetPoint(4,114.5,615);
   grae->SetPointError(4,0.5,0.5,24.30423,25.30423);
   grae->SetPoint(5,115.5,549);
   grae->SetPointError(5,0.5,0.5,22.93608,23.93608);
   grae->SetPoint(6,116.5,539);
   grae->SetPointError(6,0.5,0.5,22.72176,23.72176);
   grae->SetPoint(7,117.5,471);
   grae->SetPointError(7,0.5,0.5,21.20829,22.20829);
   grae->SetPoint(8,118.5,487);
   grae->SetPointError(8,0.5,0.5,21.57374,22.57374);
   grae->SetPoint(9,119.5,423);
   grae->SetPointError(9,0.5,0.5,20.07304,21.07304);
   grae->SetPoint(10,120.5,378);
   grae->SetPointError(10,0.5,0.5,18.94865,19.94865);
   grae->SetPoint(11,121.5,356);
   grae->SetPointError(11,0.5,0.5,18.37459,19.37459);
   grae->SetPoint(12,122.5,335);
   grae->SetPointError(12,0.5,0.5,17.80983,18.80983);
   grae->SetPoint(13,123.5,364);
   grae->SetPointError(13,0.5,0.5,18.58533,19.58533);
   grae->SetPoint(14,124.5,335);
   grae->SetPointError(14,0.5,0.5,17.80983,18.80983);
   grae->SetPoint(15,125.5,348);
   grae->SetPointError(15,0.5,0.5,18.16146,19.16146);
   grae->SetPoint(16,126.5,298);
   grae->SetPointError(16,0.5,0.5,16.76992,17.76992);
   grae->SetPoint(17,127.5,263);
   grae->SetPointError(17,0.5,0.5,15.72498,16.72498);
   grae->SetPoint(18,128.5,288);
   grae->SetPointError(18,0.5,0.5,16.47793,17.47793);
   grae->SetPoint(19,129.5,251);
   grae->SetPointError(19,0.5,0.5,15.35087,16.35087);
   grae->SetPoint(20,130.5,243);
   grae->SetPointError(20,0.5,0.5,15.09647,16.09647);
   grae->SetPoint(21,131.5,230);
   grae->SetPointError(21,0.5,0.5,14.67399,15.67399);
   grae->SetPoint(22,132.5,212);
   grae->SetPointError(22,0.5,0.5,14.0688,15.0688);
   grae->SetPoint(23,133.5,222);
   grae->SetPointError(23,0.5,0.5,14.40805,15.40805);
   grae->SetPoint(24,134.5,209);
   grae->SetPointError(24,0.5,0.5,13.96548,14.96548);
   grae->SetPoint(25,135.5,207);
   grae->SetPointError(25,0.5,0.5,13.89618,14.89618);
   grae->SetPoint(26,136.5,187);
   grae->SetPointError(26,0.5,0.5,13.18393,14.18393);
   grae->SetPoint(27,137.5,152);
   grae->SetPointError(27,0.5,0.5,11.83896,12.83896);
   grae->SetPoint(28,138.5,187);
   grae->SetPointError(28,0.5,0.5,13.18393,14.18393);
   grae->SetPoint(29,139.5,174);
   grae->SetPointError(29,0.5,0.5,12.70038,13.70038);
   grae->SetPoint(30,140.5,156);
   grae->SetPointError(30,0.5,0.5,12,13);
   grae->SetPoint(31,141.5,152);
   grae->SetPointError(31,0.5,0.5,11.83896,12.83896);
   grae->SetPoint(32,142.5,149);
   grae->SetPointError(32,0.5,0.5,11.71679,12.71679);
   grae->SetPoint(33,143.5,148);
   grae->SetPointError(33,0.5,0.5,11.6758,12.6758);
   grae->SetPoint(34,144.5,144);
   grae->SetPointError(34,0.5,0.5,11.51041,12.51041);
   grae->SetPoint(35,145.5,138);
   grae->SetPointError(35,0.5,0.5,11.25798,12.25798);
   grae->SetPoint(36,146.5,153);
   grae->SetPointError(36,0.5,0.5,11.87942,12.87942);
   grae->SetPoint(37,147.5,144);
   grae->SetPointError(37,0.5,0.5,11.51041,12.51041);
   grae->SetPoint(38,148.5,143);
   grae->SetPointError(38,0.5,0.5,11.46871,12.46871);
   grae->SetPoint(39,149.5,125);
   grae->SetPointError(39,0.5,0.5,10.69151,11.69151);
   grae->SetPoint(40,150.5,130);
   grae->SetPointError(40,0.5,0.5,10.91271,11.91271);
   grae->SetPoint(41,151.5,119);
   grae->SetPointError(41,0.5,0.5,10.42016,11.42016);
   grae->SetPoint(42,152.5,93);
   grae->SetPointError(42,0.5,0.5,9.626284,10.67824);
   grae->SetPoint(43,153.5,116);
   grae->SetPointError(43,0.5,0.5,10.28193,11.28193);
   grae->SetPoint(44,154.5,120);
   grae->SetPointError(44,0.5,0.5,10.46586,11.46586);
   grae->SetPoint(45,155.5,85);
   grae->SetPointError(45,0.5,0.5,9.201374,10.25573);
   grae->SetPoint(46,156.5,102);
   grae->SetPointError(46,0.5,0.5,9.611874,10.61187);
   grae->SetPoint(47,157.5,84);
   grae->SetPointError(47,0.5,0.5,9.146873,10.20155);
   grae->SetPoint(48,158.5,105);
   grae->SetPointError(48,0.5,0.5,9.759142,10.75914);
   grae->SetPoint(49,159.5,96);
   grae->SetPointError(49,0.5,0.5,9.780867,10.83201);
   
   TH1F *Graph_h_realDataJets01PassPtG10BB8TeV9 = new TH1F("Graph_h_realDataJets01PassPtG10BB8TeV9","Histogram of realDataJets01PassPtG10BB8TeV_plot__dimuonMass",100,105,165);
   Graph_h_realDataJets01PassPtG10BB8TeV9->SetMinimum(0);
   Graph_h_realDataJets01PassPtG10BB8TeV9->SetMaximum(972.4465);
   Graph_h_realDataJets01PassPtG10BB8TeV9->SetDirectory(0);
   Graph_h_realDataJets01PassPtG10BB8TeV9->SetStats(0);
   Graph_h_realDataJets01PassPtG10BB8TeV9->SetLineWidth(2);
   Graph_h_realDataJets01PassPtG10BB8TeV9->SetMarkerStyle(20);
   Graph_h_realDataJets01PassPtG10BB8TeV9->SetMarkerSize(1.2);
   Graph_h_realDataJets01PassPtG10BB8TeV9->GetXaxis()->SetNdivisions(505);
   Graph_h_realDataJets01PassPtG10BB8TeV9->GetXaxis()->SetLabelFont(42);
   Graph_h_realDataJets01PassPtG10BB8TeV9->GetXaxis()->SetLabelOffset(0.01);
   Graph_h_realDataJets01PassPtG10BB8TeV9->GetXaxis()->SetTitleSize(0.045);
   Graph_h_realDataJets01PassPtG10BB8TeV9->GetXaxis()->SetTitleOffset(1.4);
   Graph_h_realDataJets01PassPtG10BB8TeV9->GetXaxis()->SetTitleFont(42);
   Graph_h_realDataJets01PassPtG10BB8TeV9->GetYaxis()->SetLabelFont(42);
   Graph_h_realDataJets01PassPtG10BB8TeV9->GetYaxis()->SetLabelOffset(0.01);
   Graph_h_realDataJets01PassPtG10BB8TeV9->GetYaxis()->SetTitleSize(0.045);
   Graph_h_realDataJets01PassPtG10BB8TeV9->GetYaxis()->SetTitleOffset(1.4);
   Graph_h_realDataJets01PassPtG10BB8TeV9->GetYaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_h_realDataJets01PassPtG10BB8TeV9);
   
   grae->Draw("pez");
   
   TGraph *graph = new TGraph(104);
   graph->SetName("bakError1380635114489994");
   graph->SetTitle("");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#00ffff");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   graph->SetLineColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,110,859.811672);
   graph->SetPoint(1,111,802.7506803);
   graph->SetPoint(2,112,750.2520439);
   graph->SetPoint(3,113,701.9029942);
   graph->SetPoint(4,114,657.3321183);
   graph->SetPoint(5,115,616.204959);
   graph->SetPoint(6,116,578.2201672);
   graph->SetPoint(7,117,543.1061705);
   graph->SetPoint(8,118,510.6183532);
   graph->SetPoint(9,119,480.5368059);
   graph->SetPoint(10,120,452.6648389);
   graph->SetPoint(11,121,426.8287787);
   graph->SetPoint(12,122,402.8804344);
   graph->SetPoint(13,123,380.7060207);
   graph->SetPoint(14,124,360.2509755);
   graph->SetPoint(15,125,341.5667119);
   graph->SetPoint(16,126,324.7603833);
   graph->SetPoint(17,127,309.6568406);
   graph->SetPoint(18,128,295.8348819);
   graph->SetPoint(19,129,282.9949249);
   graph->SetPoint(20,130,270.9766314);
   graph->SetPoint(21,131,259.6839093);
   graph->SetPoint(22,132,249.0486204);
   graph->SetPoint(23,133,239.0165824);
   graph->SetPoint(24,134,229.5418354);
   graph->SetPoint(25,135,220.5840023);
   graph->SetPoint(26,136,212.1069114);
   graph->SetPoint(27,137,204.077787);
   graph->SetPoint(28,138,196.4667206);
   graph->SetPoint(29,139,189.2462934);
   graph->SetPoint(30,140,182.3912874);
   graph->SetPoint(31,141,175.8784536);
   graph->SetPoint(32,142,169.686318);
   graph->SetPoint(33,143,163.7950158);
   graph->SetPoint(34,144,158.1861472);
   graph->SetPoint(35,145,152.8426492);
   graph->SetPoint(36,146,147.7486827);
   graph->SetPoint(37,147,142.8895305);
   graph->SetPoint(38,148,138.2515055);
   graph->SetPoint(39,149,133.8218677);
   graph->SetPoint(40,150,129.5887493);
   graph->SetPoint(41,151,125.5410859);
   graph->SetPoint(42,152,121.6685547);
   graph->SetPoint(43,153,117.9615174);
   graph->SetPoint(44,154,114.410968);
   graph->SetPoint(45,155,111.008486);
   graph->SetPoint(46,156,107.7461924);
   graph->SetPoint(47,157,104.6167098);
   graph->SetPoint(48,158,101.6131262);
   graph->SetPoint(49,159,98.72896079);
   graph->SetPoint(50,160,95.95813361);
   graph->SetPoint(51,160,95.95813361);
   graph->SetPoint(52,160,74.39255772);
   graph->SetPoint(53,160,74.39255772);
   graph->SetPoint(54,159,76.98269893);
   graph->SetPoint(55,158,79.69618306);
   graph->SetPoint(56,157,82.54043628);
   graph->SetPoint(57,156,85.52341441);
   graph->SetPoint(58,155,88.65364582);
   graph->SetPoint(59,154,91.9402781);
   graph->SetPoint(60,153,95.39312892);
   graph->SetPoint(61,152,99.02274153);
   graph->SetPoint(62,151,102.8404453);
   graph->SetPoint(63,150,106.8584217);
   graph->SetPoint(64,149,111.0897764);
   graph->SetPoint(65,148,115.5486181);
   graph->SetPoint(66,147,120.2501443);
   graph->SetPoint(67,146,125.2107352);
   graph->SetPoint(68,145,130.4480566);
   graph->SetPoint(69,144,135.9811709);
   graph->SetPoint(70,143,141.83066);
   graph->SetPoint(71,142,148.018757);
   graph->SetPoint(72,141,154.5694913);
   graph->SetPoint(73,140,161.5088429);
   graph->SetPoint(74,139,168.8649107);
   graph->SetPoint(75,138,176.6680882);
   graph->SetPoint(76,137,184.9512488);
   graph->SetPoint(77,136,193.7499291);
   graph->SetPoint(78,135,203.1025002);
   graph->SetPoint(79,134,213.0502982);
   graph->SetPoint(80,133,223.6376554);
   graph->SetPoint(81,132,234.9117123);
   graph->SetPoint(82,131,246.9217267);
   graph->SetPoint(83,130,259.717195);
   graph->SetPoint(84,129,273.3429632);
   graph->SetPoint(85,128,287.8261651);
   graph->SetPoint(86,127,303.1409709);
   graph->SetPoint(87,126,319.1347464);
   graph->SetPoint(88,125,335.5469639);
   graph->SetPoint(89,124,352.3783094);
   graph->SetPoint(90,123,369.92853);
   graph->SetPoint(91,122,388.4601759);
   graph->SetPoint(92,121,408.1503563);
   graph->SetPoint(93,120,429.1397202);
   graph->SetPoint(94,119,451.5597656);
   graph->SetPoint(95,118,475.5445548);
   graph->SetPoint(96,117,501.236312);
   graph->SetPoint(97,116,528.7887337);
   graph->SetPoint(98,115,558.3694501);
   graph->SetPoint(99,114,590.1622167);
   graph->SetPoint(100,113,624.3690946);
   graph->SetPoint(101,112,661.2127554);
   graph->SetPoint(102,111,700.9389947);
   graph->SetPoint(103,110,743.8195171);
   
   TH1F *Graph_bakError13806351144899949 = new TH1F("Graph_bakError13806351144899949","",104,105,165);
   Graph_bakError13806351144899949->SetMinimum(0);
   Graph_bakError13806351144899949->SetMaximum(938.3536);
   Graph_bakError13806351144899949->SetDirectory(0);
   Graph_bakError13806351144899949->SetStats(0);
   Graph_bakError13806351144899949->SetLineWidth(2);
   Graph_bakError13806351144899949->SetMarkerStyle(20);
   Graph_bakError13806351144899949->SetMarkerSize(1.2);
   Graph_bakError13806351144899949->GetXaxis()->SetNdivisions(505);
   Graph_bakError13806351144899949->GetXaxis()->SetLabelFont(42);
   Graph_bakError13806351144899949->GetXaxis()->SetLabelOffset(0.01);
   Graph_bakError13806351144899949->GetXaxis()->SetTitleSize(0.045);
   Graph_bakError13806351144899949->GetXaxis()->SetTitleOffset(1.4);
   Graph_bakError13806351144899949->GetXaxis()->SetTitleFont(42);
   Graph_bakError13806351144899949->GetYaxis()->SetLabelFont(42);
   Graph_bakError13806351144899949->GetYaxis()->SetLabelOffset(0.01);
   Graph_bakError13806351144899949->GetYaxis()->SetTitleSize(0.045);
   Graph_bakError13806351144899949->GetYaxis()->SetTitleOffset(1.4);
   Graph_bakError13806351144899949->GetYaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_bakError13806351144899949);
   
   graph->Draw("f");
   
   graph = new TGraph(52);
   graph->SetName("bak1380635114489994");
   graph->SetTitle("Projection of Sum of Powers Order: 2");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   graph->SetPoint(0,110,801.8155946);
   graph->SetPoint(1,111,751.8448375);
   graph->SetPoint(2,112,705.7323997);
   graph->SetPoint(3,113,663.1360444);
   graph->SetPoint(4,114,623.7471675);
   graph->SetPoint(5,115,587.2872046);
   graph->SetPoint(6,116,553.5044504);
   graph->SetPoint(7,117,522.1712413);
   graph->SetPoint(8,118,493.081454);
   graph->SetPoint(9,119,466.0482857);
   graph->SetPoint(10,120,440.9022796);
   graph->SetPoint(11,121,417.4895675);
   graph->SetPoint(12,122,395.6703051);
   graph->SetPoint(13,123,375.3172754);
   graph->SetPoint(14,124,356.3146424);
   graph->SetPoint(15,125,338.5568379);
   graph->SetPoint(16,126,321.9475649);
   graph->SetPoint(17,127,306.3989058);
   graph->SetPoint(18,128,291.8305235);
   graph->SetPoint(19,129,278.168944);
   graph->SetPoint(20,130,265.3469132);
   graph->SetPoint(21,131,253.302818);
   graph->SetPoint(22,132,241.9801664);
   graph->SetPoint(23,133,231.3271189);
   graph->SetPoint(24,134,221.2960668);
   graph->SetPoint(25,135,211.8432513);
   graph->SetPoint(26,136,202.9284202);
   graph->SetPoint(27,137,194.5145179);
   graph->SetPoint(28,138,186.5674044);
   graph->SetPoint(29,139,179.055602);
   graph->SetPoint(30,140,171.9500652);
   graph->SetPoint(31,141,165.2239724);
   graph->SetPoint(32,142,158.8525375);
   graph->SetPoint(33,143,152.8128379);
   graph->SetPoint(34,144,147.083659);
   graph->SetPoint(35,145,141.6453529);
   graph->SetPoint(36,146,136.479709);
   graph->SetPoint(37,147,131.5698374);
   graph->SetPoint(38,148,126.9000618);
   graph->SetPoint(39,149,122.4558221);
   graph->SetPoint(40,150,118.2235855);
   graph->SetPoint(41,151,114.1907656);
   graph->SetPoint(42,152,110.3456481);
   graph->SetPoint(43,153,106.6773231);
   graph->SetPoint(44,154,103.175623);
   graph->SetPoint(45,155,99.83106592);
   graph->SetPoint(46,156,96.63480341);
   graph->SetPoint(47,157,93.57857306);
   graph->SetPoint(48,158,90.65465463);
   graph->SetPoint(49,159,87.85582986);
   graph->SetPoint(50,160,85.17534566);
   graph->SetPoint(51,160,85.17534566);
   
   TH1F *Graph_bak138063511448999410 = new TH1F("Graph_bak138063511448999410","Projection of Sum of Powers Order: 2",100,105,165);
   Graph_bak138063511448999410->SetMinimum(13.51132);
   Graph_bak138063511448999410->SetMaximum(873.4796);
   Graph_bak138063511448999410->SetDirectory(0);
   Graph_bak138063511448999410->SetStats(0);
   Graph_bak138063511448999410->SetLineWidth(2);
   Graph_bak138063511448999410->SetMarkerStyle(20);
   Graph_bak138063511448999410->SetMarkerSize(1.2);
   Graph_bak138063511448999410->GetXaxis()->SetNdivisions(505);
   Graph_bak138063511448999410->GetXaxis()->SetLabelFont(42);
   Graph_bak138063511448999410->GetXaxis()->SetLabelOffset(0.01);
   Graph_bak138063511448999410->GetXaxis()->SetTitleSize(0.045);
   Graph_bak138063511448999410->GetXaxis()->SetTitleOffset(1.4);
   Graph_bak138063511448999410->GetXaxis()->SetTitleFont(42);
   Graph_bak138063511448999410->GetYaxis()->SetLabelFont(42);
   Graph_bak138063511448999410->GetYaxis()->SetLabelOffset(0.01);
   Graph_bak138063511448999410->GetYaxis()->SetTitleSize(0.045);
   Graph_bak138063511448999410->GetYaxis()->SetTitleOffset(1.4);
   Graph_bak138063511448999410->GetYaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_bak138063511448999410);
   
   graph->Draw("l");
   
   grae = new TGraphAsymmErrors(50);
   grae->SetName("realDataJets01PassPtG10BB8TeV1380635114489994");
   grae->SetTitle("Histogram of realDataJets01PassPtG10BB8TeV_plot__dimuonMass");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(8);
   grae->SetMarkerSize(1.2);
   grae->SetPoint(0,110.5,861);
   grae->SetPointError(0,0.5,0.5,28.84706,29.84706);
   grae->SetPoint(1,111.5,776);
   grae->SetPointError(1,0.5,0.5,27.36126,28.36126);
   grae->SetPoint(2,112.5,666);
   grae->SetPointError(2,0.5,0.5,25.31182,26.31182);
   grae->SetPoint(3,113.5,647);
   grae->SetPointError(3,0.5,0.5,24.94111,25.94111);
   grae->SetPoint(4,114.5,615);
   grae->SetPointError(4,0.5,0.5,24.30423,25.30423);
   grae->SetPoint(5,115.5,549);
   grae->SetPointError(5,0.5,0.5,22.93608,23.93608);
   grae->SetPoint(6,116.5,539);
   grae->SetPointError(6,0.5,0.5,22.72176,23.72176);
   grae->SetPoint(7,117.5,471);
   grae->SetPointError(7,0.5,0.5,21.20829,22.20829);
   grae->SetPoint(8,118.5,487);
   grae->SetPointError(8,0.5,0.5,21.57374,22.57374);
   grae->SetPoint(9,119.5,423);
   grae->SetPointError(9,0.5,0.5,20.07304,21.07304);
   grae->SetPoint(10,120.5,378);
   grae->SetPointError(10,0.5,0.5,18.94865,19.94865);
   grae->SetPoint(11,121.5,356);
   grae->SetPointError(11,0.5,0.5,18.37459,19.37459);
   grae->SetPoint(12,122.5,335);
   grae->SetPointError(12,0.5,0.5,17.80983,18.80983);
   grae->SetPoint(13,123.5,364);
   grae->SetPointError(13,0.5,0.5,18.58533,19.58533);
   grae->SetPoint(14,124.5,335);
   grae->SetPointError(14,0.5,0.5,17.80983,18.80983);
   grae->SetPoint(15,125.5,348);
   grae->SetPointError(15,0.5,0.5,18.16146,19.16146);
   grae->SetPoint(16,126.5,298);
   grae->SetPointError(16,0.5,0.5,16.76992,17.76992);
   grae->SetPoint(17,127.5,263);
   grae->SetPointError(17,0.5,0.5,15.72498,16.72498);
   grae->SetPoint(18,128.5,288);
   grae->SetPointError(18,0.5,0.5,16.47793,17.47793);
   grae->SetPoint(19,129.5,251);
   grae->SetPointError(19,0.5,0.5,15.35087,16.35087);
   grae->SetPoint(20,130.5,243);
   grae->SetPointError(20,0.5,0.5,15.09647,16.09647);
   grae->SetPoint(21,131.5,230);
   grae->SetPointError(21,0.5,0.5,14.67399,15.67399);
   grae->SetPoint(22,132.5,212);
   grae->SetPointError(22,0.5,0.5,14.0688,15.0688);
   grae->SetPoint(23,133.5,222);
   grae->SetPointError(23,0.5,0.5,14.40805,15.40805);
   grae->SetPoint(24,134.5,209);
   grae->SetPointError(24,0.5,0.5,13.96548,14.96548);
   grae->SetPoint(25,135.5,207);
   grae->SetPointError(25,0.5,0.5,13.89618,14.89618);
   grae->SetPoint(26,136.5,187);
   grae->SetPointError(26,0.5,0.5,13.18393,14.18393);
   grae->SetPoint(27,137.5,152);
   grae->SetPointError(27,0.5,0.5,11.83896,12.83896);
   grae->SetPoint(28,138.5,187);
   grae->SetPointError(28,0.5,0.5,13.18393,14.18393);
   grae->SetPoint(29,139.5,174);
   grae->SetPointError(29,0.5,0.5,12.70038,13.70038);
   grae->SetPoint(30,140.5,156);
   grae->SetPointError(30,0.5,0.5,12,13);
   grae->SetPoint(31,141.5,152);
   grae->SetPointError(31,0.5,0.5,11.83896,12.83896);
   grae->SetPoint(32,142.5,149);
   grae->SetPointError(32,0.5,0.5,11.71679,12.71679);
   grae->SetPoint(33,143.5,148);
   grae->SetPointError(33,0.5,0.5,11.6758,12.6758);
   grae->SetPoint(34,144.5,144);
   grae->SetPointError(34,0.5,0.5,11.51041,12.51041);
   grae->SetPoint(35,145.5,138);
   grae->SetPointError(35,0.5,0.5,11.25798,12.25798);
   grae->SetPoint(36,146.5,153);
   grae->SetPointError(36,0.5,0.5,11.87942,12.87942);
   grae->SetPoint(37,147.5,144);
   grae->SetPointError(37,0.5,0.5,11.51041,12.51041);
   grae->SetPoint(38,148.5,143);
   grae->SetPointError(38,0.5,0.5,11.46871,12.46871);
   grae->SetPoint(39,149.5,125);
   grae->SetPointError(39,0.5,0.5,10.69151,11.69151);
   grae->SetPoint(40,150.5,130);
   grae->SetPointError(40,0.5,0.5,10.91271,11.91271);
   grae->SetPoint(41,151.5,119);
   grae->SetPointError(41,0.5,0.5,10.42016,11.42016);
   grae->SetPoint(42,152.5,93);
   grae->SetPointError(42,0.5,0.5,9.626284,10.67824);
   grae->SetPoint(43,153.5,116);
   grae->SetPointError(43,0.5,0.5,10.28193,11.28193);
   grae->SetPoint(44,154.5,120);
   grae->SetPointError(44,0.5,0.5,10.46586,11.46586);
   grae->SetPoint(45,155.5,85);
   grae->SetPointError(45,0.5,0.5,9.201374,10.25573);
   grae->SetPoint(46,156.5,102);
   grae->SetPointError(46,0.5,0.5,9.611874,10.61187);
   grae->SetPoint(47,157.5,84);
   grae->SetPointError(47,0.5,0.5,9.146873,10.20155);
   grae->SetPoint(48,158.5,105);
   grae->SetPointError(48,0.5,0.5,9.759142,10.75914);
   grae->SetPoint(49,159.5,96);
   grae->SetPointError(49,0.5,0.5,9.780867,10.83201);
   
   TH1F *Graph_realDataJets01PassPtG10BB8TeV138063511448999410 = new TH1F("Graph_realDataJets01PassPtG10BB8TeV138063511448999410","Histogram of realDataJets01PassPtG10BB8TeV_plot__dimuonMass",100,105,165);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->SetMinimum(0);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->SetMaximum(972.4465);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->SetDirectory(0);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->SetStats(0);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->SetLineWidth(2);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->SetMarkerStyle(20);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->SetMarkerSize(1.2);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->GetXaxis()->SetNdivisions(505);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->GetXaxis()->SetLabelFont(42);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->GetXaxis()->SetLabelOffset(0.01);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->GetXaxis()->SetTitleSize(0.045);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->GetXaxis()->SetTitleOffset(1.4);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->GetXaxis()->SetTitleFont(42);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->GetYaxis()->SetLabelFont(42);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->GetYaxis()->SetLabelOffset(0.01);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->GetYaxis()->SetTitleSize(0.045);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->GetYaxis()->SetTitleOffset(1.4);
   Graph_realDataJets01PassPtG10BB8TeV138063511448999410->GetYaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_realDataJets01PassPtG10BB8TeV138063511448999410);
   
   grae->Draw("pez");
   
   TH1D *frame_12e64c10__10 = new TH1D("frame_12e64c10__10","",50,110,160);
   frame_12e64c10__10->SetMaximum(1020.487);
   frame_12e64c10__10->SetDirectory(0);
   frame_12e64c10__10->SetStats(0);
   frame_12e64c10__10->SetLineWidth(2);
   frame_12e64c10__10->SetMarkerStyle(20);
   frame_12e64c10__10->SetMarkerSize(1.2);
   frame_12e64c10__10->GetXaxis()->SetTitle("M(#mu#mu) [GeV/c^{2}]");
   frame_12e64c10__10->GetXaxis()->SetNdivisions(505);
   frame_12e64c10__10->GetXaxis()->SetLabelFont(42);
   frame_12e64c10__10->GetXaxis()->SetLabelOffset(0.01);
   frame_12e64c10__10->GetXaxis()->SetLabelSize(0);
   frame_12e64c10__10->GetXaxis()->SetTitleSize(0.045);
   frame_12e64c10__10->GetXaxis()->SetTitleOffset(1.4);
   frame_12e64c10__10->GetXaxis()->SetTitleFont(42);
   frame_12e64c10__10->GetYaxis()->SetTitle("Events/1.0 GeV/c^{2}");
   frame_12e64c10__10->GetYaxis()->SetLabelFont(42);
   frame_12e64c10__10->GetYaxis()->SetLabelOffset(0.01);
   frame_12e64c10__10->GetYaxis()->SetLabelSize(0.05);
   frame_12e64c10__10->GetYaxis()->SetTitleSize(0.066);
   frame_12e64c10__10->GetYaxis()->SetTitleOffset(1.19);
   frame_12e64c10__10->GetYaxis()->SetTitleFont(42);
   frame_12e64c10__10->Draw("AXISSAME");
   
   TLegend *leg = new TLegend(0.65,0.65,0.94,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("phonyFitDat1380635114489994","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry=leg->AddEntry("phonyFit1380635114489994","Background Model","lf");

   ci = TColor::GetColor("#00ffff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.15,0.96,"CMS Preliminary");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.05894737);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.95,0.96,"0,1-Jet Tight BB");
tex->SetNDC();
   tex->SetTextAlign(32);
   tex->SetTextFont(42);
   tex->SetTextSize(0.05894737);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.64,0.82,"L = 19.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextAlign(32);
   tex->SetTextFont(42);
   tex->SetTextSize(0.05894737);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.64,0.875,"#sqrt{s} = 8TeV");
tex->SetNDC();
   tex->SetTextAlign(32);
   tex->SetTextFont(42);
   tex->SetTextSize(0.05894737);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.64,0.765,"SumPow Order 2");
tex->SetNDC();
   tex->SetTextAlign(32);
   tex->SetTextFont(42);
   tex->SetTextSize(0.05894737);
   tex->SetLineWidth(2);
   tex->Draw();
   pad11380635114489994->Modified();
   canvas1380635114489994->cd();
  
// ------------>Primitives in pad: pad21380635114489994
   pad21380635114489994 = new TPad("pad21380635114489994", "",0.02,0.01,0.98,0.29);
   pad21380635114489994->Draw();
   pad21380635114489994->cd();
   pad21380635114489994->Range(100.625,-6.262452,163.125,3.373212);
   pad21380635114489994->SetFillColor(0);
   pad21380635114489994->SetBorderMode(0);
   pad21380635114489994->SetBorderSize(10);
   pad21380635114489994->SetTickx(1);
   pad21380635114489994->SetTicky(1);
   pad21380635114489994->SetLeftMargin(0.15);
   pad21380635114489994->SetRightMargin(0.05);
   pad21380635114489994->SetTopMargin(0.005);
   pad21380635114489994->SetBottomMargin(0.33);
   pad21380635114489994->SetFrameFillStyle(0);
   pad21380635114489994->SetFrameLineStyle(0);
   pad21380635114489994->SetFrameLineWidth(2);
   pad21380635114489994->SetFrameBorderMode(0);
   pad21380635114489994->SetFrameBorderSize(10);
   pad21380635114489994->SetFrameFillStyle(0);
   pad21380635114489994->SetFrameLineStyle(0);
   pad21380635114489994->SetFrameLineWidth(2);
   pad21380635114489994->SetFrameBorderMode(0);
   pad21380635114489994->SetFrameBorderSize(10);
   
   TH1F *pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994 = new TH1F("pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994","",50,110,160);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(1,3.019904);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(2,1.748823);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(3,-0.7046265);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(4,0.1402812);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(5,0.3853665);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(6,-0.8958616);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(7,0.05011157);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(8,-1.625629);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(9,0.3395196);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(10,-1.431103);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(11,-2.471198);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(12,-2.508449);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(13,-2.571753);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(14,-0.09494556);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(15,-0.6671668);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(16,0.976611);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(17,-0.9124568);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(18,-2.088167);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(19,0.1777205);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(20,-1.259195);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(21,-1.013742);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(22,-1.121046);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(23,-1.602598);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(24,-0.2866054);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(25,-0.5143722);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(26,-0.02679248);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(27,-0.831495);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(28,-2.792083);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(29,0.3097822);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(30,-0.1134407);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(31,-0.9694174);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(32,-0.7885867);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(33,-0.5473464);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(34,-0.1591013);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(35,-0.03033712);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(36,-0.09010243);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(37,1.639058);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(38,1.298808);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(39,1.64089);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(40,0.424824);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(41,1.27949);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(42,0.6353344);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(43,-1.489071);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(44,1.081044);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(45,1.835917);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(46,-1.335142);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(47,0.7068421);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(48,-0.8456797);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(49,1.666553);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetBinContent(50,1.019678);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetEntries(50);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetStats(0);

   ci = TColor::GetColor("#6699ff");
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetLineColor(ci);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetLineWidth(2);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetMarkerStyle(20);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->SetMarkerSize(1.2);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetXaxis()->SetTitle("M(#mu#mu) [GeV/c^{2}]");
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetXaxis()->CenterTitle(true);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetXaxis()->SetNdivisions(505);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetXaxis()->SetLabelFont(42);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetXaxis()->SetLabelOffset(0.01);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetXaxis()->SetLabelSize(0.1213);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetXaxis()->SetTitleSize(0.1334);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetXaxis()->SetTitleOffset(1.19);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetXaxis()->SetTitleFont(42);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetYaxis()->SetTitle("#frac{Data-Fit}{#sqrt{Fit}}");
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetYaxis()->CenterTitle(true);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetYaxis()->SetLabelFont(42);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetYaxis()->SetLabelOffset(0.01);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetYaxis()->SetLabelSize(0.097);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetYaxis()->SetTitleSize(0.1164);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetYaxis()->SetTitleOffset(0.63);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->GetYaxis()->SetTitleFont(42);
   pulls_realDataJets01PassPtG10BB8TeV1380635114489994_bak1380635114489994->Draw("");
      tex = new TLatex(0.18,0.41,"#chi^{2}/NDF: 1.82");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(42);
   tex->SetTextSize(0.097);
   tex->SetLineWidth(2);
   tex->Draw();
   pad21380635114489994->Modified();
   canvas1380635114489994->cd();
   canvas1380635114489994->Modified();
   canvas1380635114489994->cd();
   canvas1380635114489994->SetSelected(canvas1380635114489994);
}
