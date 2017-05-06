/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on May 4, 2017, 2:07 PM
 * Purpose:  Converts length from feet/inches to meters/centimeters
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>   //random number generator
#include <ctime>     //time to set random number seed
#include <cmath>     //math library
#include <iomanip>   //Format ouput
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVMTFT = 0.3048f;   //Amount of meters in foot
const float CNVCTMT = 100;       //Amount of centimeters in meter
const float CNVINFT = 12;        //Amount of inches in a foot

//Function Prototypes Here
void heading(){
    cout<<"This program converts from feet and inches"<<endl;
    cout<<"to meters and centimeters"<<endl;
    
}

void results(void);

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float ft;     //feet
    float in;     //inches
    float mt;     //meters
    float cnt;    //centimeters
    char restart; //End choice
    
    do{
    //Input or initialize values Here
    cout<<"---------------------"<<endl<<endl;
    cout<<"How many feet? ";
    cin>>ft;
    cout<<endl<<endl<<"How many inches? ";
    cin>>in;
    cout<<endl;
    
    //Process/Calculations Here
    mt=(ft*CNVMTFT)+((in/CNVINFT)*CNVMTFT);
    cnt=((ft*CNVMTFT)+((in/CNVINFT)*CNVMTFT))*CNVCTMT;
    
    //Output Located Here
    cout<<ft<<" feet and "<<in<<" inches converts to "<<mt<<" meters or "<<cnt<<" centimeters"<<endl;
    cout<<"Enter any key to start over or just type in X to exit"<<endl;
    cin>>restart;
    }while(!(restart=='X'||restart=='x'));
    //Exit
    return 0;
}