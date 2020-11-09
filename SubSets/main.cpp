/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 7, 2020, 11:20 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>
using namespace std;


void generateSubsets(string ip, string op, vector<string>& results){
    if(ip.length()==0){
        results.push_back(op);
        return;
    }
    string op1= op;
    string op2= op;
    op1 = op + ip[0];
    ip.erase(ip.begin()+0);
    generateSubsets(ip,op1,results);
    generateSubsets(ip,op2, results);
}

int main(int argc, char** argv) {

    string ip="";
    string op="";
    
    cout << "Enter the string  for subset generation";
    cin>>ip;
    vector<string> result;
    vector<string>::iterator it;
    
    generateSubsets(ip, op, result);
    for(it = result.begin(); it!=result.end();it++){
        cout <<"{"<<*it<<"}"<<"\t";
    }
    return 0;
}

