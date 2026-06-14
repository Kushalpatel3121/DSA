/*
Problem Statement: Given an integer N return the reverse of the given number.
- Note: If a number has trailing zeros, then its reverse will not include them. For e.g , reverse of 10400 will be 401 instead of 00401.
*/

#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int N){
    int rev_num = 0;
    while(N!=0){
        int n = N%10;
        rev_num = rev_num * 10 + n;
        N = N/10;
    }
    return rev_num;
}

int main(){
    int N;
    cout<<"Enter an integer: ";
    cin>>N;
    cout<<"Reverse of "<<N<<" is: "<< reverseNumber(N)<<endl;
} 