/*
Problem Statement: Given a number X,  print its factorial.
- To obtain the factorial of a number, it has to be multiplied by all the whole numbers preceding it. More precisely X! = X*(X-1)*(X-2) … 1.- Note: X  is always a positive number. 
*/

#include<bits/stdc++.h>
using namespace std;

int findFactorial(int N){
    if(N==1) return 1;
    return N * findFactorial(N-1);
}

int main(){
    int N;
    cout<<"Enter an Integer: ";
    cin>>N;
    cout<<"Factorial of "<<N<<" is "<<findFactorial(N)<<endl;
    return 0;
}