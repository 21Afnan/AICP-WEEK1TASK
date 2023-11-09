#include <iostream>
#include <string>
using namespace std;
int main() {
    string numItems[8] = {
        "A1 : Compact $75.00",
        "A2 : Tower $150.00",
        "B1 : 8 GB $79.99",
        "B2 : 16 GB $149.99",
        "B3 : 32 GB $299.99",
        "C1 : 1 TB HDD $49.99",
        "C2 : 2 TB HDD $89.99",
        "C3 : 4 TB HDD $129.99"
    };
    cout<<"Welcome to our Store" << endl;
    string choice, choice1, choice2;
    double price, price1, price2;
    double basicprice=200.0;
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
    
    cout<<"\nThe basic price of Computer is $200."<<endl;
    cout<<"The price of case is $"<<price<<"."<<endl;
    cout<<"The price of RAM is $"<<price1<<"."<<endl;
    cout<<"The price of Main Hard Disk Drive is $"<<price2<<"."<<endl;
    cout<<"\nTotal price is $"<<basicprice+price+price1+price2<<"."<<endl;
    cout<<"Your order is placed. \nThanks for choosing us.";
    return 0;
}