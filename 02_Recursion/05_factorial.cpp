// Problem Statement: Given a number X,  print its factorial.

#include<bits/stdc++.h>
using namespace std;

int fact(int x){
    if(x<1){
        return 1;
    }
    return (x * fact(x-1));
}
int main(){
    cout<<"Enter The Number X:\n";
    int X;
    cin>>X;

    cout<<"The factorial of "<<X<<" is : "<<fact(X);
}
/*
Time Complexity : O(N)
Space Complexity : O(N)
*/