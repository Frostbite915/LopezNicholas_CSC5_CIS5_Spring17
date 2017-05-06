/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on May 4, 2017, 2:07 PM
 * Purpose:  Converts length from meters/centimeters to feet/inches
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>   //random number generator
#include <cmath>     //math library
#include <iomanip>   //Format ouput
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVMTFT = 0.3048f;   //Amount of meters in foot
const float CNVCTMT = 100;       //Amount of centimeters in meter
const float CNVINFT = 12;        //Amount of inches in a foot

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float ft;     //feet
    float in;     //inches
    float mt;     //meters
    float cnt;    //centimeters
    char restart; //End choice
    int choice;   //Beginning choice
    
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"*  Press 1 to convert from feet/inches to meters/centimeters  *"<<endl;
    cout<<"*  Press 2 to convert from meters/centimeters to feet/inches  *"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cin>>choice;
    cout<<endl<<endl;
    
    if(choice==1){
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
    
    else if(choice==2){
    do{
    //Input or initialize values Here
    cout<<"---------------------"<<endl<<endl;
    cout<<"How many meters? ";
    cin>>mt;
    cout<<endl<<endl<<"How many centimeters? ";
    cin>>cnt;
    cout<<endl;
    
    //Process/Calculations Here
    ft=(mt/CNVMTFT)+((cnt/CNVCTMT)/CNVMTFT);
    in=((mt/CNVMTFT)+((cnt/CNVCTMT)/CNVMTFT))*CNVINFT;
    
    //Output Located Here
    cout<<mt<<" meters and "<<cnt<<" centimeters converts to "<<ft<<" feet or "<<in<<" inches"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
    //Exit
    return 0;}
    
    else{
        cout<<"Not a valid input"<<endl;    }
}