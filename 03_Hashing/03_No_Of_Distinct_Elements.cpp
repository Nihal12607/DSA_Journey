// Problem Statement : Given an array of integers, find how many distinct elements are present.

#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> st;

    cout<<"Enter the No.of.Elements\n";
    int n;
    cin>>n;

    cout<<"Enter the Elements\n";

    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        st.insert(num);
    }
    cout<<"The No.Of.Distinct Elements are : "<<st.size()<<"\n";
}
/*
Time Complexity : O(N) Average Case
                  O(N^2) Worst Case
Space Complexity : O(N)

Where N is the no.of.elements
*/