// Problem Statement: Given an array of n integers, write a program to implement the Recursive Bubble Sort algorithm.

#include<bits/stdc++.h>
using namespace std;

void recursive_Bubble_Sort(vector<int> &a, int high){
    bool swapped = false;
    if(high<=0)
        return;

    for(int i = 0 ; i < high ; i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
            swapped = true;
        }
    }
    if(!swapped){
        return;
    }
    recursive_Bubble_Sort(a, high-1);
}

int main(){
    cout << "Enter The Number of Elements: ";
    int n;
    cin >> n;

    cout << "Enter the array :\n";
    vector<int> a(n);

    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    
    cout << "The Sorted Array is : ";
    recursive_Bubble_Sort(a, n-1);
    for(int i=0 ; i<n ; i++){
        cout << a[i] << " ";
    }
}
/*
Time Complexity : O(N^2) -> Worst Case
                : O(N^2) -> Average Case
                : O(N) -> Best Case

Space Complexity : O(N)

Where N is the number of elements in the array.
*/