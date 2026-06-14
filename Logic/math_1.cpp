/*
    PROBLEM STATEMENT: Given an integer N, return the number of digits in N.
*/

#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
int countDigits(int N){
    int count = 0;
    while(N!=0){
        N = N/10;
        count++;
    }
    return count;

}

// Optimal Approach
// Log10(N) + 1 will give the number of digits in N
int countDigits2(int N){
    return (int)(log10(N)+1);   // Add 1 toaccount for thecase that the number itself is a power of 10;
}

int main(){
    int N;
    cout<<"Enter an integer: ";
    cin>>N;
    cout<<"Number of digits in "<<N<<" is: "<<countDigits2(N)<<endl;
}