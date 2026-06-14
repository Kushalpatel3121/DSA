/*
Problem Statement: Given an integer N, check whether it is prime or not. 
- A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.
*/

#include<bits/stdc++.h>
using namespace std;

string isPrime(int N){
    int cnt = 0;
    for(int i=1; i<=sqrt(N); i++){
        if(N%i==0){
            cnt++;
            if(N/i != i){
                cnt++;
            }
        }
    }
    if(cnt>2) return "composite";
    return "prime";
}

int main(){
    int N;
    cout<<"Enter and Integer: ";
    cin>>N;
    cout<<"The number "<< N <<" is "<< isPrime(N)<<endl;
}