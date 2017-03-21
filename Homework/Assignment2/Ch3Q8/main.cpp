/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on February 14, 2017, 10:10 PM
 * Purpose:  To calculate a change in salary.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float CUBGAL = 7.48; //cubic feet to gallons of water
const float CNVRS = 12;    //feet to inches

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float Radius;  //in inches
    float Depth;   //in feet
    float NmbGal;  //Number of gallons the well can store
    float FtRad;
    
    //Input data
    cout<<"What is the radius of your well?(in inches)"<<endl;
    cin>>Radius;
    
    cout<<"How deep is your well?(in feet)"<<endl;
    cin>>Depth;

    //Map inputs to outputs or process the data
    FtRad = Radius/CNVRS;
    NmbGal = (3.1415*FtRad*FtRad*Depth)*CUBGAL;
    
    //Output the transformed data
    cout<<"If your wells radius is "<<Radius<<" inches and "<<endl;
    cout<<"it's depth is "<<Depth<<" feet then, "<<endl;
    cout<<"the well can hold roughly "<<NmbGal<<" gallons of water"<<endl;

    //Exit stage right!
    return 0;
}

