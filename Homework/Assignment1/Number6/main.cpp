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
    int frst, scnd, thrd, frth;
    
    //Initialize variables
    
    //Input data
    cout<<"Hello! \n";
    cout<<"Press Enter After Entering A Number. \n";
    cout<<"Please enter your first digit: \n";
    cin>>frst;
    
    cout<<"Please enter your second digit: \n";
    cin>>scnd;
    //Map inputs to outputs or process the data
    frth=frst+scnd;
    thrd=frst*scnd;
    //Output the transformed data
    cout<<"If you multiply "<<frst<<" And "<<scnd<<", The Product would be "<<thrd<<" \n";
    cout<<"If you add "<<frst<<" And "<<scnd<<" The Sum would be "<<frth<<" \n";
    cout<<"Good-Bye!\n"<<endl;
    //Exit stage right!
    return 0;
}