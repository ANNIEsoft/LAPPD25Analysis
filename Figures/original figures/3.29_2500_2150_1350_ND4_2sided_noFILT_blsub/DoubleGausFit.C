double MattFit(double bob)
	{
	  	return bob+5.0;
	}


void MattAgain(int wes)
	{

		for(int i=0; i<=wes; i++){


			if(i==3)
				{
					cout<<"HOLY CRAP IT's 3!!!! "<<i<<endl;
				}
			else{
						cout<<"all work and no play make matt something something "<<i<<endl;
		      }
		}
	}

double DoubleGausFit()
	{

		TFile* tf = new TFile("timeytime.root","READ");
		TH1D* timehist = (TH1D*) tf->Get("time");
		timehist->Draw();

		TF1* mydgaus = new TF1("mydgaus","gaus(0)+gaus(3)",64600,66500);
	  mydgaus->SetParameter(0,505.);
	  mydgaus->SetParameter(1,65300.);
		mydgaus->SetParameter(2,70.);
	  mydgaus->SetParameter(3,5.);
//	  mydgaus->SetParameter(4,65400.);
//		mydgaus->SetParameter(5,150.);
		mydgaus->SetParameter(4,65700.);
		mydgaus->SetParameter(5,100.);


		TF1* mydgaus = new TF1("mydgaus","gaus(0)+gaus(3)+gaus(6)",64600,66500);
		mydgaus->SetParameter(0,505.);
		mydgaus->SetParameter(1,65300.);
		mydgaus->SetParameter(2,70.);
		mydgaus->SetParameter(3,10.);
//	  mydgaus->SetParameter(4,65400.);
//		mydgaus->SetParameter(5,150.);
		mydgaus->SetParameter(4,65700.);
		mydgaus->SetParameter(5,100.);
		mydgaus->SetParameter(6,10.);
		mydgaus->SetParameter(7,65700);
		mydgaus->SetParameter(8,80.);

	  timehist->Fit("mydgaus","","",64600,66500);

		TF1* mysgaus1 = new TF1("mysgaus1","gaus",64600,66500);
	  mysgaus1->SetParameter(0,(mydgaus->GetParameter(0)));
	  mysgaus1->SetParameter(1,(mydgaus->GetParameter(1)));
	  mysgaus1->SetParameter(2,(mydgaus->GetParameter(2)));

		TF1* mysgaus2 = new TF1("mysgaus2","gaus",64600,66500);
	  mysgaus2->SetParameter(0,(mydgaus->GetParameter(3)));
	  mysgaus2->SetParameter(1,(mydgaus->GetParameter(4)));
	  mysgaus2->SetParameter(2,(mydgaus->GetParameter(5)));

		TF1* mysgaus3 = new TF1("mysgaus2","gaus",64600,66500);
		mysgaus3->SetParameter(0,(mydgaus->GetParameter(6)));
		mysgaus3->SetParameter(1,(mydgaus->GetParameter(7)));
		mysgaus3->SetParameter(2,(mydgaus->GetParameter(8)));


		TF1* mydgaus2 = new TF1("mydgaus2","gaus(0)+gaus(3)+gaus(6)",64600,66500);
	  mydgaus2->SetParameter(0,(mydgaus->GetParameter(0)));
	  mydgaus2->SetParameter(1,(mydgaus->GetParameter(1)));
	  mydgaus2->SetParameter(2,(mydgaus->GetParameter(2)));
	  mydgaus2->SetParameter(3,(mydgaus->GetParameter(3)));
	  mydgaus2->SetParameter(4,(mydgaus->GetParameter(4)));
	  mydgaus2->SetParameter(5,(mydgaus->GetParameter(5)));
		mydgaus2->SetParameter(6,(mydgaus->GetParameter(6)));
	  mydgaus2->SetParameter(7,(mydgaus->GetParameter(7)));
	  mydgaus2->SetParameter(8,(mydgaus->GetParameter(8)));


	  mysgaus1->SetLineColor(4);
	  mysgaus1->Draw("SAME");
	  mysgaus2->SetLineColor(6);
	  mysgaus2->Draw("SAME");
		mysgaus3->SetLineColor(8);
		mysgaus3->Draw("SAME");

	  mydgaus2->SetLineColor(1);
	  mydgaus2->Draw("SAME");






//		TF1* mygaus2 = new TF1("mygaus2","gaus",72200,73000);
//		timehist->Fit("mygaus2","","",72200,73000);


		double jim;


		jim = MattFit(2.0);

		cout<<jim<<endl;
		cout<<"Jim is: "<<jim<<endl;
		cout<<"wasn't that fun?"<<endl;

		MattAgain(11);


		return jim;

	}
