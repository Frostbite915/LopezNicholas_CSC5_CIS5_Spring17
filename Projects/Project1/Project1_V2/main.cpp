/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on April 11, 2017, 2:30 PM
 * Purpose: Version 2 of Project 1
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here

    
    //Set the random number seed

                //Declare all Variables Here
                
                char letter;
                int lives = 6;
                char num1 = '_', num2 = '_', num3 = '_', num4 = '_', num5 = '_';
                char nu1 = 'P', nu2 = 'I', nu3 = 'Z', nu4 = 'Z', nu5 = 'A';

                //Input data
                cout<<"Hangman (USE CAPITAL LETTERS)"<<endl;
                cout<<"What is everyone's favorite italian food?"<<endl;
                do{
                    
                    cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5<<endl;
                    cout<<" _______  "<<endl;
                    cout<<" |     |  "<<endl;
                    cout<<" |     O  "<<endl;
                    cout<<" |    /|/ "<<endl;
                    cout<<" |     |  "<<endl;
                    cout<<" |    / / "<<endl;
                    cout<<"_|_       "<<endl;
                    cout<<"YOU HAVE "<<lives<<" CHANCES LEFT"<<endl;
                    
                    cin>>letter;
                    cout<<endl;
                    cout<<endl;
                    if(lives<=0){
                        cout<<"You suck, let's take you back to the menu"<<endl;
                        exit(0);
                    }

                    //Process/Calculations Here
                    if (letter!=nu1||letter!=nu2||letter!=nu3||letter!=nu4||letter!=nu5){
                        cout<<"That is not one of the letters"<<endl;
                        lives==lives-1;
                    }
                    
                    if (letter=='P'){ 
                        num1 = nu1;
                    }
                    
                    if (letter=='I'){ 
                        num2 = nu2;
                    }
                    
                    if (letter=='Z'){ 
                        num3 = nu3;
                    }
                    
                    if (letter=='Z'){ 
                        num4 = nu4;
                    }
                    
                    if (letter=='A'){ 
                        num5 = nu5;
                    }
                }
                
                while (lives>=1);
    //Exit
    return 1;
}

//Recognizes input letters now but still says all are wrong
//Chances function not working at all