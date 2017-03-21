/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on February 14, 2017, 10:10 PM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int qrter, dimes, nkls, total;
    float qrterv = 25; //value of quarter in cents
    float dimesv = 10; //value of dime in cents
    float nklsv = 5;   //value of nickel in cents
    //Initialize variables
    
    //Input data
    cout<<"Hello! \n";
    cout<<"Press Enter After Entering A Number. \n";
    cout<<"How many quarters do you have?: \n";
    cin>>qrter;
    
    cout<<"How many dimes do you have?: \n";
    cin>>dimes;
    
    cout<<"How many nickels do you have?: \n";
    cin>>nkls;
    //Map inputs to outputs or process the data
    total=(qrter*qrterv)+(dimes*dimesv)+(nkls*nklsv);
    //Output the transformed data
    cout<<"If you have "<<qrter<<" Quarters, "<<dimes<<" Dimes, and "<<nkls<<" Nickels, \n";
    cout<<"then the Total amount of money you have is "<<total<<" cents \n";
    cout<<"Good-Bye!\n"<<endl;
    //Exit stage right!
    return 0;
}