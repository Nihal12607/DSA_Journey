/*

Question: Print the following pattern

*
* *
* * *
* * * *
* * * * * 
* * * * 
* * * 
* * 
*

*/

#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(int i=4;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}