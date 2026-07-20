// Problem Statement: Given an array of size n, sort the array using Merge Sort.

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a,int l,int m, int h){
    int left = l, right = m+1;
    vector<int> temp;
   
    while(left<=m && right<=h){
        if(a[left] <= a[right]){
            temp.push_back(a[left++]);
            
        }
        else{
            temp.push_back(a[right++]);
        }
    }
    while(left<=m){
        temp.push_back(a[left++]);
    }
    while(right<=h){
        temp.push_back(a[right++]);
    }
    for(int i=l;i<=h;i++){
        a[i] = temp[i-l]; 
    }

}

void merge_sort(vector<int> &a,int low,int high){
    if(low>=high)
    return ;
    
        int mid = low + (high-low)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        
        merge(a,low,mid,high);
    }
    
int main(){
    int n;
    cout<<"Enter the Number of Elements:\n";
    cin>>n;

    vector<int> a(n);
    cout<<"Enter the Array:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"The Sorted Array is:\n";
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}

/*
Time Complexity : O(N x log(N))
Space Complexity : O(N)

Where N is the Number of elements in the array.
*/