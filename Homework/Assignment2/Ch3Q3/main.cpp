/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on February 14, 2017, 10:10 PM
 * Purpose:  To convert a speed in mph to minutes per mile and seconds per mile.
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
    float MINUTE = 60;//conversion from minutes to seconds
    float miles;              //ounces of cereal
    float mpm;
    float mps;
    
    //Input data
    cout<<"This program will convert your speed from mph "<<endl;
    cout<<"to miles per minute and miles per second"<<endl;
    
    cout<<"What was your speed in miles per hour?"<<endl;
    cin>>miles;
    cout<<" miles per hour"<<endl;

    //Map inputs to outputs or process the data
    mpm = MINUTE;
    mps = MINUTE*MINUTE;
    //Output the transformed data
    cout<<"If your speed in mph is "<<miles<<" miles per hour,"<<endl;
    cout<<"Then in minutes per mile it would be "<<mpm<<" minutes per mile"<<endl;
    cout<<"The in seconds per mile it would be "<<mps<<" seconds per mile"<<endl;

    //Exit stage right!
    return 0;
}

