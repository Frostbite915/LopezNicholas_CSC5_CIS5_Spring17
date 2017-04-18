/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on April 17, 2017, 1:30 AM
 * Purpose: Version 5 of Project 1
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
    char choice;
    
    //Show menu and loop
    do{
        //Display menu
        cout<<endl<<endl<<"Type 0 to Exit"<<endl;
        cout<<"This is Hangman!!"<<endl;
        cout<<"Type 1 for Level 1!"<<endl;
        cout<<"Type 2 for Level 2!"<<endl;
        cout<<"Type 3 for Level 3!"<<endl;
        cout<<"Type 4 for Level 4!"<<endl;
        cout<<"Type 5 for Level 5!"<<endl<<endl;
        
        //Input choice
        cin>>choice;
        //Place solutions to problems in switch statements
        switch(choice){
            case '1':{    
                //Declare all Variables Here
                int chance = 0 ; //Amount of tries taken
                char letter;     //Letter input
                int lives = 6;   //Amount of lives
                char num1 = '_', num2 = '_', num3 = '_', num4 = '_', num5 = '_';
                char nu1 = 'P', nu2 = 'I', nu3 = 'Z', nu4 = 'Z', nu5 = 'A';

                //Input data
                cout<<"Hangman (USE CAPITAL LETTERS)"<<endl;
                cout<<"What is everyone's favorite italian food(PIZZA)?"<<endl;
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

                    //Process/Calculations Here
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
                    if (!(letter=='P'||letter=='I'||letter=='Z'||letter=='A')){
                        cout<<"That is not one of the letters"<<endl;
                        chance=0+1;
                    }
                    lives=lives-chance;
                }
                            while (lives>=1);{
                        cout<<"You failed, The word was "<<nu1<<nu2<<nu3<<nu4<<nu5<<", let's take you back to the menu"<<endl;
                        exit(0);
                    }
                break;
            }
            case '2':{
            //Declare all Variables Here
                int chance = 0 ; //Amount of tries taken
                char letter;     //Letter input
                int lives = 6;   //Amount of lives
                char num1 = '_', num2 = '_', num3 = '_', num4 = '_', num5 = '_', num6 = '_';
                char nu1 = 'C', nu2 = 'O', nu3 = 'D', nu4 = 'I', nu5 = 'N', nu6 = 'G';

                //Input data
                cout<<"Hangman (USE CAPITAL LETTERS)"<<endl;
                cout<<"What does this class teach(CODING)?"<<endl;
                do{

                    cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5<<" "<<num6<<endl;
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

                    //Process/Calculations Here
                    if (letter=='C'){ 
                        num1 = nu1;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (letter=='O'){ 
                        num2 = nu2;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (letter=='D'){ 
                        num3 = nu3;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (letter=='I'){ 
                        num4 = nu4;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (letter=='N'){ 
                        num5 = nu5;
                        cout<<"That is one of the letters!"<<endl;
                    }
                    if (letter=='G'){ 
                        num6 = nu6;
                        cout<<"That is one of the letters!"<<endl;
                    }
                    if (!(letter=='C'||letter=='O'||letter=='D'||letter=='I'||letter=='N'||letter=='G')){
                        cout<<"That is not one of the letters"<<endl;
                        chance=0+1;
                    }
                    lives=lives-chance;
                }
                            while (lives>=1);{
                        cout<<"You failed, The word was "<<nu1<<nu2<<nu3<<nu4<<nu5<<nu6<<", let's take you back to the menu"<<endl;
                        exit(0);
                }
                break;
                }
            case '3':{
                //Declare all Variables Here
                int chance = 0 ; //Amount of tries taken
                char letter;     //Letter input
                int lives = 6;   //Amount of lives
                char num1 = '_', num2 = '_', num3 = '_', num4 = '_';
                char nu1 = 'H', nu2 = 'E', nu3 = 'L', nu4 = 'P';

                //Input data
                cout<<"Hangman (USE CAPITAL LETTERS)"<<endl;
                cout<<"What is it that I need on this(HELP)?"<<endl;
                do{

                    cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<endl;
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

                    //Process/Calculations Here
                    if (letter=='H'){ 
                        num1 = nu1;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (letter=='E'){ 
                        num2 = nu2;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (letter=='L'){ 
                        num3 = nu3;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (letter=='P'){ 
                        num4 = nu4;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (!(letter=='H'||letter=='E'||letter=='L'||letter=='P')){
                        cout<<"That is not one of the letters"<<endl;
                        chance=0+1;
                    }
                    lives=lives-chance;
                }
                            while (lives>=1);{
                        cout<<"You failed, The word was "<<nu1<<nu2<<nu3<<nu4<<", let's take you back to the menu"<<endl;
                        exit(0);
                }
                break;
                }
            case '4':{
                //Declare all Variables Here
                int chance = 0 ; //Amount of tries taken
                char letter;     //Letter input
                int lives = 6;   //Amount of lives
                char num1 = '_', num2 = '_', num3 = '_', num4 = '_';
                char nu1 = 'T', nu2 = 'I', nu3 = 'M', nu4 = 'E';

                //Input data
                cout<<"Hangman (USE CAPITAL LETTERS)"<<endl;
                cout<<"What do I need more of (TIME)?"<<endl;
                do{

                    cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<endl;
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

                    //Process/Calculations Here
                    if (letter=='T'){ 
                        num1 = nu1;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (letter=='I'){ 
                        num2 = nu2;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (letter=='M'){ 
                        num3 = nu3;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (letter=='E'){ 
                        num4 = nu4;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (!(letter=='T'||letter=='I'||letter=='M'||letter=='E')){
                        cout<<"That is not one of the letters"<<endl;
                        chance=0+1;
                    }
                    lives=lives-chance;
                }
                            while (lives>=1);{
                        cout<<"You failed, The word was "<<nu1<<nu2<<nu3<<nu4<<", let's take you back to the menu"<<endl;
                        exit(0);
                }
                break;
                }
            case '5':{
                //Declare all Variables Here
                int chance = 0 ; //Amount of tries taken
                char letter;     //Letter input
                int lives = 6;   //Amount of lives
                char num1 = '_', num2 = '_', num3 = '_', num4 = '_', num5 = '_';
                char nu1 = 'A', nu2 = 'P', nu3 = 'R', nu4 = 'I',nu5 = 'L';

                //Input data
                cout<<"Hangman (USE CAPITAL LETTERS)"<<endl;
                cout<<"What month is this project due in (April)?"<<endl;
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

                    //Process/Calculations Here
                    if (letter=='A'){ 
                        num1 = nu1;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (letter=='P'){ 
                        num2 = nu2;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (letter=='R'){ 
                        num3 = nu3;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (letter=='I'){ 
                        num4 = nu4;
                        cout<<"That is one of the letters!"<<endl;
                    }
                    
                    if (letter=='L'){ 
                        num5 = nu5;
                        cout<<"That is one of the letters!"<<endl;
                    }

                    if (!(letter=='A'||letter=='P'||letter=='R'||letter=='I'||letter=='L')){
                        cout<<"That is not one of the letters"<<endl;
                        chance=0+1;
                    }
                    lives=lives-chance;
                }
                            while (lives>=1);{
                        cout<<"You failed, The word was "<<nu1<<nu2<<nu3<<nu4<<nu5<<", let's take you back to the menu"<<endl;
                        exit(0);
                }
                break;
                }

            default:{
                cout<<"Exit the Program"<<endl;
                exit(0);
            }
        }
        
    }while(choice>='1'&&choice<='5');
    
    //Exit
    return 0;
    }
