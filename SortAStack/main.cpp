/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on December 24, 2020, 7:00 PM
 */

#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;


void insert( stack<int> &st, int temp){
    if( st.size()==0 || st.top()<= temp){
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
}

void sort(stack<int>& st){
    if(st.size()==1){
        return;
    }
    int temp = st.top();
    st.pop();
    sort(st);
    insert(st,temp);
}

/*
 * 
 */
int main(int argc, char** argv) {
    stack<int> st;
    st.push(2);
    st.push(1);
    st.push(5);
    st.push(3);
    st.push(10);
    st.push(13);
    st.push(1);
    sort(st);
    cout <<endl<<"Sorted Stack (Descending Order: "<<endl;
    while(!st.empty()){
        cout <<st.top()<<"\t";
        st.pop();
    }
    return 0;
}

