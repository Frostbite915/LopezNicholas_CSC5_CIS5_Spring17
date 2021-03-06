/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on May 16th, 2017, 10:30 AM
 * Purpose:  Battleship Project 2
 */

//System Libraries Here
#include <iostream>
#include <fstream>  //Reading and opening files
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char chce1;
    int chce2;
    int score=0;
    char A1='O',A2='O',A3='O',A4='O',A5='O',A6='O',A7='O',A8='O',A9='O';
    char B1='O',B2='O',B3='O',B4='O',B5='O',B6='O',B7='O',B8='O',B9='O';
    char C1='O',C2='O',C3='O',C4='O',C5='O',C6='O',C7='O',C8='O',C9='O';
    char D1='O',D2='O',D3='O',D4='O',D5='O',D6='O',D7='O',D8='O',D9='O';
    char E1='O',E2='O',E3='O',E4='O',E5='O',E6='O',E7='O',E8='O',E9='O';
    char F1='O',F2='O',F3='O',F4='O',F5='O',F6='O',F7='O',F8='O',F9='O';
    char G1='O',G2='O',G3='O',G4='O',G5='O',G6='O',G7='O',G8='O',G9='O';
    char H1='O',H2='O',H3='O',H4='O',H5='O',H6='O',H7='O',H8='O',H9='O';
    char I1='O',I2='O',I3='O',I4='O',I5='O',I6='O',I7='O',I8='O',I9='O';
    
    do{
    //Input or initialize values Here
    cout<<"Try to beat the game of Battleship in the least"<<endl;
    cout<<"amount of turns!!"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Your score is = "<<score<<endl<<endl;
    cout<<"  A B C D E F G H I "<<endl;
    cout<<"1 "<<A1<<" "<<B1<<" "<<C1<<" "<<D1<<" "<<E1<<" "<<F1<<" "<<G1<<" "<<H1<<" "<<I1<<" "<<endl;
    cout<<"2 "<<A2<<" "<<B2<<" "<<C2<<" "<<D2<<" "<<E2<<" "<<F2<<" "<<G2<<" "<<H2<<" "<<I2<<" "<<endl;
    cout<<"3 "<<A3<<" "<<B3<<" "<<C3<<" "<<D3<<" "<<E3<<" "<<F3<<" "<<G3<<" "<<H3<<" "<<I3<<" "<<endl;
    cout<<"4 "<<A4<<" "<<B4<<" "<<C4<<" "<<D4<<" "<<E4<<" "<<F4<<" "<<G4<<" "<<H4<<" "<<I4<<" "<<endl;
    cout<<"5 "<<A5<<" "<<B5<<" "<<C5<<" "<<D5<<" "<<E5<<" "<<F5<<" "<<G5<<" "<<H5<<" "<<I5<<" "<<endl;
    cout<<"6 "<<A6<<" "<<B6<<" "<<C6<<" "<<D6<<" "<<E6<<" "<<F6<<" "<<G6<<" "<<H6<<" "<<I6<<" "<<endl;
    cout<<"7 "<<A7<<" "<<B7<<" "<<C7<<" "<<D7<<" "<<E7<<" "<<F7<<" "<<G7<<" "<<H7<<" "<<I7<<" "<<endl;
    cout<<"8 "<<A8<<" "<<B8<<" "<<C8<<" "<<D8<<" "<<E8<<" "<<F8<<" "<<G8<<" "<<H8<<" "<<I8<<" "<<endl;
    cout<<"9 "<<A9<<" "<<B9<<" "<<C9<<" "<<D9<<" "<<E9<<" "<<F9<<" "<<G9<<" "<<H9<<" "<<I9<<" "<<endl;
    
    cout<<"Pick a letter"<<endl;
    cin>>chce1;
    cout<<endl;
    cout<<"Now pick a Number"<<endl;
    cin>>chce2;
    cout<<endl;
    
    //Process/Calculations Here
    //Right answers
    if (chce1=='C'&&chce2==1){
        C1 = 'X';
    }
    if (chce1=='D'&&chce2==1){
        D1 = 'X';
    }
    if (chce1=='E'&&chce2==1){
        E1 = 'X';
    }
    if (chce1=='F'&&chce2==1){
        F1 = 'X';
    }
    if (chce1=='G'&&chce2==1){
        G1 = 'X';
    }
    if (chce1=='B'&&chce2==2){
        B2 = 'X';
    }
    if (chce1=='B'&&chce2==3){
        B3 = 'X';
    }
    if (chce1=='E'&&chce2==3){
        E3 = 'X';
    }
    if (chce1=='B'&&chce2==4){
        B4 = 'X';
    }
    if (chce1=='E'&&chce2==4){
        E4 = 'X';
    }
    if (chce1=='I'&&chce2==6){
        I6 = 'X';
    }
    if (chce1=='I'&&chce2==7){
        I7 = 'X';
    }
    if (chce1=='I'&&chce2==8){
        I8 = 'X';
    }
    if (chce1=='B'&&chce2==9){
        B9 = 'X';
    }
    if (chce1=='C'&&chce2==9){
        C9 = 'X';
    }
    if (chce1=='D'&&chce2==9){
        D9 = 'X';
    }
    if (chce1=='E'&&chce2==9){
        E9 = 'X';
    }
    
    //wrong answers
    //A column
    if (chce1=='A'&&chce2==1){
        A1 = '-';
    }
    if (chce1=='A'&&chce2==2){
        A2 = '-';
    }
    if (chce1=='A'&&chce2==3){
        A3 = '-';
    }
    if (chce1=='A'&&chce2==4){
        A4 = '-';
    }
    if (chce1=='A'&&chce2==5){
        A5 = '-';
    }
    if (chce1=='A'&&chce2==6){
        A6 = '-';
    }
    if (chce1=='A'&&chce2==7){
        A7 = '-';
    }
    if (chce1=='A'&&chce2==8){
        A8 = '-';
    }
    if (chce1=='A'&&chce2==9){
        A9 = '-';
    }
    //B column
    if (chce1=='B'&&chce2==1){
        B1 = '-';
    }
    if (chce1=='B'&&chce2==5){
        B5 = '-';
    }
    if (chce1=='B'&&chce2==6){
        B6 = '-';
    }
    if (chce1=='B'&&chce2==7){
        B7 = '-';
    }
    if (chce1=='B'&&chce2==8){
        B8 = '-';
    }
    //C column
    if (chce1=='C'&&chce2==2){
        C2 = '-';
    }
    if (chce1=='C'&&chce2==3){
        C3 = '-';
    }
    if (chce1=='C'&&chce2==4){
        C4 = '-';
    }
    if (chce1=='C'&&chce2==5){
        C5 = '-';
    }
    if (chce1=='C'&&chce2==6){
        C6 = '-';
    }
    if (chce1=='C'&&chce2==7){
        C7 = '-';
    }
    if (chce1=='C'&&chce2==8){
        C8 = '-';
    }
    //D column
    if (chce1=='D'&&chce2==2){
        D2 = '-';
    }
    if (chce1=='D'&&chce2==3){
        D3 = '-';
    }
    if (chce1=='D'&&chce2==4){
        D4 = '-';
    }
    if (chce1=='D'&&chce2==5){
        D5 = '-';
    }
    if (chce1=='D'&&chce2==6){
        D6 = '-';
    }
    if (chce1=='D'&&chce2==7){
        D7 = '-';
    }
    if (chce1=='D'&&chce2==8){
        D8 = '-';
    }
    //E column
    if (chce1=='E'&&chce2==2){
        E2 = '-';
    }
    if (chce1=='E'&&chce2==5){
        E5 = '-';
    }
    if (chce1=='E'&&chce2==6){
        E6 = '-';
    }
    if (chce1=='E'&&chce2==7){
        E7 = '-';
    }
    if (chce1=='E'&&chce2==8){
        E8 = '-';
    }
    //F column
    if (chce1=='F'&&chce2==2){
        F2 = '-';
    }
    if (chce1=='F'&&chce2==3){
        F3 = '-';
    }
    if (chce1=='F'&&chce2==4){
        F4 = '-';
    }
    if (chce1=='F'&&chce2==5){
        F5 = '-';
    }
    if (chce1=='F'&&chce2==6){
        F6 = '-';
    }
    if (chce1=='F'&&chce2==7){
        F7 = '-';
    }
    if (chce1=='F'&&chce2==8){
        F8 = '-';
    }
    if (chce1=='F'&&chce2==9){
        F9 = '-';
    }
    //G column
    if (chce1=='G'&&chce2==2){
        G2 = '-';
    }
    if (chce1=='G'&&chce2==3){
        G3 = '-';
    }
    if (chce1=='G'&&chce2==4){
        G4 = '-';
    }
    if (chce1=='G'&&chce2==5){
        G5 = '-';
    }
    if (chce1=='G'&&chce2==6){
        G6 = '-';
    }
    if (chce1=='G'&&chce2==7){
        G7 = '-';
    }
    if (chce1=='G'&&chce2==8){
        G8 = '-';
    }
    if (chce1=='G'&&chce2==9){
        G9 = '-';
    }
    //H column
    if (chce1=='H'&&chce2==1){
        H1 = '-';
    }
    if (chce1=='H'&&chce2==2){
        H2 = '-';
    }
    if (chce1=='H'&&chce2==3){
        H3 = '-';
    }
    if (chce1=='H'&&chce2==4){
        H4 = '-';
    }
    if (chce1=='H'&&chce2==5){
        H5 = '-';
    }
    if (chce1=='H'&&chce2==6){
        H6 = '-';
    }
    if (chce1=='H'&&chce2==7){
        H7 = '-';
    }
    if (chce1=='H'&&chce2==8){
        H8 = '-';
    }
    if (chce1=='H'&&chce2==9){
        H9 = '-';
    }
    //I column
    if (chce1=='I'&&chce2==1){
        I1 = '-';
    }
    if (chce1=='I'&&chce2==2){
        I2 = '-';
    }
    if (chce1=='I'&&chce2==3){
        I3 = '-';
    }
    if (chce1=='I'&&chce2==4){
        I4 = '-';
    }
    if (chce1=='I'&&chce2==5){
        I5 = '-';
    }
    if (chce1=='I'&&chce2==9){
        I9 = '-';
    }
    
    //Output Located Here
    }while((chce1=='A'||chce1=='B'||chce1=='C'||chce1=='D'||chce1=='E'||chce1=='F'||chce1=='G'||chce1=='H'||chce1=='I')&&(chce2==1||chce2==2||chce2==3||chce2==4||chce2==5||chce2==6||chce2==7||chce2==8||chce2==9));
    
    //Exit
    return 0;
}
