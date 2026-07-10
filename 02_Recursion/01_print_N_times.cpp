/*
Problem Description: Given an integer N, write a program to print yout Name N times Using Recursion.
*/

#include<bits/stdc++.h>
using namespace std;
void print(string name, int n){
    if(n<1){
        return;
    }
    cout<<name<<" ";
    print(name,n-1);
}
int main()
{
    cout<<"Enter Your Name:\n";
    string name;
    getline(cin,name);
    
    cout<<"Enter The Number N:\n";
    int N;
    cin>>N;

    print(name,N);
    return 0;
}

/*
Time Complexity : O(N)
Space Complexity : O(N)
*/