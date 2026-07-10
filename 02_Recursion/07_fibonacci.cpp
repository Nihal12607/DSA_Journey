// Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    cout<<"Enter the numbe of terms of the series needed:\n";
    int N;
    cin>>N;

    for(int i=0;i<=N;i++){
        cout<<fib(i)<<" ";
    }

}
/*
Time Complexity : O(2^N)
Space Complexity : O(N)
*/