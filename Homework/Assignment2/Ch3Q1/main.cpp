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
float METTON = 35273.92; //conversion to ounces
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float ounces;              //ounces of cereal
    float nmbBox;              //# of boxes to makes on metric ton
    float metConv;             //ounces converted to metric tons
    
    //Input data
    cout<<"This program will convert your cereal weight from ounces "<<endl;
    cout<<"to metric tons"<<endl;
    
    cout<<"How many ounces are in your cereal?"<<endl;
    cin>>ounces;

    //Map inputs to outputs or process the data
    metConv = ounces/METTON;
    nmbBox = static_cast<int>(METTON/metConv);
    //Output the transformed data
    cout<<"If your cereal weighs "<<ounces<<" ounces,"<<endl;
    cout<<"Then in metric tons it would weigh "<<metConv<<endl;
    cout<<"In order to make a complete metric ton, you would need"<<endl;
    cout<<nmbBox<<" boxes of your cereal"<<endl;

    //Exit stage right!
    return 0;
}

