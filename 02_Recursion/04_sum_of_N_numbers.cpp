/*
Problem Statement: Given a number ‘N’, find out the sum of the first N natural numbers .
*/

#include<bits/stdc++.h>
using namespace std;

int print(int n){
    if(n<1){
        return 0;
    }
    return (n + print(n-1));
}

int main(){
    cout<<"Enter the number N:\n";
    int N;
    cin>>N;

    cout<<"The Sum of first N Natural Numbers is : "<<print(N);

}

/*
Time Complexity : O(N)
Space Complexity : O(N)
*/