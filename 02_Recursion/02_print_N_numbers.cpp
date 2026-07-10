// Problem Description: Given an integer N, write a program to print numbers from 1 to N.

#include<bits/stdc++.h>
using namespace std;
void print(int c,int n){
    if(c>n){
        return;
    }
    cout<<c<<" ";
    print(c+1,n);
}
int main()
{    
    cout<<"Enter The Number N:\n";
    int N;
    cin>>N;

    print(1,N);
    return 0;
}

/*
Time Complexity : O(N)
Space Complexity : O(N)
*/