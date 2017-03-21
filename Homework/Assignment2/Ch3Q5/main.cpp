/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on February 14, 2017, 10:10 PM
 * Purpose:  To compute the volume of the sphere given the radius.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float radius, volume;
    
    //Input data
    cout<<"Enter the radius of the sphere."<<endl;
    cin>>radius;

    //Map inputs to outputs or process the data
    volume=(4.0/3.0)*3.1415*radius*radius*radius;
    //Output the transformed data
    cout<<"The volume is "<<volume<<endl;

    //Exit stage right!
    return 0;
}

