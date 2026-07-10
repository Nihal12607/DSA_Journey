// Problem Statement: Given a string, check if the string is palindrome or not. A string is said to be palindrome if the reverse of the string is the same as the string.

#include<bits/stdc++.h>
using namespace std;
bool isPallindrome(int b,int e,string s){
    if(b>=e){
        return true;
    }
    if(s[b] != s[e]){
        return false;
    }
    return isPallindrome(b+1,e-1,s);
    
}
int main(){
    cout<<"Enter a string:\n";
    string s;
    getline(cin,s);

    if(isPallindrome(0,s.length()-1,s)){
        cout<<s<<" is a pallindrome.";
    }
    else cout<<s<<" is not a pallindrome.";
}
/*
Time Complexity : O(N)
Space Complexity : O(N)
*/