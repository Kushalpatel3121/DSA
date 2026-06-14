/*
Problem Statement: Given a number ‘N’, find out the sum of the first N natural numbers .
*/

#include<bits/stdc++.h>
using namespace std;

int findSum(int N){
    if(N==1) return 1;
    return N + findSum(N-1);
}

int main(){
    int N;
    cout<<"Enter an Integer: ";
    cin>>N;
    cout<<"The sum of first "<<N<<" natural numbers is "<<findSum(N)<<endl;
    return 0;
}