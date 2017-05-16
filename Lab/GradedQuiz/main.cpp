/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on May 16th, 2017, 10:30 AM
 * Purpose:  Graded Quiz DMV
 */

//System Libraries Here
#include <iostream>
#include <fstream>  //Reading and opening files
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void rdFile(string ,char [],int);   //Read the answer key
void wrtFile(string ,int [],int);  //Write the results
void grade(char[], char[],int[], int); //Compare and grade
void score(int[],int);               //Numerical result

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
   
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    
    //Exit
    return 0;
}

void witFile(string fn,int pts[],int n){
    //Declare file variable
    ofstream out;
    //Open the file
    out.open(fn.c_str());
    //Read the values
    for(int i=0;i<n;i++){
        out<<pts[i]<<endl;
    }
    //Close the file
    out.close();
}

void score(int pts[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+pts[i];
    }
    return sum;
}

void grade(char key[], char stu[],int pts[], int n){
    for(int i=0;i<n;i++){
        if(key[i]==stu[i])pts[i]=1;
    }
}

void rdFile(string fn,char a[],int n){
    //Declare file variable
    ifstream in;
    int cnt=0;
    //Open the file
    in.open(fn.c_str());
    //Read the values
    while(in>>a[cnt++]);
    //Close the file
    in.close();
}


