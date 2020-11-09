/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 6, 2020, 11:36 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>


using namespace std;

void solve(string ip, string op, vector<string>& result){
    if(ip.length()==0){
        result.push_back(op);
        return;
    }
    
    string op1=op;
    string op2=op;
    
    op1.push_back('_');
    op1.push_back(ip[0]);
    
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    
    solve(ip, op1, result);
    solve(ip, op2, result);
}

/*
 * 
 */
int main(int argc, char** argv) {

    string ip;
    vector<string> result; 
    cout <<"Enter the string : ";
    cin >> ip;
    
    string op;
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    
    solve(ip,op,result);
    vector<string>::iterator  it;
    for(it = result.begin();it<result.end();it++){
        cout << *it<<"\t";
    }
    return 0;
}

