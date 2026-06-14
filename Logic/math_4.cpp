/*
Problem Statement: Given two integers N1 and N2, find their greatest common divisor.
*/

#include<bits/stdc++.h>
using namespace std;

int findGCD(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        } else {
            b = b%a;
        }
    }
    if(a==0) return b;
    return a;
}

int main(){
    int N1, N2;
    cout<<"Enter N1: ";
    cin>>N1;
    cout<<"Enter N2: ";
    cin>>N2;
    cout<<"GCD of "<<N1<<" and "<<N2<<" is: "<<findGCD(N1,N2)<<endl;
}