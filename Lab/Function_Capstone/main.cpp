/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on April 25, 2017, 11:30 AM
 * Purpose:  Savings Function
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes For all savings function for a future value
float fv1(float,float,int);
float fv2(float,float,int);
float fv3(float,float,int);
float fv4(float,float,int=12);
float fv5(float,float,int);
int   fv5(float,float,int,float &);  //Static
float fv6(float,float,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float pv;  //Present value $
    float ir;  //Interest rate in %
    float  n;  //Number of compounding periods in years
    
    //Input or initialize values Here
    pv=100.0f;
    ir=6;
    n=72/ir;    //By the rule of 72
    
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value           = $"<<pv<<endl;
    cout<<"Interest Rate           = "<<ir<<"%"<<endl;
    cout<<"Number of years         = "<<n<<" years"<<endl;
    cout<<"Future Value function 1 = $"<<fv1(pv,ir/100,n)<<endl;
    cout<<"Future Value function 2 = $"<<fv2(pv,ir/100,n)<<endl;
    cout<<"Future Value function 3 = $"<<fv3(pv,ir/100,n)<<endl;
    cout<<"Future Value function 4 = $"<<fv4(pv,ir/100)<<endl;
    cout<<"Future Value function 5 = $"<<fv3(pv,ir/100,n)<<endl;
    float fv;
    int loop=9;
    for(int i=1;i<loop;i++)fv5(pv,ir/100,n,fv);
    int funCnt=fv5(pv,ir/100,n,fv);
    cout<<"Future Value function 6 = $"<<fv<<endl;
    cout<<"# of times Function 6 was called = "<<funCnt<<endl;
    cout<<"Future Value function 7 = $"<<fv6(pv,ir/100,n)<<endl;

    //Exit
    return 0;
}

float fv6(float p,float i,int n){
    int ip=p*100; //In pennies
    p=ip;
    
    for(int year=1;year<=n;year++){
        p*=(1+i);
        ip=p;
        p=ip;
    }
    return p/100.0f;
}

int   fv5(float p,float i,int n,float &fv){
    static int count=1;
    fv=p;
    for(int year=1;year<=n;year++){
        fv*=(1+i);
    }
    return count++;
}

float fv5(float p,float i,int n){
    if(n<=0)return p;
    return fv5(p,i,n-1)*(1+i);
}

float fv4(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

float fv3(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

float fv2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float fv1(float p,float i,int n){
    return p*pow(1+i,n);
}
