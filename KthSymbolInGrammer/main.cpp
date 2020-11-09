/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 7, 2020, 9:09 PM
 */

#include <cstdlib>
#include <math.h>
#include <iostream>
using namespace std;


int solve( int n, int k){
    if(n==1 && k==1){
        return 0;
    }
    int mid = pow(2, n-1)/2;
    if(k<= mid){
        return solve(n-1,k);
    }
    if(k>mid){
        return !solve(n-1, k-mid);
    }
}

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Answer : " <<solve(5,3);
    return 0;
}

