/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on February 14, 2017, 10:10 PM
 * Purpose:  To fill in blanks for a note to a professor.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string Instruc;
    string YourNm;
    string Food;
    string Numb;
    string adj;
    string color;
    string animal;
    
    //Input data
    cout<<"Please enter your Professor's last name"<<endl;
    getline(cin,Instruc);
    cout<<"Please enter your own name"<<endl;
    getline(cin,YourNm);
    cout<<"Please enter the name of a food"<<endl;
    getline(cin,Food);
    cout<<"Please enter a number"<<endl;
    getline(cin,Numb);
    cout<<"Please enter an adjective"<<endl;
    getline(cin,adj);
    cout<<"Please enter a color"<<endl;
    getline(cin,color);
    cout<<"Please enter the name of an animal"<<endl;
    getline(cin,animal);

    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Dear Professor "<<Instruc<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. First,"<<endl;
    cout<<"I ate a rotten "<<Food<<", which made me turn "<<color<<" and extremely ill. I"<<endl;
    cout<<"came down with a fever of "<<Numb<<". Then, my "<<adj<<" pet "<<endl;
    cout<<animal<<" must have smelled the remains of the "<<Food<<" on my homework,"<<endl;
    cout<<"because he ate it. I am currently rewriting my homework and hope you"<<endl;
    cout<<"will accept it late"<<endl;
    cout<<"  "<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<YourNm<<endl;
    

    //Exit stage right!
    return 0;
}

