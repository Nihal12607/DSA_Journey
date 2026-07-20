// Problem Statement: Given an array of N integers, write a program to implement the Recursive Insertion Sort algorithm.

#include<bits/stdc++.h>
using namespace std;

void recursive_Insertion_Sort(vector<int> &a, int i, int end){
    if(i>end)
        return;
    
    int j = i;
    while(j>0 && a[j-1]>a[j]){
        swap(a[j-1],a[j]);
        j--;
    }

    recursive_Insertion_Sort(a,i+1,end);
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
    recursive_Insertion_Sort(a, 1, n-1);
    for(int i=0 ; i<n ; i++){
        cout << a[i] << " ";
    }
}

/*
Time Complexity : O(N^2) (Worst Case)
Time Complexity : O(N^2) (Average Case)
Time Complexity : O(N) (Best Case)

Space Complexity : O(N) (Recursion stack)

Where N is the Number of elements in the array.
*/