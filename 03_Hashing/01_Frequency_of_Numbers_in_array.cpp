//Problem Statement: Given an array, we have found the number of occurrences of each element in the array.

#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, int> mp;

    cout<<"Enter the No.of.Elements\n";
    int n;
    cin>>n;

    cout<<"Enter the Elements\n";

    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        //Pre-Compute
        mp[num]++;
    }
    cout<<"The Frequecies of each Element is:\n";
    for(auto it : mp){
        //fetching
        cout<<it.first <<" -> "<<it.second<<"\n";
    }
}
/*
Time Complexity : O(N)
Space Complexity: O(N)

Where N number of elements
*/