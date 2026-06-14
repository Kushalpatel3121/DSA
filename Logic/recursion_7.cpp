/*
Problem Statement: Given a string, check if the string is palindrome or not. 
- A string is said to be palindrome if the reverse of the string is the same as the string.
*/
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int i, int j){
    if(j<=i) return true;
    if(str[i] != str[j]) return false;
    return isPalindrome(str, i+1, j-1);
}

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    if(isPalindrome(str, 0, str.length()-1)){
        cout << str << " is a Palindrome"<<endl;
    } else {
        cout<< str <<" is not a Palindrome"<<endl;
    }
    return 0;
}