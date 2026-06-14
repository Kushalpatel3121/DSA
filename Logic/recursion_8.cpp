/*
Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.
*/

#include<bits/stdc++.h>
using namespace std;

int printFibonacciSeries(int N){
    if(N <= 1){
        return N;
    }
    int last = printFibonacciSeries(N-1);
    int slast = printFibonacciSeries(N-2);
    return last + slast;
}

int main(){
    int N;
    cout<<"Enter an integer: ";
    cin>>N;
    cout<<N<<"th term: ";
    cout<<printFibonacciSeries(N);
    cout<<endl;
    return 0;
}