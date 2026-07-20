// Problem Statement: Given an array of N integers, write a program to implement the Insertion sorting algorithm.

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

    for(int i=1;i<N;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    cout<<"The Sorted Elements are :\n";
    
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
}
/*
Time Complexity : O(N^2) (Worst Case)
Time Complexity : O(N^2) (Average Case)
Time Complexity : O(N) (Best Case)

Space Complexity : O(1)

Where N is the number of elements in the array
*/