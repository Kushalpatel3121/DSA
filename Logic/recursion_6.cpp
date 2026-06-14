/*
Problem Statement: You are given an array. The task is to reverse the array and print it.
*/

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int i, int j){
    if(j<i) return;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    reverseArray(arr, i+1, j-1);
}

int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverseArray(arr, 0, n-1);
    cout<<"Reversed Array: [";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}