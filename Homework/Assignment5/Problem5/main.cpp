/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on May 4, 2017, 2:07 PM
 * Purpose:  Converts weight from pounds/ounces to kilograms/grams
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>   //random number generator
#include <cmath>     //math library
#include <iomanip>   //Format ouput
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVLBKG = 2.2046f;   //Amount of pounds in kilogram
const float CNVGMKG = 1000;       //Amount of grams in kilogram
const float CNVOZLB = 16;        //Amount of ounces in a pound
//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float lbs;     //feet
    float oz;     //inches
    float kilo;     //meters
    float gm;    //centimeters
    char restart; //End choice
    
    do{
    //Input or initialize values Here
    cout<<"---------------------"<<endl<<endl;
    cout<<"How many pounds? ";
    cin>>lbs;
    cout<<endl<<endl<<"How many ounces? ";
    cin>>oz;
    cout<<endl;
    
    //Process/Calculations Here
    kilo=(lbs*CNVLBKG)+((oz/CNVOZLB)*CNVLBKG);
    gm=((lbs*CNVLBKG)+((oz/CNVOZLB)*CNVLBKG))*CNVGMKG;
    
    //Output Located Here
    cout<<lbs<<" pounds and "<<oz<<" ounces converts to "<<kilo<<" kilograms or "<<gm<<" grams"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
    //Exit
    return 0;
}