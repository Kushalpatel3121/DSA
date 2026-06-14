/*
Problem Statement:Given an integer N, return true it is an Armstrong number otherwise return false.
- An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
*/

#include<bits/stdc++.h>
using namespace std;

string isArmstrong(int n){
    int sum = 0;
    int n1 = n;
    int cnt = 0;
    while(n1!=0){
        cnt++;
        n1 = n1/10;
    }
    int n2 = n;
    while(n2!=0){
        int d = n2%10;
        sum = sum + (pow(d,cnt));
        n2 = n2/10;
    }
    if(sum == n) return "Armstrong";
    return "not Armstrong";
}

int main(){
    int N;
    cout<<"Enter an integer: ";
    cin>>N;
    cout<<"Number "<< N<<" is "<<isArmstrong(N)<<endl;
}