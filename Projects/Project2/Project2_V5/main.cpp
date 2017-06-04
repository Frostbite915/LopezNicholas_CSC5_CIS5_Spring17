/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on April 3rd, 2017, 10:30 AM
 * Purpose:  Battleship Project 2 Version 5
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
char choice(char, int,string&,int,int&,int&,int&,int&,int&,int&,int&,char&,char&,char&,char&,char&,char&,char&,char&,
            char&,char&,char&,char&,char&,char&,char&,char&,char&,char&,
            char&,char&,char&,char&,char&,char&,char&,char&,char&,char&,
            char&,char&,char&,char&,char&,char&,char&,char&,char&,char&,
            char&,char&,char&,char&,char&,char&,char&,char&,char&,char&,
            char&,char&,char&,char&,char&,char&,char&,char&,char&,char&,
            char&,char&,char&,char&,char&,char&,char&,char&,char&,char&,
            char&,char&,char&,char&,char&,char&,char&,char&,char&,char&,
            char&,char&,char&);
void board(char, int,int&,int&,char,char,char,char,char,char,char,char,char,char,
           char,char,char,char,char,char,char,char,char,char,
           char,char,char,char,char,char,char,char,char,char,
           char,char,char,char,char,char,char,char,char,char,
           char,char,char,char,char,char,char,char,char,char,
           char,char,char,char,char,char,char,char,char,char,
           char,char,char,char,char,char,char,char,char,char,
           char,char,char,char,char,char,char,char,char,char,
           char);
//Program Execution Begins Here
int main() {
    //Declare all Variables Here
    char A1='O',A2='O',A3='O',A4='O',A5='O',A6='O',A7='O',A8='O',A9='O';   //All the spaces
    char B1='O',B2='O',B3='O',B4='O',B5='O',B6='O',B7='O',B8='O',B9='O';  
    char C1='O',C2='O',C3='O',C4='O',C5='O',C6='O',C7='O',C8='O',C9='O';
    char D1='O',D2='O',D3='O',D4='O',D5='O',D6='O',D7='O',D8='O',D9='O';
    char E1='O',E2='O',E3='O',E4='O',E5='O',E6='O',E7='O',E8='O',E9='O';
    char F1='O',F2='O',F3='O',F4='O',F5='O',F6='O',F7='O',F8='O',F9='O';
    char G1='O',G2='O',G3='O',G4='O',G5='O',G6='O',G7='O',G8='O',G9='O';
    char H1='O',H2='O',H3='O',H4='O',H5='O',H6='O',H7='O',H8='O',H9='O';
    char I1='O',I2='O',I3='O',I4='O',I5='O',I6='O',I7='O',I8='O',I9='O';
    int ship1=0,ship2=0,ship3=0,ship4=0,ship5=0;  //Each ship which adds up
    const int SIZE=10;                            //size of scoreboard
    char chce1;                                   //character choice
    int chce2;                                    //integer choice
    int score=0;                                  //amount of moves made, each equal one point
    int boat=0;                                   //amount of boats sunk
    string name;                                  //Name for leader boards

    //Input or initialize values Here
    cout<<"Please enter your name ";
        cin>>name;
        cout<<endl;
    do{
    board(chce1,chce2,score,boat,A1,A2,A3,A4,A5,A6,A7,A8,A9,B1,B2,B3,B4,B5,B6,B7,B8,
          B9,C1,C2,C3,C4,C5,C6,C7,C8,C9,D1,D2,D3,D4,D5,D6,D7,D8,D9,
          E1,E2,E3,E4,E5,E6,E7,E8,E9,F1,F2,F3,F4,F5,F6,F7,F8,F9,
          G1,G2,G3,G4,G5,G6,G7,G8,G9,H1,H2,H3,H4,H5,H6,H7,H8,H9,
          I1,I2,I3,I4,I5,I6,I7,I8,I9);

    cout<<"Pick a letter"<<endl;
    cin>>chce1;
    cout<<endl;
    cout<<"Now pick a Number"<<endl;
    cin>>chce2;
    cout<<endl;

    choice(chce1,chce2,name,SIZE,score,boat,ship1,ship2,ship3,ship4,ship5,A1,A2,A3,
           A4,A5,A6,A7,A8,A9,B1,B2,B3,B4,B5,B6,B7,B8,B9,C1,C2,C3,C4,C5,C6,
           C7,C8,C9,D1,D2,D3,D4,D5,D6,D7,D8,D9,E1,E2,E3,E4,E5,E6,E7,E8,E9,
           F1,F2,F3,F4,F5,F6,F7,F8,F9,G1,G2,G3,G4,G5,G6,G7,G8,G9,H1,H2,H3,
           H4,H5,H6,H7,H8,H9,I1,I2,I3,I4,I5,I6,I7,I8,I9);
    
    }while(chce2==1||chce2==2||chce2==3||chce2==4||chce2==5||chce2==6||chce2==7||chce2==8||chce2==9);
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

void board(char chce1, int chce2, int &score, int &boat, char A1,char A2,char A3,char A4,char A5,
           char A6,char A7,char A8,char A9,char B1,char B2,char B3,char B4,char B5,
           char B6,char B7,char B8,char B9,char C1,char C2,char C3,char C4,char C5,
           char C6,char C7,char C8,char C9,char D1,char D2,char D3,char D4,char D5,
           char D6,char D7,char D8,char D9,char E1,char E2,char E3,char E4,char E5,
           char E6,char E7,char E8,char E9,char F1,char F2,char F3,char F4,char F5,
           char F6,char F7,char F8,char F9,char G1,char G2,char G3,char G4,char G5,
           char G6,char G7,char G8,char G9,char H1,char H2,char H3,char H4,char H5,
           char H6,char H7,char H8,char H9,char I1,char I2,char I3,char I4,char I5,
           char I6,char I7,char I8,char I9){
    cout<<"Try to beat the game of Battleship in the least"<<endl;
    cout<<"amount of turns!!"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Your score is = "<<score<<endl;
    cout<<"You have sunk "<<boat<<" ships out of 5"<<endl<<endl;
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




}



char choice(char chce1, int chce2,string &name,int SIZE,int &score,int &boat, int &ship1,int &ship2,int &ship3,
            int &ship4,int &ship5, char &A1,char &A2,char &A3,char &A4,char &A5,char &A6,
            char &A7,char &A8,char &A9,char &B1,char &B2,char &B3,char &B4,char &B5,char &B6,
            char &B7,char &B8,char &B9,char &C1,char &C2,char &C3,char &C4,char &C5,char &C6,
            char &C7,char &C8,char &C9,char &D1,char &D2,char &D3,char &D4,char &D5,char &D6,
            char &D7,char &D8,char &D9,char &E1,char &E2,char &E3,char &E4,char &E5,char &E6,
            char &E7,char &E8,char &E9,char &F1,char &F2,char &F3,char &F4,char &F5,char &F6,
            char &F7,char &F8,char &F9,char &G1,char &G2,char &G3,char &G4,char &G5,char &G6,
            char &G7,char &G8,char &G9,char &H1,char &H2,char &H3,char &H4,char &H5,char &H6,
            char &H7,char &H8,char &H9,char &I1,char &I2,char &I3,char &I4,char &I5,char &I6,
            char &I7,char &I8,char &I9) {

    if(boat==5){
        cout<<"YOU HAVE COMPLETED THE GAME!!"<<endl;
        ofstream outputFile;
        cout<<"Your final score was = "<<score-2<<endl;
        outputFile.open("score.dat");
        outputFile<<name<<" has a score of = "<<score-2<<endl;
       
        
        //closing file
        outputFile.close();
        cout<<"Yeet"<<endl;       
        exit(0);
    }
    
    if ((ship1==5)&&(!(ship1>5))){
        boat=+1;
        cout<<"You have sunk a ship!!"<<endl;
    }
    if (ship2==3){
        boat=+1;
        cout<<"You have sunk a ship!!"<<endl;
    }
    if (ship3==2){
        boat=+1;
        cout<<"You have sunk a ship!!"<<endl;
    }
    if (ship4==3){
        boat=+1;
        cout<<"You have sunk a ship!!"<<endl;
    }
    if (ship5==4){
        boat=+1;
        cout<<"You have sunk a ship!!"<<endl;
    }
    if (((ship1==5)&&(ship2==3))||((ship1==5)&&(ship3==2))||
            ((ship1==5)&&(ship4==3))||((ship1==5)&&(ship5==4))){
        boat=+2;
    }
    if (((ship1==5)&&(ship2==3)&&(ship3==2))||((ship1==5)&&(ship2==3)&&(ship4==3))||
            ((ship1==5)&&(ship2==3)&&(ship5==4))||((ship4==3)&&(ship2==3)&&(ship3==2))||
            ((ship5==4)&&(ship2==3)&&(ship3==2))||((ship1==5)&&(ship3==2)&&(ship4==3))||
            ((ship1==5)&&(ship5==4)&&(ship3==2))||((ship5==4)&&(ship4==3)&&(ship3==2))){
        boat=+3;
    }
    if (((ship1==5)&&(ship2==3)&&(ship3==2)&&(ship4==3))||((ship1==5)&&(ship2==3)&&(ship3==2)&&(ship5==4))||
            ((ship5==4)&&(ship2==3)&&(ship3==2)&&(ship4==3))||((ship1==5)&&(ship5==4)&&(ship3==2)&&(ship4==3))||
            ((ship1==5)&&(ship2==3)&&(ship5==4)&&(ship4==3))){
        boat=+4;
    }
    if ((ship1==5)&&(ship2==3)&&(ship3==2)&&(ship4==3)&&(ship5==4)){
        boat=+5;
    }
    
    //Right answers
    if ((chce1=='C'&&chce2==1)||(chce1=='c'&&chce2==1)){
        C1 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship1++;
    }
    if ((chce1=='D'&&chce2==1)||(chce1=='d'&&chce2==1)){
        D1 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship1++;
    }
    if ((chce1=='E'&&chce2==1)||(chce1=='e'&&chce2==1)){
        E1 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship1++;
    }
    if ((chce1=='F'&&chce2==1)||(chce1=='f'&&chce2==1)){
        F1 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship1++;
    }
    if ((chce1=='G'&&chce2==1)||(chce1=='g'&&chce2==1)){
        G1 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship1++;
    }
    if ((chce1=='B'&&chce2==2)||(chce1=='b'&&chce2==2)){
        B2 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship2++;
    }
    if ((chce1=='B'&&chce2==3)||(chce1=='b'&&chce2==3)){
        B3 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship2++;
    }
    if ((chce1=='E'&&chce2==3)||(chce1=='e'&&chce2==3)){
        E3 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship3++;
    }
    if ((chce1=='B'&&chce2==4)||(chce1=='b'&&chce2==4)){
        B4 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship2++;
    }
    if ((chce1=='E'&&chce2==4)||(chce1=='e'&&chce2==4)){
        E4 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship3++;
    }
    if ((chce1=='I'&&chce2==6)||(chce1=='i'&&chce2==6)){
        I6 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship4++;
    }
    if ((chce1=='I'&&chce2==7)||(chce1=='i'&&chce2==7)){
        I7 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship4++;
    }
    if ((chce1=='I'&&chce2==8)||(chce1=='i'&&chce2==8)){
        I8 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship4++;
    }
    if ((chce1=='B'&&chce2==9)||(chce1=='b'&&chce2==9)){
        B9 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship5++;
    }
    if ((chce1=='C'&&chce2==9)||(chce1=='c'&&chce2==9)){
        C9 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship5++;
    }
    if ((chce1=='D'&&chce2==9)||(chce1=='d'&&chce2==9)){
        D9 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship5++;
    }
    if ((chce1=='E'&&chce2==9)||(chce1=='e'&&chce2==9)){
        E9 = 'X';
        cout<<"That was a Hit!!"<<endl;
        ship5++;
    }
    
    //wrong answers
    //A column
    if ((chce1=='A'&&chce2==1)||(chce1=='a'&&chce2==1)){
        A1 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='A'&&chce2==2)||(chce1=='a'&&chce2==2)){
        A2 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='A'&&chce2==3)||(chce1=='a'&&chce2==3)){
        A3 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='A'&&chce2==4)||(chce1=='a'&&chce2==4)){
        A4 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='A'&&chce2==5)||(chce1=='a'&&chce2==5)){
        A5 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='A'&&chce2==6)||(chce1=='a'&&chce2==6)){
        A6 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='A'&&chce2==7)||(chce1=='a'&&chce2==7)){
        A7 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='A'&&chce2==8)||(chce1=='a'&&chce2==8)){
        A8 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='A'&&chce2==9)||(chce1=='a'&&chce2==9)){
        A9 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    //B column
    if ((chce1=='B'&&chce2==1)||(chce1=='b'&&chce2==1)){
        B1 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='B'&&chce2==5)||(chce1=='b'&&chce2==5)){
        B5 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='B'&&chce2==6)||(chce1=='b'&&chce2==6)){
        B6 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='B'&&chce2==7)||(chce1=='b'&&chce2==7)){
        B7 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='B'&&chce2==8)||(chce1=='b'&&chce2==8)){
        B8 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    //C column
    if ((chce1=='C'&&chce2==2)||(chce1=='c'&&chce2==2)){
        C2 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='C'&&chce2==3)||(chce1=='c'&&chce2==3)){
        C3 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='C'&&chce2==4)||(chce1=='c'&&chce2==4)){
        C4 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='C'&&chce2==5)||(chce1=='c'&&chce2==5)){
        C5 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='C'&&chce2==6)||(chce1=='c'&&chce2==6)){
        C6 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='C'&&chce2==7)||(chce1=='c'&&chce2==7)){
        C7 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='C'&&chce2==8)||(chce1=='c'&&chce2==8)){
        C8 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    //D column
    if ((chce1=='D'&&chce2==2)||(chce1=='d'&&chce2==2)){
        D2 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='D'&&chce2==3)||(chce1=='d'&&chce2==3)){
        D3 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='D'&&chce2==4)||(chce1=='d'&&chce2==4)){
        D4 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='D'&&chce2==5)||(chce1=='d'&&chce2==5)){
        D5 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='D'&&chce2==6)||(chce1=='d'&&chce2==6)){
        D6 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='D'&&chce2==7)||(chce1=='d'&&chce2==7)){
        D7 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='D'&&chce2==8)||(chce1=='d'&&chce2==8)){
        D8 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    //E column
    if ((chce1=='E'&&chce2==2)||(chce1=='e'&&chce2==2)){
        E2 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='E'&&chce2==5)||(chce1=='e'&&chce2==5)){
        E5 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='E'&&chce2==6)||(chce1=='e'&&chce2==6)){
        E6 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='E'&&chce2==7)||(chce1=='e'&&chce2==7)){
        E7 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='E'&&chce2==8)||(chce1=='e'&&chce2==8)){
        E8 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    //F column
    if ((chce1=='F'&&chce2==2)||(chce1=='f'&&chce2==2)){
        F2 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='F'&&chce2==3)||(chce1=='f'&&chce2==3)){
        F3 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='F'&&chce2==4)||(chce1=='f'&&chce2==4)){
        F4 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='F'&&chce2==5)||(chce1=='f'&&chce2==5)){
        F5 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='F'&&chce2==6)||(chce1=='f'&&chce2==6)){
        F6 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='F'&&chce2==7)||(chce1=='f'&&chce2==7)){
        F7 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='F'&&chce2==8)||(chce1=='f'&&chce2==8)){
        F8 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='F'&&chce2==9)||(chce1=='f'&&chce2==9)){
        F9 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    //G column
    if ((chce1=='G'&&chce2==2)||(chce1=='g'&&chce2==2)){
        G2 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='G'&&chce2==3)||(chce1=='g'&&chce2==3)){
        G3 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='G'&&chce2==4)||(chce1=='g'&&chce2==4)){
        G4 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='G'&&chce2==5)||(chce1=='g'&&chce2==5)){
        G5 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='G'&&chce2==6)||(chce1=='g'&&chce2==6)){
        G6 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='G'&&chce2==7)||(chce1=='g'&&chce2==7)){
        G7 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='G'&&chce2==8)||(chce1=='g'&&chce2==8)){
        G8 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='G'&&chce2==9)||(chce1=='g'&&chce2==9)){
        G9 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    //H column
    if ((chce1=='H'&&chce2==1)||(chce1=='h'&&chce2==1)){
        H1 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='H'&&chce2==2)||(chce1=='h'&&chce2==2)){
        H2 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='H'&&chce2==3)||(chce1=='h'&&chce2==3)){
        H3 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='H'&&chce2==4)||(chce1=='h'&&chce2==4)){
        H4 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='H'&&chce2==5)||(chce1=='h'&&chce2==5)){
        H5 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='H'&&chce2==6)||(chce1=='h'&&chce2==6)){
        H6 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='H'&&chce2==7)||(chce1=='h'&&chce2==7)){
        H7 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='H'&&chce2==8)||(chce1=='h'&&chce2==8)){
        H8 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='H'&&chce2==9)||(chce1=='h'&&chce2==9)){
        H9 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    //I column
    if ((chce1=='I'&&chce2==1)||(chce1=='i'&&chce2==1)){
        I1 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='I'&&chce2==2)||(chce1=='i'&&chce2==2)){
        I2 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='I'&&chce2==3)||(chce1=='i'&&chce2==3)){
        I3 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='I'&&chce2==4)||(chce1=='i'&&chce2==4)){
        I4 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='I'&&chce2==5)||(chce1=='i'&&chce2==5)){
        I5 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    if ((chce1=='I'&&chce2==9)||(chce1=='i'&&chce2==9)){
        I9 = '-';
        cout<<"You have missed!!"<<endl;
        score++;
    }
    else if(!(chce1=='A'||chce1=='B'||chce1=='C'||chce1=='D'||chce1=='E'||chce1=='F'||chce1=='G'||chce1=='H'||chce1=='I'||chce1=='a'||chce1=='b'||chce1=='c'||chce1=='d'||chce1=='e'||chce1=='f'||chce1=='g'||chce1=='h'||chce1=='i')){
        cout<<"Not a valid input"<<endl;
        cout<<"I'm still giving you a point for that"<<endl;
        score++;
    }
    
}