/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 7, 2020, 12:36 AM
 */

#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

/*
 * 
 */

void solve(int onesCount, int zerosCount, int n, string op, vector<string>& result){
    if(n==0){
        result.push_back(op);
        return;
    }
    string op1 = op;
    op1.push_back('1');
    solve(onesCount+1, zerosCount, n-1, op1,result);
    
    if(onesCount > zerosCount){
        string op2 = op;
        op2.push_back('0');
        solve( onesCount, zerosCount+1, n-1, op2, result);
    }
    return;
}
int main(int argc, char** argv) {
    vector<string> result;
    vector<string>::iterator it;
    int n=0;
    string op="";
    int onesCount = 0;
    int zerosCount = 0;
    cout << "Enter the number of the bits in the number " ;
    cin >> n;
    cout << endl<<" Possible prefixes with #1 > #0's is :";
    solve( 0,0,n, op, result);
    for( it = result.begin();it!= result.end();it++){
        cout <<*it<<"\t";
    }
           
    return 0;
}

