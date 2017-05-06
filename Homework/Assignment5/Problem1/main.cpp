/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on May 1, 2017, 2:07 PM
 * Purpose:  Shooter "Game"
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>   //random number generator
#include <ctime>     //time to set random number seed
#include <cmath>     //math library
#include <iomanip>   //Format ouput
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int MAXRND=pow(2,31)-1;   //Max Random Number

//Function Prototypes Here
//pROBABILITY -> [0,1]
float rndProb(){
    return static_cast<float>(rand())/MAXRND;
}
void heading(){
    cout<<"Table of shooting results"<<endl;
    cout<<"A -> Alive, D -> Dead"<<endl;
    cout<<"Aaron Bob Charles"<<endl;
}
void results(bool a, bool b, bool c){
    cout<<" "<<(a?'A':'D');
    cout<<"     "<<(b?'A':'D');
    cout<<"     "<<(c?'A':'D');
}

//Program Execution Begins Here
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    float pHitA=1.0f/3;  //Probability of hit for Aaron
    float pHitB=1.0f/2;  //Probability of hit for Bob
    float pHitC=1.0f;    //Probability of hit for Charlie
    bool aliveA=true;    //Aaron is alive
    bool aliveB=true;    //Bob is alive
    bool aliveC=true;    //Charles is alive
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    heading();
    results(aliveA,aliveB,aliveC);
    cout<<endl;
    if(pHitA>=rndProb()&&aliveC)aliveC=false;  //Kill Charles
    results(aliveA,aliveB,aliveC);
    cout<<endl;
    if(pHitB>=rndProb()&&aliveC)aliveC=false;  //Kill Charles
    results(aliveA,aliveB,aliveC);
    cout<<endl;
    if(pHitC>=rndProb()&&aliveB&&aliveC)aliveB=false;  //Kill Charles
    results(aliveA,aliveB,aliveC);
    cout<<endl;
    if(pHitA>=rndProb()&&aliveC&&aliveA)aliveC=false;  //Kill Charles
    results(aliveA,aliveB,aliveC);
    cout<<endl;
    if(pHitC>=rndProb()&&aliveA&&aliveC)aliveA=false;  //Kill Charles
    results(aliveA,aliveB,aliveC);
    cout<<endl;
        
    //Output Located Here


    //Exit
    return 0;
}

