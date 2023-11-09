#include <iostream>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
	
	//Introducing array containing all additional items
    string numItems[17] = {
        "A1 : Compact $75.00",
        "A2 : Tower $150.00",
        "B1 : 8 GB $79.99",
        "B2 : 16 GB $149.99",
        "B3 : 32 GB $299.99",
        "C1 : 1 TB HDD $49.99",
        "C2 : 2 TB HDD $89.99",
        "C3 : 4 TB HDD $129.99",
        "D1 : 240 GB SSD $59.99",
        "D2 : 480 GB SSD $119.99",
        "E1 : 1 TB HDD $49.99",
        "E2 : 2 TB HDD $89.99",
        "E3 : 4 TB HDD $129.99",
        "F1 : DVD/Blu-Ray-Player  $50.00",
        "F2 : DVD/Blu-Ray-Rewriter $100.00",
        "G1 : Standard Version $100.00",
        "G2 : Professional Version $175.00"
    };
cout<<"Welcome to our Store" << endl;
    string choice, choice1, choice2;
    double price, price1, price2;
    double basicprice=200.0;
    double totalprice;
    cout<<"Choose the case you want to implement in your system:"<<endl<<numItems[0]<<endl<<numItems[1]<<endl;
    do{
    cin>>choice;
    if (choice == "A1" || choice == "a1"){
        cout<<"You selected Compact case in $75.00."<<endl;
        price=75.00;
    }
    else if (choice == "A2" || choice == "a2") {
        cout<<"You selected Tower case in $150.00."<<endl;
        price=150.00;
    }
    else {
        cout<<"Invalid choice. Please choose 'A1' or 'A2'."<<endl;
    }
    }
    while (choice != "A1" && choice != "a1" && choice != "A2" && choice != "a2");
    cout<<"\nChoose the RAM you want to implement in your system:"<<endl;
    for(int i=2;i<5;i++){
        cout<<numItems[i]<<endl;
    }
    do{
    cin>>choice1;
    if (choice1 == "B1" || choice1 == "b1"){
        cout<<"You selected 8GB RAM in $79.99."<<endl;
        price1=79.99;
    }
    else if (choice1 == "B2" || choice1 == "b2") {
        cout<<"You selected 16GB RAM in $149.99."<<endl;
        price1=149.99;
    }
    else if (choice1 == "B3" || choice1 == "b3"){
        cout<<"You selected 32GB RAM in $299.99."<<endl;
        price1=299.99;
    }
    else {
        cout<<"Invalid choice. Please choose 'B1' , 'B2' or 'B3'."<<endl;
    }
    }
    while (choice1 != "B1" && choice1 != "b1" && choice1 != "B2" && choice1 != "b2" && choice1 != "B3" && choice1 != "b3");
    cout<<"\nChoose the Main Hard Disk Drive you want to implement in your system:"<<endl;
    for(int i=5;i<8;i++){
        cout<<numItems[i]<<endl;
    }
    do{
    cin>>choice2;
    if (choice2 == "C1" || choice2 == "c1"){
        cout<<"You selected 1 TB HDD in $49.99."<<endl;
        price2=49.99;
    }
    else if (choice2 == "C2" || choice2 == "c2") {
        cout<<"You selected 2 TB HDD in $89.99."<<endl;
        price2=89.99;
    }
    else if (choice2 == "C3" || choice2 == "c3"){
        cout<<"You selected 4 TB HDD in $129.99."<<endl;
        price2=129.99;
    }
    else {
        cout<<"Invalid choice. Please choose 'C1' , 'C2' or 'C3'."<<endl;
    }
    }
    while (choice2 != "C1" && choice2 != "c1" && choice2 != "C2" && choice2 != "c2" && choice2 != "C3" && choice2 != "c3");
    
    cout<<"The price of a basic computer is:\t$"<<basicprice<<endl;
    cout<<"The price of case is $"<<price<<"."<<endl;
    cout<<"The price of RAM is $"<<price1<<"."<<endl;
    cout<<"The price of Main Hard Disk Drive is $"<<price2<<"."<<endl;
    totalprice=basicprice+price+price1+price2;
    cout<<"\nTotal price before additional items is $"<<totalprice<<"."<<endl;
    
    char choi;
    string categorychoice;
    char c;
    int x=0;

//printing array
cout << "Additional items" << endl;
    for (int i = 8; i < 17; i++)
    {
        cout << numItems[i] << endl;
    }

//Ask user for additional items:
    cout<<endl;
    cout << "Do you want to order some additional items? Enter 'Y/y' for Yes and 'N/n' for No" << endl;
    cin >> choi;
    //If user chose yes for additional items
    if (choi == 'Y' || choi == 'y') 
       {
       	cout<<endl;
        cout <<"Do you want to purchase Solid State Drive (240 GB SSD or 480 GB SSD?"<<endl;
        cin >> c;

        //If user chose yes for Solid State Drive
        if (c == 'Y' || c == 'y') 
           {
           	 x=x+1;
             for (int i = 8; i < 10; i++) 
               {
                  cout << numItems[i] << endl;
               }

               cout << "Choose the category of your selected item" << endl;
               do {
                        cin >> categorychoice;
                        if (categorychoice == "D1" || categorychoice == "d1") {
                        cout<<endl;
                        cout << "You selected Solid-state drive 240 GB in $59.99." << endl;
                        totalprice += 59.99;
                   }
                    else if (categorychoice == "D2" || categorychoice == "d2") 
                   {
                   	     cout<<endl;
                         cout << "You selected Solid-state drive 480 GB in $119.99." << endl;
                         totalprice += 119.99;
                    } 
                    else 
                    {
                         cout<<endl;
						 cout << "Invalid choice. Please choose 'D1' or 'D2'." << endl;
                     }
           }while(categorychoice != "D1" && categorychoice != "d1" && categorychoice != "D2" && categorychoice != "d2");
       }
       //If user chose No for Solid State Drive
         else if (c == 'N' || c == 'n')
             {
             	cout<<endl;
                cout << "You havn't opt for Solid State Drive." << endl;
             } 
         else 
             {
                cout<<endl;
				cout << "Invalid choice for the second question." << endl;
             }
             
             cout<<"user output:"<<x<<endl;
         
    //for another hard drive
      cout << "Do You want to purchase Second Hard Disk drive  (1 TB HDD ,2 TB HDD OR 4 TB HDD )" << endl;
      cin >> c;
      cout<<endl;
      //If user chose Yes for Second Hard Drive
      if (c == 'Y' || c == 'y') 
      {
      	x=x+1;
      for (int i = 10; i < 13; i++) 
         {
            cout<<endl;
			cout << numItems[i] << endl;
         }
      cout << "Choose the category of your selected item" << endl;
      do {
           cin >> categorychoice;
           if (categorychoice == "E1" || categorychoice == "e1")
               {
                 cout<<endl;
				 cout << "You selected Second Hard Disk drive 1 TB HDD $49.99." << endl;
                totalprice += 49.99;
                } 
           else if(categorychoice == "E2" || categorychoice == "e2") 
                {
                   cout<<endl;
				   cout << "You selected  Second Hard Disk drive 2 TB HDD in $89.99." << endl;
                 totalprice += 89.99;
                } 
	       else if(categorychoice == "E3" || categorychoice == "e3") 
                {
                   cout<<endl;
				   cout << "You selected  Second Hard Disk drive 4 TB HDD in $129.99." << endl;
                totalprice += 129.99;
                }
            else
                {
                    cout<<endl;
					cout << "Invalid choice. Please choose 'E1','E2' or 'E3'." << endl;
                }
       }while (categorychoice != "E1" && categorychoice != "e1" && categorychoice != "E2" && categorychoice != "e2"&& categorychoice != "E3" && categorychoice != "e3");
      }
	  //If user chose No for Second Hard Drive 
      else if (c == 'N' || c == 'n') 
      {
          cout<<endl;
		  cout << "You chose not to purchase asecond hard drive." << endl;
      } 
      else 
      {
          cout<<endl;
		  cout << "Invalid choice for the second question." << endl;
      }
      cout<<"user output:"<<x<<endl;
      //Ask user for optical drive

    cout << "You want to purchase Optical drive  (DVD/Blu-Ray-Player , Professional Version)" << endl;
    cin >> c;
    cout<<endl;
        
		//If user chose Yes for optical drive
        
        if (c == 'Y' || c == 'y') {
        	x=x+1;
            for (int i = 13; i < 15; i++) {
                cout << numItems[i] << endl;
            }
            cout<<endl;
            cout << "Choose the category of your selected item" << endl;
            do {
                cin >> categorychoice;
                if (categorychoice == "F1" || categorychoice == "f1") {
                    cout<<endl;
					cout << "You selected Optical drive DVD/Blu-Ray-Player $50.00." << endl;
                    totalprice += 50.00;
                } else if (categorychoice == "F2" || categorychoice == "f2") {
                    cout<<endl;
					cout << "You selected Optical drive DVD/Blu-Ray-Rewriter $100.00." << endl;
                      totalprice += 100.00;
                } 
			else {
                    cout<<endl;
					cout << "Invalid choice. Please choose 'F1' or 'F2'." << endl;
                }
            } while (categorychoice != "F1" && categorychoice != "f1" && categorychoice != "F2" && categorychoice != "f2");
        } 
		//If user chose No for optical drive
		else if (c == 'N' || c == 'n') {
			cout<<endl;
            cout << "You chose not to opt for optical drive" << endl;
        } else {
        	cout<<endl;
            cout << "Invalid choice, select either f1 or f2" << endl;
        }
        cout<<"user output:"<<x<<endl;
        // Ask for operating system
       cout<<endl;
       cout << "You want to purchase Operating System  (Standard Version, Professional Version)" << endl;
       cin >> c;
       
       //If user chose Yes for Operating System
       if (c == 'Y' || c == 'y') {
       	   x=x+1;
            for (int i = 15; i < 17; i++) {
                cout << numItems[i] << endl;
            }
            cout<<endl;
			cout << "Choose the category of your selected item" << endl;
            do {
                cin >> categorychoice;
                if (categorychoice == "G1" || categorychoice == "g1") {
                    cout << "You selected Operating System  Standard Version $100.00." << endl;
                      totalprice += 100.00;
                } else if (categorychoice == "G2" || categorychoice == "g2") {
                    cout << "You selected Operating System  Professional Version $175.00." << endl;
                    totalprice+= 175.00;
                } 
			else {
                    cout<<endl;
					cout << "Invalid choice. Please choose 'G1' or 'G2'." << endl;
                }
            } while (categorychoice != "G1" && categorychoice != "g1" && categorychoice != "G2" && categorychoice != "g2");
        } 
		//If user chose Yes for Operating System
		else if (c == 'N' || c == 'n') {
            cout<<endl;
			cout << "You chose not to purchase extra operating system." << endl;
        } else {
            cout<<endl;
			cout << "Invalid choice for the second question." << endl;
        }
        cout<<"user output:"<<x<<endl;
   }
//If user chose No for additional items
   else if (choi == 'N' || choi == 'n') 
       {
           cout<<endl;
		   cout << "Thanks for telling us your choice." << endl;
       } 
   else
       {
           cout<<endl;
		   cout << "Invalid choice for the first question." << endl;
       }

	 
        cout<<" totalprice after additional items is   "<<  totalprice <<endl;
        cout<<endl;
   
    if(x == 1){
        float discount;
    	discount=  totalprice*0.05;
    	cout<<"The discount is  "<< discount <<endl;
    	totalprice=  totalprice-discount;
    	double moneysaved = discount;
    	cout<<"Money saved is :\t$ "<< moneysaved<<endl;
	}
	else if(x >= 2){
        float discount;
    	discount=  totalprice*0.10;
        cout<<"The discount is  "<< discount <<endl;
    	totalprice=totalprice-discount;
    	double moneysaved = discount;
    	cout<<"Money saved is :\t$ "<< moneysaved<<endl;
	}
    cout<<"The price of a basic computer is:\t$"<<  basicprice<<endl;
	cout<<"Total price after  giving discount :\t$" <<   totalprice << endl;
    cout<<"Your order is placed. \nThanks for choosing us.";
	return 0;
}