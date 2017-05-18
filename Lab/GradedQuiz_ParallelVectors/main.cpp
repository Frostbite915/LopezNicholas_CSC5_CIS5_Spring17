/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on May 16th, 2017, 10:30 AM
 * Purpose:  Graded Quiz DMV
 */

//System Libraries Here
#include <iostream>   //Input/Output Library
#include <fstream>    //Reading and opening files
#include <vector>     //The STL Vector -> Dynamic
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void rdFile(char [] ,vector<char> &);   //Read the answer key
void wrtFile(string ,vector<int> &);  //Write the results
void grade(vector<char> &,vector<char> &,vector<int> &); //Compare and grade
int score(vector<int> &);               //Numerical result

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=20;
    vector<char> key(SIZE);
    vector<char> stuResp(SIZE);
    vector<int> scr(SIZE);
    string scoreFn;
    
    //Input or initialize values Here
    char keyFnC[]="key.dat";
    char stuRFnC[]="answer.dat";
    scoreFn="result.dat";
    
    rdFile(keyFnC,key);
    rdFile(stuRFnC,stuResp);
    
    //Process/Calculations Here
    grade(key,stuResp,scr);
    
    //Output Located Here
    cout<<"Your test result score was = "<<score(scr)<<endl;
    wrtFile(scoreFn,scr);
    
    //Exit
    return 0;
}

void wrtFile(string fn,vector<int> &pts){
    //Declare file variable
    ofstream out;
    //Open the file
    out.open(fn);
    //Read the values
    for(int i=0;i<pts.size();i++){
        out<<pts[i]<<endl;
    }
    //Close the file
    out.close();
}

int score(vector<int> &pts){
    int sum=0;
    for(int i=0;i<pts.size();i++){
        sum+=pts[i];
    }
    return sum;
}

void grade(vector<char> &key, vector<char> &stu, vector<int> &pts){
    for(int i=0;i<pts.size();i++){
        if(key[i]==stu[i])pts[i]=1;
    }
}

void rdFile(char fn[], vector<char> &a){
    //Declare file variable
    ifstream in;
    int cnt=0;
    //Open the file
    in.open(fn);
    //Read the values
    while(in>>a[cnt++]&&cnt<a.size());
    //Close the file
    in.close();
}


