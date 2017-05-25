/* 
 * File:   main.cpp
 * Author: Nicholas Lopez
 * Created on 03/28/17 10:42AM
 * Purpose:  Project 2  ex Implement Pointers
 */

//System Libraries Here
#include <iostream>
#include <ctime>    //Time to set the seed
#include <cstdlib>  //srand and rand function
#include <fstream>  //File I/O
#include <iomanip>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float PERCENT=100;

//Function Prototypes Here
char rollDie(int);                                          //Roll the dice
void fileDsp(ofstream &, int *, int *, int, int, int, int); //File Display
void scrnDsp(int *, int *, int, int, int, int);             //Screen Display
void crpGame(int *, int *, int, int, int, int);             //Play Craps

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare file and game variables
    ifstream in;                                //Input file
    ofstream out;                               //Output file
    int nGames;                                 //Number of games, wins/losses
    int SIZE = 13;                              //Size the arrays
    int mxThrw=0,numThrw=0,gmThrw=0,nThrw=0;    //Game limiter
    int *wins=new int[SIZE];                    //Allocate Memory
    int *losses=new int[SIZE];                  //Allocate memory

    
    //Initialize variables
    in.open("GameInfo.dat");                    //Open the input file
    out.open("GameInfo.dat");                   //Open the output file
    while(in>>nGames);                          //Last value in file becomes number of games
     nGames=10000;                              //Limit games
    
     int beg=time(0);                           //Time the game play
    crpGame(wins, losses, SIZE, nGames, nThrw, mxThrw);
    int end=time(0);                            //End time of game play
    
    //Output Located Here
    cout<<"Time to complete = "<<end-beg<<endl;
    scrnDsp(wins,losses,SIZE,nGames,nThrw,mxThrw);
    
    out<<"Time to complete = "<<end-beg<<endl;
    fileDsp(out,wins,losses,SIZE,nGames,nThrw,mxThrw);
    
    //Close files
    in.close();
    out.close();
    
    //Deallocate memory
    delete []wins;     //Delete wins
    delete []losses;   //Delete losses
    
    //Exit
    return 0;
}

void crpGame(int *wins, int *losses, int SIZE, int nGames, int nThrw, int mxThrw){
    //Play the Game
    for(int game=1;game<=nGames;game++){ 
        //Throw dice and sum
        int gmThrw=1;
        char sum1=rollDie(6);
         
        
     switch(sum1){
         case  7:
         case 11:(*(wins+sum1))++;break;
         case  2:
         case  3:
         case 12:(*(losses+sum1))++;break;
         default:{
  
             bool thrwAgn=true;
             do{
                char sum2=rollDie(6);
                gmThrw++;
                if(sum2==7){
                    (*(losses+sum1))++;
                    thrwAgn=false;
                }else if(sum1==sum2){
                    (*(wins+sum1))++;
                    thrwAgn=false;
                }
             }while (thrwAgn);
           }
        }
     nThrw+=gmThrw;
     if(mxThrw<gmThrw)mxThrw=gmThrw;
    }
}

void fileDsp(ofstream &out,int *wins, int *losses, int SIZE, int nGames, int nThrw, int mxThrw){
    cout<<"--------------------------------------"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Total number of Games        = "<<nGames<<endl;
    cout<<"  Roll     Wins    Losses"<<endl;
    int sWins=0,sLosses=0;
    for(int sum=2;sum<SIZE;sum++){

        out<<setw(4)<<sum<<setw(10)<<wins[sum]<<setw(10)<<losses[sum]<<endl;
    }
    out<<"Total wins and losses        = "<<sWins+sLosses<<endl; 
    out<<"Percentage wins              = "
            <<static_cast<float>(sWins)/nGames*PERCENT<<"%"<<endl;
    out<<"Percentage losses            = "
            <<static_cast<float>(sLosses)/nGames*PERCENT<<"%"<<endl;
    out<<"Max # of throws in a game    = "<<mxThrw<<endl;
    out<<"Average # of throws per game = "<<static_cast<float>(nThrw)/nGames<<endl;

}

void scrnDsp(int *wins, int *losses, int SIZE, int nGames, int nThrw, int mxThrw){
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Total number of Games        = "<<nGames<<endl;
    cout<<"  Roll     Wins    Losses"<<endl;
    int sWins=0,sLosses=0;
    for(int sum=2;sum<SIZE;sum++){
        sWins+=wins[sum];
        sLosses+=(*(losses+sum));
        cout<<setw(4)<<sum<<setw(10)<<(*(wins+sum))<<setw(10)<<(*(losses+sum))<<endl;
    }
    cout<<"Total wins and losses        = "<<sWins+sLosses<<endl; 
    cout<<"Percentage wins              = "
            <<static_cast<float>(sWins)/nGames*PERCENT<<"%"<<endl;
    cout<<"Percentage losses            = "
            <<static_cast<float>(sLosses)/nGames*PERCENT<<"%"<<endl;
    cout<<"Max # of throws in a game    = "<<mxThrw<<endl;
    cout<<"Average # of throws per game = "<<static_cast<float>(nThrw)/nGames<<endl;

}

char rollDie(int sides){
    char die1=rand()%sides+1; //[1,number of sides]
    char die2=rand()%sides+1;//[1,number of sides]
    char sum1=die1+die2;
    return sum1;
}

