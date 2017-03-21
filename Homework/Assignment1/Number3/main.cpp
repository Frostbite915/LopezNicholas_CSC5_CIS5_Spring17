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
    int nbrpds, ppp, ttlp;
    
    //Initialize variables
    
    //Input data
    cout<<"Hello! \n";
    cout<<"Press Enter After Entering A Number. \n";
    cout<<"Enter The Number of Pods: \n";
    cin>>nbrpds;
    
    cout<<"Enter The Number of Peas in A Pod: \n";
    cin>>ppp;
    //Map inputs to outputs or process the data
    ttlp=nbrpds/ppp;
    //Output the transformed data
    cout<<"If you have "<<nbrpds<<" Pea Pods\n";
    cout<<"And "<<ppp<<" Peas in each Pod, then\n";
    cout<<"you have "<<ttlp<<" Peas in all the Pods. \n";
    cout<<"Good-Bye!\n"<<endl;
    //Exit stage right!
    return 0;
}

