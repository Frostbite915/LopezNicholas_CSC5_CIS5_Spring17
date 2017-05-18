/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on May 16th, 2017, 10:30 AM
 * Purpose:  Graded Quiz DMV
 */

//System Libraries Here
#include <iostream>
#include <fstream>  //Reading and opening files
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int COLS=3;

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void rdFile(char [],char [] ,char [][COLS],int);   //Read the answer key
void wrtFile(string ,char [][COLS],int);  //Write the results
void grade(char[][COLS], int); //Compare and grade
int score(char[][COLS],int);               //Numerical result

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=20;
    char kyRspScr[SIZE][COLS];
    string scoreFn;
    
    //Input or initialize values Here
    char keyFnC[]="key.dat";
    char stuRFnC[]="answer.dat";
    scoreFn="result.dat";
    
    rdFile(keyFnC,stuRFnC,kyRspScr,SIZE);
    
    //Process/Calculations Here
    grade(kyRspScr,SIZE);
    
    //Output Located Here
    cout<<"Your test result score was = "<<score(kyRspScr,SIZE)<<endl;
    wrtFile(scoreFn,kyRspScr,SIZE);
    
    //Exit
    return 0;
}

void wrtFile(string fn,char krp[][COLS],int n){
    //Declare file variable
    ofstream out;
    //Open the file
    out.open(fn.c_str());
    //Read the values
    for(int i=0;i<n;i++){
        out<<static_cast<int>(krp[i][2])<<endl;
    }
    //Close the file
    out.close();
}

int score(char krp[][COLS],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=krp[i][2];
    }
    return sum;
}

void grade(char krp[][COLS], int n){
    for(int i=0;i<n;i++){
        if(krp[i][0]==krp[i][1])krp[i][2]=1;
    }
}

void rdFile(char fn1[],char fn2[],char krp[][COLS],int n){
    //Declare file variable for the key file
    ifstream in1;
    int cnt=0;
    //Open the file
    in1.open(fn1);
    //Read the values
    while(in1>>krp[cnt++][0]&&cnt<n);
    //Close the file
    in1.close();
    //Declare file variable for the response file
    ifstream in2;
    cnt=0;
    //Open the file
    in2.open(fn2);
    //Read the values
    while(in2>>krp[cnt++][1]&&cnt<n);
    //Close the file
    in2.close();
}



