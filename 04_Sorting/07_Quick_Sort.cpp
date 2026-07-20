// Problem Statement: Given an array of n integers, sort the array using the Quicksort method.

#include<bits/stdc++.h>
using namespace std;

void quick_sort(vector<int> &a, int low, int high){
    if(low>=high){
        return;
    }
    int pivot = low, i = low, j = high;
    while(i < j){
        while(a[i]<=a[pivot] && i<high){
            i++;
        }
        while(a[j]>a[pivot] && j>low){
            j--;
        }
        if(i<j){
            swap(a[i],a[j]);
        }
    }
    swap(a[pivot],a[j]);
    quick_sort(a,low,j-1);
    quick_sort(a,j+1,high);

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
    quick_sort(a,0,n-1);
    for(int i=0 ; i<n ; i++){
        cout << a[i] << " ";
    }
}
/*
Time Complexity : O(N x log(N)) (Best and Average)
                : O(N^2) (Worst Case)

Space Complexity : O(1) [Excluding The Recursive Stack]
*/