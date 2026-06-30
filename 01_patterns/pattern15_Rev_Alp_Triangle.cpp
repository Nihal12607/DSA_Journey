/*

Question: Print the following pattern

ABCDE
ABCD
ABC
AB
A

*/

#include<iostream>
using namespace std;

int main(){
    char ch = 'A';
    for(int i=4;i>=0;i--){
        for(int j=0;j<i+1;j++){
            cout<<ch;
            ch++;
        }
        ch = 'A';
        cout<<"\n";
    }
    return 0;
}