//Problem Statement: Problem Statement: Given an array of size N. Find the highest and lowest frequency element.

#include<bits/stdc++.h>
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
    pair<int,int> max;
    max.first = 0;
    max.second = 0;
    pair<int,int> min;
    min.first = 0;
    min.second = n;

    for(auto it: mp){
        if(max.second < it.second){
            max.second = it.second;
            max.first = it.first;
        }
        if(min.second>it.second){
            min.second = it.second;
            min.first = it.first;
        }
    }
    cout<<"Max "<<max.first<<"->"<<max.second;
    cout<<"\nMin "<<min.first<<"->"<<min.second;

}
/*
Time Complexity : O(N) Average Case
                  O(N^2) Worst Case
Space Complexity :o(N)

where N is No.of.Elements in Map
*/