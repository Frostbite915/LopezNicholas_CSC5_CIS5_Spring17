/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on March 23, 2017, 12:07 AM
 * Purpose:  Menu to be utilized on Homework
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
    char choice;
    
    
    //Show menu and loop
    do{
        //Display menu
        cout<<endl<<endl<<"Type 0 to Exit"<<endl;
        cout<<"Type 1 for Sum 1 to N Problem"<<endl;
        cout<<"Type 2 for Sum 0.1 Error Problem"<<endl;
        cout<<"Type 3 for Problem 3"<<endl;
        cout<<"Type 4 for Problem 3"<<endl;
        cout<<"Type 5 for Problem 3"<<endl;
        cout<<"Type 6 for Problem 3"<<endl;
        cout<<"Type 7 for Problem 3"<<endl;
        cout<<"Type 8 for Problem 3"<<endl;
        cout<<"Type 9 for Problem 3"<<endl<<endl;
        
        //Input choice
        cin>>choice;
        //Place solutions to problems in switch statements
        switch(choice){
            case '1':{
                //Declare all Variables Here
                //Make sure 0<=n<=100
                int n = 100, sum = 0;

                //Input or initialize values Here

                //Process/Calculations Here
                for (int i = 1; i < n;i ++ ){
                    sum +=i;
                }
                //Output Located Here
                cout<<"The computed sum of 1 to "<<n<<" = "<<sum<<endl;
                cout<<"and "<<n<<"*("<<n<<"+1)/2 ="<<n*(n+1)/2<<endl;

                break;
            }
            case '2':{
                //Declare all Variables Here
                int nLoop = 10000000;
                float sum = 0.0f, frac = 0.1f;

                //Input or initialize values Here

                //Process/Calculations Here
                for (int i = 1; i < nLoop; i++){
                    sum += frac;
                }

                //Output Located Here
                cout<<"The computed sum of "
                        <<frac<<" -> "<<nLoop<<" times = "<<sum<<endl;
                cout<<"Simple Multiplication of "
                        <<frac<<"x"<<nLoop<<" = "<<frac*nLoop<<endl;
                cout<<"ERROR = "<<(frac*nLoop-sum)/(frac*nLoop)*100
                        <<"%"<<endl;
                break;
            }
            case '3':{
                cout<<"In problem solution 3"<<endl;
                break;
            }
            case '4':{
                cout<<"In problem solution 4"<<endl;
                break;
            }
            case '5':{
                cout<<"In problem solution 5"<<endl;
                break;
            }
            case '6':{
                cout<<"In problem solution 6"<<endl;
                break;
            }
            case '7':{
                cout<<"In problem solution 7"<<endl;
                break;
            }
            case '8':{
                cout<<"In problem solution 8"<<endl;
                break;
            }
            case '9':{
                cout<<"In problem solution 9"<<endl;
                break;
            }

            default:{
                cout<<"Exit the Program"<<endl;
            }
        }
        
    }while(choice>='1'&&choice<='9');

    //Exit
    return 0;
}

