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
    int secnds, distnce;
    float accel = 32; // feet per second
    
    //Initialize variables
    
    //Input data
    cout<<"Hello! \n";
    cout<<"Press Enter After Entering A Number. \n";
    cout<<"Want to know how far a ball would drop from if it has a given amount of time?";
    cout<<"Tell me how many seconds to calculate until the ball hits the floor: \n";
    cin>>secnds;
    
    //Map inputs to outputs or process the data
    distnce=(accel*(secnds*secnds))/2;
    //Output the transformed data
    cout<<"If the ball has "<<secnds<<" seconds to fall, \n";
    cout<<"then the Total distance the ball would have fallen would be "<<distnce<<"ft \n";
    cout<<"Good-Bye!\n"<<endl;
    //Exit stage right!
    return 0;
}