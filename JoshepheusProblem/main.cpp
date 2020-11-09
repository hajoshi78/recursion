/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on November 7, 2020, 4:29 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

void solve(vector<int> v,int currIndex, int k, int& position ){
    if(v.size()==1){
        position = v[0];
        return;
    }
    currIndex = (currIndex +k)% v.size();
    v.erase(v.begin()+currIndex);
    solve(v,currIndex, k, position);
    
}
/*
 * 
 */
int main(int argc, char** argv) {
    int n,k;
    vector<int> persons;
    int lastPosWherePersonWillBeSaved=0;
    cout << "Enter number of the people in the ring ";
    cin >> n;
    for(int i=0;i<n;i++){
        persons.push_back(i);
    }
    cout  << "\nEnter the order in which the persons should be killed ";
    cin >> k;
    
    solve(persons, 0, k--,lastPosWherePersonWillBeSaved);
    cout << "\nLast Person Alive is at Index (starting at 0) : " <<lastPosWherePersonWillBeSaved;
    
    return 0;
}

