/*

Question: Print the following pattern

E
D E
C D E
B C D E
A B C D E

*/

#include<iostream>
using namespace std;

int main(){
    char ch = 'E';
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            cout<<char(ch+j)<<" ";
            
        }
        ch--;
        cout<<"\n";
    }
    return 0;
}