/*
Problem Description: Given an integer N, write a program to print numbers from N to 1.
*/
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n<1){
        return;
    }
    cout<<n<<" ";
    print(n-1);
}
int main(){
    cout<<"Enter the number N:\n";
    int N;
    cin>>N;

    print(N);

}
/*
Time Complexity : O(N)
Space Complexity : O(N)
*/