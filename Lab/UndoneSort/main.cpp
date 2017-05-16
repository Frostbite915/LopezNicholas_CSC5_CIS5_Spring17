/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
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
    int a;
    int b;
    int c;
    
    
    //Input or initialize values Here
    cout<<"Choose your three numbers to be sorted greatest to least"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<endl<<"Your numbers are "<<a<<", "<<b<<", and "<<c<<endl<<endl;
    
    //Process/Calculations Here
    if(a>b&&a>c&&b>c){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
    if(a>b&&a>c&&c>b){
        cout<<a<<endl;
        cout<<c<<endl;
        cout<<b<<endl;
    }
    
    if(b>a&&b>c&&a>c){
        cout<<b<<endl;
        cout<<a<<endl;
        cout<<c<<endl;
    }
    
    if(b>a&&b>c&&c>a){
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<a<<endl;
    }
    
    if(c>a&&c>b&&a>b){
        cout<<c<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
    }
    
    if(c>a&&c>b&&b>a){
        cout<<c<<endl;
        cout<<b<<endl;
        cout<<a<<endl;
    }
    
    //Output Located Here
    
    //Exit
    return 0;
}

