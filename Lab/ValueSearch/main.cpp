/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on May 16, 2017, 12:04 PM
 * Purpose:  Linear and Binary search for value 1
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>  //Random number function
#include <ctime>    //Time to set the seed
#include <string>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void filArray(int [], int, int);
void prntAry(int [],int, int);
void allSrch (int [],int ,int);
void linSrch (int [],int ,int ,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    const int SIZE=12;
    int array[SIZE]={};
    int mod=4, val=1;
    
    //Declare all Variables Here
    
    
    //Input or initialize values Here
    filArray(array,SIZE,4);
    prntAry(array,SIZE,4);
    allSrch(array,SIZE,val);
    
    //Process/Calculations Here
    
    //Output Located Here
    
    
    //Exit
    return 0;
}


void allSrch (int a[],int n,int val){
    int pos=0;
    do{
        pos=linSrch(a,pos,n,val);
        if(pos>=0)cout<<val<<" found at "<<pos<<endl;
    }while(pos++>=0);
}

void linSrch (int a[],int b,int e,int val){
    for(int i=b;i<e;i++){
        if (a[i]==val)return i;
    }
    return -1;
}

void prntAry(int a[],int n, int perLine){
    cout<<"-----------------------------"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<"-----------------------------"<<endl;
}
void filArray(int a[], int n, int mod){
    for(int i=0;i<n;i++){
        a[i]=i%mod;
    }
                           }


