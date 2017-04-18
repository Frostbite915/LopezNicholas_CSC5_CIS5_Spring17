/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on April 14, 2017, 10:00 PM
 * Purpose: Version 3 of Project 1
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
    int chance = 0 ; //Amount of tries taken
    char letter;     //Letter input
    int lives = 6;   //Amount of lives
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
        lives=lives-chance;

        if (!(letter=='P'||letter=='I'||letter=='Z'||letter=='A')){
            cout<<"That is not one of the letters"<<endl;
            chance=chance+1;
        }

        if (letter=='P'){ 
            num1 = nu1;
            cout<<"That is one of the letters!"<<endl;
        }

        if (letter=='I'){ 
            num2 = nu2;
            cout<<"That is one of the letters!"<<endl;
        }

        if (letter=='Z'){ 
            num3 = nu3;
            cout<<"That is one of the letters!"<<endl;
        }

        if (letter=='Z'){ 
            num4 = nu4;
            cout<<"That is one of the letters!"<<endl;
        }

        if (letter=='A'){ 
            num5 = nu5;
            cout<<"That is one of the letters!"<<endl;
        }
    }
                
                while (lives>=1);
    //Exit
    return 1;
}

//Chances function not working properly
//Need to rethink the formula for it