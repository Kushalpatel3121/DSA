/*
Problem Statement: Given an integer N, return all divisors of N.
- A divisor of an integer N is a positive integer that divides N without leaving a remainder.
- In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> getAllDivisors(int N){
    vector<int> res;
    for(int i=1; i<= sqrt(N); i++){
        if(N%i == 0){
            res.push_back(i);
            if(N/i != i){
                res.push_back(N/i);
            }
        }
    }
    return res;
}

int main(){
    int N;
    cout<<"Enter an integer: ";
    cin>>N;
    cout<<"The divisors of "<<N<<" are: [";
    vector<int> divisors = getAllDivisors(N);
    for(auto it=divisors.begin(); it!= divisors.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<"]"<<endl;
}