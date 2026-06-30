/*

Question: Print the following pattern

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2 == 0){
                cout<<"1 ";
            }
            else cout<<"0 ";
        }
        cout<<"\n";
    }
    return 0;
}