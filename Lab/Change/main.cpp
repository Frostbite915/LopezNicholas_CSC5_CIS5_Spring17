/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float price; 
    float tender;
    int iprice;
    int itender;
    int ichange;
    
    //Input or initialize values Here
    do{
        cout<<"This program gives you change"<<endl;
        cout<<"Input the price to pay and how much tendered"<<endl;
        cout<<"The tendered amount must be greater than the price"<<endl;
        cout<<"Input the price = ";
        cin>>price;
        cout<<endl;
        cout<<"Input the tendered amount = ";
        cin>>tender;
        cout<<endl;
    }
    while(tender<price);
    //Convert to pennies
    iprice=(price+.005f)*100;    //Converts float to proper integer
    itender=(tender+.005f)*100;  //Converts float to proper integer
    
    //Calculate change
    ichange=itender-iprice;
    
    
    int iHundred=ichange/10000;
    cout<<"Your change is = ";
    cout<<iHundred<<" Hundreds"<<endl;
    ichange-=iHundred*10000;
    
    int iTwenty=ichange/2000;
    cout<<"Your change is = ";
    cout<<iTwenty<<" Twenties"<<endl;
    ichange-=iTwenty*2000;
    
    int iTen=ichange/10000;
    cout<<"Your change is = ";
    cout<<iTen<<" Tens"<<endl;
    ichange-=iTen*1000;
    
    int iFive=ichange/500;
    cout<<"Your change is = ";
    cout<<iFive<<" Fives"<<endl;
    ichange-=iFive*500;
    
    int iOne=ichange/100;
    cout<<"Your change is = ";
    cout<<iOne<<" Ones"<<endl;
    ichange-=iOne*100;
    
    int iQuart=ichange/25;
    cout<<"Your change is = ";
    cout<<iQuart<<" Quarters"<<endl;
    ichange-=iQuart*25;
    
    int iDime=ichange/10;
    cout<<"Your change is = ";
    cout<<iDime<<" Dimes"<<endl;
    ichange-=iDime*10;
    
    int iNick=ichange/5;
    cout<<"Your change is = ";
    cout<<iNick<<" Nickels"<<endl;
    ichange-=iNick*5;
    
    int iPennies=ichange/1;
    cout<<"Your change is = ";
    cout<<iPennies<<" Pennies"<<endl;
    ichange-=iPennies*1;
    //Output Located Here
    

    //Exit stage right
    return 0;
}

