/*

Question: Print the following pattern

A
BB
CCC
DDDD
EEEEE

*/

#include<iostream>
using namespace std;

int main(){
    char ch = 'A';
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch;
        }
        ch++;
        cout<<"\n";
    }
    return 0;
}