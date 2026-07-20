// Problem Statement: Given an array of N integers, write a program to implement the Bubble Sorting algorithm.

#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the Number of Elements : \n";
    int N;
    cin>>N;

    cout<<"Enter the Elements : \n";
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    
    cout<<"The Sorted Elements are :\n";
    
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
}
/*
Time Complexity : O(N^2)
Space Complexity : O(1)

Where N is the number of elements in the array
*/