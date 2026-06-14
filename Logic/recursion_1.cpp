/*
Problem Description: Given an integer N, write a program to print your name N times.
*/

#include<bits/stdc++.h>
using namespace std;

void printName(string name, int N){
    if(N==0) return;
    cout<<name<<endl;
    N = N-1;
    printName(name, N);
}

int main(){
    int N;
    string name;
    cout<<"Enter an Integer: ";
    cin>>N;
    cout<<"Enter your Name: ";
    cin>>name;
    printName(name, N);
}