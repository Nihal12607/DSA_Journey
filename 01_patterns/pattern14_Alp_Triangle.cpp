/*

Question: Print the following pattern

A
AB
ABC
ABCD
ABCDE

*/

#include<iostream>
using namespace std;

int main(){
    char ch = 'A';
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch;
            ch++;
        }
        ch = 'A';
        cout<<"\n";
    }
    return 0;
}