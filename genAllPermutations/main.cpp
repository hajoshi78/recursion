/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 7, 2020, 9:40 PM
 */

#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

void genPermutations( string ip, string op, vector<string>& result){
    if(ip.length() == 0){
        result.push_back(op);
        return;
    } 
    for( int i =0;i< ip.length();i++){
        string op1 = op + ip[i];
        string ip1 = ip.substr(0, i) + ip.substr(i+1);
        genPermutations(ip1, op1, result);
    }
}

/*
 * 
 */
int main(int argc, char** argv) {
    cout <<"Enter the String for generating Permutations : " ;
    string input="";
    string output="" ;
    cin >> input;
    vector<string> result ;
    vector<string>::iterator it;
    genPermutations(input, output, result);
    
    for(it = result.begin(); it < result.end();it++){
        cout << *it<<"\t";
    }
    cout <<" \n Number of Permutation is " << result.size();
    return 0;
}

