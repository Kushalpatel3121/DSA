/*
Problem Statement: Given an integer N, return true if it is a palindrome else return false.
- A palindrome is a number that reads the same backward as forward. 
- For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.
*/

#include<bits/stdc++.h>
using namespace std;

string isPalindrome(int N){
    int rev_num = 0;
    int N1 = N;
    while(N1 != 0){
        int n = N1%10;
        rev_num = rev_num * 10 + n;
        N1 = N1/10;
    }
    if(N == rev_num) return "Palindrome";
    else return "not Palindrome";
}

int main(){
    int N;
    cout<<"Enter an integer: ";
    cin>>N;
    cout<<"The number "<<N<<" is: "<< isPalindrome(N)<<endl;
}