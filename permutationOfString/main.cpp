/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsha
 *
 * Created on 1 December, 2019, 10:57 AM
 */

using namespace std;
#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>


void getPermutations(string fixed, string unfixed, vector<string>& vecOfPermutations){
   
    if(unfixed.length()==0){
        //To avoid duplicate
        bool dupFound = false;
        vector<string>::iterator j;
        for(j=vecOfPermutations.begin();j!=vecOfPermutations.end();j++){
            cout <<"fixed : " <<fixed<< "  *j  :" <<*j<<endl;
            if(fixed.compare(*j)==0){
                dupFound = true;
                break;
            }
        }
        if(!dupFound){
            vecOfPermutations.push_back(fixed);
        }
        return;
    }
    else{
        for(int i=0; i<unfixed.length();i++){
            string _fixed = fixed + unfixed[i];
            string _unfixed = unfixed.substr(0,i) + unfixed.substr(i+1);
            getPermutations(_fixed, _unfixed,vecOfPermutations);
        }
    }
}

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout <<"Enter the string :";
    string input;
    cin >> input;
    vector<string> permutations;
    
    for(int j=0;j< input.length();j++){
        string newStr = input.substr(0,j);
        cout <<"New Substr is " << newStr <<endl;
        cout << "Permutations ===> "<<endl;
        cout << "********************* "<<endl;
        getPermutations("",newStr,permutations);
        cout << "********************* "<<endl;
    }
    
    
    
    vector<string>::iterator  i;
    for(i= permutations.begin();i!=permutations.end();i++){
        cout << (*i) <<endl;
    }
    return 0;
}

