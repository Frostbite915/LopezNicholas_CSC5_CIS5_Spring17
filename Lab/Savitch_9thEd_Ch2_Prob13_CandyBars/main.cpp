/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on March 7, 2017, 12:07 AM
 * Purpose:  Calculate the number of candy bars
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
    char sex;                     // M or F
    unsigned short ht, wt, age;   //Height in (in), weight in lbs, age in yrs
    unsigned char cdyCals = 230;  //Candy bar calories
    float bmr;                    //Basic Metabolic Rate (calories)
    int nCdyBars;                 //Number of candy bars we can eat
    
    //Input or initialize values Here
    cout<<"This program calculates the number of ";
    cout<<"candy bars allowed per day based upon your BMR"<<endl;
    cout<<"Type in your sex (M/F), Weight(lbs), Height(in), and Age (yrs)"<<endl;
    cout<<"Inputs are integer based"<<endl;
    cin>>sex>>wt>>ht>>age;
    
    //Process/Calculations Here
    bmr=(sex=='M')?
        66 + 6.3f*wt + 12.9f*ht - 6.8f*age:
       655 + 4.3f*wt +  4.7f*ht - 4.7f*age;
    nCdyBars = static_cast<int>(bmr/cdyCals);
    
    
    //Output Located Here
    cout<<"The number of candy bars you can eat = "<<nCdyBars<<endl;

    //Exit
    return 0;
}

