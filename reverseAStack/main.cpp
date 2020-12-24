/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: harsh
 *
 * Created on December 24, 2020, 8:18 PM
 */

#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;


void insertAtEnd(stack<int> &st, int temp){
    if(st.size()==0){
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insertAtEnd(st, temp);
    st.push(val);
    return;
}

void reverse(stack<int> &st){
    if(st.size()==1){
        return;
    }
    int temp = st.top();
    st.pop();
    reverse(st);
    insertAtEnd(st, temp);
    return;
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
    reverse(st);
    cout<<"After reversing the stack .. stack now looks like :";
    while(!st.empty()){
        cout <<st.top()<<"\t";
        st.pop();
    }
    return 0;
}

