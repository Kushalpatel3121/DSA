/*
Problem Description: Given an integer N, write a program to print numbers from 1 to N.
*/

#include<bits/stdc++.h>
using namespace std;

void printNumbers(int current, int N){
    if(current > N) return;
    cout<<current<<endl;
    printNumbers(current+1, N);
}

int main(){
    int N;
    cout<<"Enter an Integer: ";
    cin>>N;
    printNumbers(1, N);
}