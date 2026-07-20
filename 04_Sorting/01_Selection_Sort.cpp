// Problem Statement: Given an array of N integers, write a program to implement the Selection sorting algorithm.

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
    
    int min;
    for(int i=0;i<N-1;i++){
        min = i;
        for(int j=i+1;j<N;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
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