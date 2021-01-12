/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 6, 2020, 11:51 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */

void solve(int openBracketCount, int closedBracketCount, string op, vector<string>& result){
    if( openBracketCount==0 && closedBracketCount==0){
        result.push_back(op);
        return;
    }
    
    if (openBracketCount!=0){
        string op1 = op;
        op1.push_back('(');
        solve(openBracketCount-1, closedBracketCount, op1, result);
    }
    if( closedBracketCount > openBracketCount){
        string op1=op;
        op1.push_back(')');
        solve(openBracketCount, closedBracketCount-1, op1, result);
    }
}

int main(int argc, char** argv) {
    vector<string> result;
    int n;
    cout << "Number of brackets to use : ";
    cin >>n;
    string op="";
    solve(n,n,op, result);
    
    cout <<endl <<"Possible matching parenthesis combination is : " <<endl;
    vector<string>::iterator it;
    for(it = result.begin(); it!= result.end();it++){
        cout << *it <<"\t";
    }
    return 0;
}

