/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on April 3, 2017, 12:07 PM
 * Purpose: Assignment 4 Menu
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>   //set random number seed
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
        cout<<"Type 1 for ASCII character Problem"<<endl;
        cout<<"Type 2 for Math Tutor Problem"<<endl;
        cout<<"Type 3 for Weight Checking Problem"<<endl;
        cout<<"Type 4 for Miles per Gallon Problem"<<endl;
        cout<<"Type 5 for Fuel Efficiency (2 cars) Problem"<<endl;
        cout<<"Type 6 for Problem 6"<<endl;
        cout<<"Type 7 for Problem 7"<<endl;
        cout<<"Type 8 for Problem 8"<<endl;
        cout<<"Type 9 for Problem 9"<<endl<<endl;
        
        //Input choice
        cin>>choice;
        //Place solutions to problems in switch statements
        switch(choice){
            case '1':{
                //Map inputs to outputs or process the data
                for (int i = 0; i <= 127; i++) {
                    cout<<static_cast<char>(i);
                    if(i%16==15)cout<<endl;
                }
                break;
            }
            case '2':{
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare all Variables Here
                int op1, op2, result, answer;
                char choice;

                //Input data
                cout<<"Math Tutor"<<endl;
                do{

                    cout<<"Choose the operation (* / + -) .....or anything else to exit I guess"<<endl;
                    cin>>choice;
                    cout<<endl;
                    cout<<endl;
                    if(!(choice=='+'||choice=='-'||choice=='/'||choice=='*')){
                        cout<<"Exit the Math Tutor"<<endl;
                        exit(0);
                    }

                    //Process/Calculations Here
                    switch(choice){
                        case '+':{
                            op1=rand()%900+100;      //[100-999]
                            op2=rand()%900+100;      //[100-999]
                            answer=op1+op2;          //[3-4 digit result]
                            break;
                        }
                        case '-':{
                            op1=rand()%900+100;      //[100-999]
                            op2=rand()%900+100;      //[100-999]
                            answer=op1-op2;          //[0-3 digit result]
                            break;
                        }
                        case '*':{
                            op1=rand()%90+10;        //[10-99]
                            op2=rand()%90+10;        //[10-99]
                            answer=op1*op2;          //[2-4 digit result]
                            break;
                        }
                        case '/':{
                            answer=rand()%900+100;   //[10-99]
                            op2=rand()%90+10;        //[10-99]
                            op1=answer*op2;          //[2-4 digit result]
                            break;
                        }
                        default:{
                            cout<<"Really?"<<endl;
                            return 1;
                        }
                    }

                    //Output Located Here
                    cout<<setw(8)<<op1<<endl;
                    cout<<choice<<setw(7)<<op2<<endl;
                    cout<<"----------"<<endl;
                    cout<<"     ";
                    cin>>result;

                    //Compare the answer
                    cout<<endl;
                    cout<<((result==answer)?"Correct":"Incorrect")<<endl;
                    cout<<"The correct answer is = "<<answer<<endl;
                    cout<<"Type in anything to exit"<<endl;
                    cout<<endl<<"****************************"<<endl<<endl;
                }
                while(choice=='+'||choice=='-'||choice=='/'||choice=='*');

                break;
            }
            case '3':{
                    //Declare all Variables Here
                float MSSERTH=5.972e27f;    //Mass of earth in grams
                float GCONST=6.673e-8f;     //Gravitational Constant cm^3/gm sec^2
                float CNVFTCM=1.0f/30.48f;  //Conversion from ft to cm
                float CNVMFT=5280.0f;       //Conversion from miles to feet
                float RADERTH=3959;         //Radius of the earth in miles
                float myWeight;             //Result in lbs
                float myMass = 6;           //Units of slugs

                //Input or initialize values Here
                myWeight=GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass
                /(RADERTH*RADERTH*CNVMFT*CNVMFT);

                //Process/Calculations Here
                cout<<"You Weigh "<<myWeight<<" lbs"<<endl;
                cout<<"------------------------------------------------"<<endl;
    
                break;
            }
            case '4':{
                //Declare all Variables Here
                float CNVLTGL = 0.264179f; //gallons per single liter
                int liter;                 //liters of gas in car
                int miles;                 //miles driven by car
                int mlprgl;                //miles per gallon car gets

                //Input or initialize values Here
                cout<<"This program takes the liters of gas and the miles driven by"<<endl;
                cout<<"your car to tell you your miles per gallon"<<endl<<endl;

                cout<<"Please input the liters of gas your car can hold = ";
                cin>>liter;
                cout<<endl<<endl;

                cout<<"Please input the miles your car can drive = ";
                cin>>miles;
                cout<<endl<<endl;

                //Process/Calculations Here
                mlprgl=miles/(liter*CNVLTGL);

                //Output Located Here
                cout<<"The miles per gallon your car gets is = "<<mlprgl<<endl;
                cout<<"------------------------------------------------"<<endl;
                break;
            }
            case '5':{
                //Declare all Variables Here
                int liter1, liter2;        //liters of gas in car
                int miles1, miles2;        //miles driven by car
                int mlprgl1, mlprgl2;      //miles per gallon car gets
                float CNVLTGL = 0.264179f; //gallons per single liter
                float best1 = 1;
                float best2 = 2;
                int best;                  //most fuel efficient car

                //Input or initialize values Here
                cout<<"This program takes the liters of gas and the miles driven by"<<endl;
                cout<<"two cars to tell you your miles per gallon of each and"<<endl;
                cout<<"which is the most fuel efficient"<<endl<<endl;

                cout<<"Please input the liters of gas the first car can hold = ";
                cin>>liter1;
                cout<<endl<<endl;

                cout<<"Please input the miles the first car can drive = ";
                cin>>miles1;
                cout<<endl<<endl;

                cout<<"Please input the liters of gas the second car can hold = ";
                cin>>liter2;
                cout<<endl<<endl;

                cout<<"Please input the miles the second car can drive = ";
                cin>>miles2;
                cout<<endl<<endl;

                //Process/Calculations Here
                mlprgl1=miles1/(liter1*CNVLTGL);
                mlprgl2=miles2/(liter2*CNVLTGL);

                if (mlprgl1>mlprgl2);{
                best=best1;
                }
                {
                (mlprgl2>mlprgl1);
                best=best2;

                }
                //Output Located Here
                cout<<"The miles per gallon the first car gets is = "<<mlprgl1<<endl;
                cout<<"The miles per gallon the second car gets is = "<<mlprgl2<<endl;
                cout<<"The most fuel efficient car is car #"<<best<<endl;
                cout<<"----------------------------------------------"<<endl;
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

