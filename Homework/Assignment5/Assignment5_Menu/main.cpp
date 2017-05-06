/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on May 5, 2017, 12:00 PM
 * Purpose:  Menu for Assignment 5
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
//Like PI, e, Gravity, or conversions

const float CNVMTFT = 0.3048f;   //Amount of meters in foot
const float CNVCTMT = 100;       //Amount of centimeters in meter
const float CNVINFT = 12;        //Amount of inches in a foot
const float CNVLBKG = 2.2046f;   //Amount of pounds in kilogram
const float CNVGMKG = 1000;       //Amount of grams in kilogram
const float CNVOZLB = 16;        //Amount of ounces in a pound

//Function Prototypes Here
void menu(void);
void prob1(void);
void prob2(void);
void prob3(void);
void prob4(void);
void prob5(void);
void prob6(void);
void prob7(void);
void prob8(void);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    
    //Show menu and loop
    do{
        //Display menu
        cout<<endl<<endl<<"Type 0 to Exit"<<endl;
        cout<<"Type 1 for Shooter Problem"<<endl;
        cout<<"Type 2 for Length ft/in to m/cm"<<endl;
        cout<<"Type 3 for Length m/cm to ft/in"<<endl;
        cout<<"Type 4 for Length choice"<<endl;
        cout<<"Type 5 for Weight lb/oz to kg/gm"<<endl;
        cout<<"Type 6 for Weight kg/gm to lb/oz"<<endl;
        cout<<"Type 7 for Weight choice"<<endl;
        cout<<"Type 8 for Weight or Length choice"<<endl;
        
        
        //Input choice
        cin>>choice;
        //Place solutions to problems in switch statements
        switch(choice){
            case '1': prob1();break;
           
            case '2': prob2();break;
            
            case '3': prob3();break;
            
            case '4': prob4();break;
            
            case '5': prob5();break;
            
            case '6': prob6();break;
            
            case '7': prob7();break;
            
            case '8': prob8();break;
            
            default:{
                cout<<"Exit the Program"<<endl;
            }
        }
    }while(choice>='1'&&choice<='9');

    //Exit
    return 0;
}

void prob1 (void) {
    
}

void prob2 (void) {//Declare all Variables Here
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
}

void prob3 (void) {
    //Declare all Variables Here
    float ft;     //feet
    float in;     //inches
    float mt;     //meters
    float cnt;    //centimeters
    char restart; //End choice
    
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
}

void prob4 (void) {
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
    }
    else{
        cout<<"Not a valid input"<<endl;    }

}

void prob5 (void) {
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
}

void prob6 (void) {
    //Declare all Variables Here
    float lbs;     //feet
    float oz;     //inches
    float kilo;     //meters
    float gm;    //centimeters
    char restart; //End choice
    
    do{
    //Input or initialize values Here
    cout<<"---------------------"<<endl<<endl;
    cout<<"How many kilograms? ";
    cin>>kilo;
    cout<<endl<<endl<<"How many grams? ";
    cin>>gm;
    cout<<endl;
    
    //Process/Calculations Here
    lbs=(kilo/CNVLBKG)+((gm/CNVGMKG)/CNVLBKG);
    oz=((kilo/CNVLBKG)+((gm/CNVGMKG)/CNVLBKG))*CNVOZLB;
    
    //Output Located Here
    cout<<kilo<<" kilograms and "<<gm<<" grams converts to "<<lbs<<" pounds or "<<oz<<" ounces"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
}

void prob7 (void) {
    //Declare all Variables Here
    float lbs;     //feet
    float oz;     //inches
    float kilo;     //meters
    float gm;    //centimeters
    char restart; //End choice
    int choice;   //Beginning choice
    
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"*  Press 1 to convert from pounds/ounces to kilograms/grams   *"<<endl;
    cout<<"*  Press 2 to convert from kilograms/grams to pounds/ounces   *"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cin>>choice;
    cout<<endl<<endl;
    
    if(choice==1){
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
    
    }
    
    else if(choice==2){
    do{
    //Input or initialize values Here
    cout<<"---------------------"<<endl<<endl;
    cout<<"How many kilograms? ";
    cin>>kilo;
    cout<<endl<<endl<<"How many grams? ";
    cin>>gm;
    cout<<endl;
    
    //Process/Calculations Here
    lbs=(kilo/CNVLBKG)+((gm/CNVGMKG)/CNVLBKG);
    oz=((kilo/CNVLBKG)+((gm/CNVGMKG)/CNVLBKG))*CNVOZLB;
    
    //Output Located Here
    cout<<kilo<<" kilograms and "<<gm<<" grams converts to "<<lbs<<" pounds or "<<oz<<" ounces"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
    }
    
    else{
        cout<<"Not a valid input"<<endl;    }
}


void prob8 (void) {
    //Declare all Variables Here
    float lbs;     //feet
    float oz;     //inches
    float kilo;     //meters
    float gm;    //centimeters
    float ft;     //feet
    float in;     //inches
    float mt;     //meters
    float cnt;    //centimeters
    char restart; //End choice
    int choice;   //Beginning choice
    
    cout<<"--------------------------------"<<endl;
    cout<<"*  Press 1 to convert weight   *"<<endl;
    cout<<"*  Press 2 to convert length   *"<<endl;
    cout<<"--------------------------------"<<endl;
    cin>>choice;
    cout<<endl<<endl;
    
    if(choice==1){
        do{cout<<"---------------------------------------------------------------"<<endl;
    cout<<"*  Press 1 to convert from pounds/ounces to kilograms/grams   *"<<endl;
    cout<<"*  Press 2 to convert from kilograms/grams to pounds/ounces   *"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cin>>choice;
    cout<<endl<<endl;
    
    if(choice==1){
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
   
    }
    
    else if(choice==2){
    do{
    //Input or initialize values Here
    cout<<"---------------------"<<endl<<endl;
    cout<<"How many kilograms? ";
    cin>>kilo;
    cout<<endl<<endl<<"How many grams? ";
    cin>>gm;
    cout<<endl;
    
    //Process/Calculations Here
    lbs=(kilo/CNVLBKG)+((gm/CNVGMKG)/CNVLBKG);
    oz=((kilo/CNVLBKG)+((gm/CNVGMKG)/CNVLBKG))*CNVOZLB;
    
    //Output Located Here
    cout<<kilo<<" kilograms and "<<gm<<" grams converts to "<<lbs<<" pounds or "<<oz<<" ounces"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
    }
    
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
   
    }
    
    else if(choice==2){
    do{cout<<"---------------------------------------------------------------"<<endl;
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
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
    
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
    }
    
    cout<<"Type in Y to restart or any other character to exit"<<endl;
    cin>>restart;
    }while((restart=='Y'||restart=='y'));
    }
    
    else{
        cout<<"Not a valid input"<<endl;    }
}

