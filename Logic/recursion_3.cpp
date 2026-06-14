/*
Problem Description: Given an integer N, write a program to print numbers from N to 1.
*/

#include<bits/stdc++.h>
using namespace std;

void printNumbers(int N){
    if(N==0) return;
    cout<<N<<endl;
    N = N - 1;
    printNumbers(N);
}

int main(){
    int N;
    cout<<"Enter and Integer: ";
    cin>>N;
    printNumbers(N);
}