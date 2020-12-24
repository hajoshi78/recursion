/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on December 24, 2020, 11:04 PM
 */

#include <cstdlib>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void printMove(int diskNum, int srcPole, int destPole, int &numOfMoves){
    numOfMoves++;
    cout<<endl<<"Move Num " << numOfMoves<<"  Moving disk num "<< diskNum<<" From pole "<< srcPole<< " To Pole " << destPole;
}


void towerOfHanoi(int numOfDisks, int srcPole, int destPole, int helperPole, int &numOfMoves){
    if( numOfDisks == 1){
        printMove( numOfDisks, srcPole, destPole, numOfMoves);
        return;
    }
    towerOfHanoi(numOfDisks-1, srcPole,helperPole, destPole, numOfMoves);
    printMove(numOfDisks, srcPole, destPole, numOfMoves);
    towerOfHanoi(numOfDisks-1, helperPole, destPole, srcPole, numOfMoves);
    return;
}
/*
 * 
 */
int main(int argc, char** argv) {
    int srcPole =1;
    int destPole=2;
    int helperPole = 3;
    int numOfDisks = 5;
    int numOfMoves = 0;
    towerOfHanoi(numOfDisks, srcPole, destPole, helperPole, numOfMoves);
    cout <<endl<< "Total Number of Moves : "<< numOfMoves;
    return 0;
}

