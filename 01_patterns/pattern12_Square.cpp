/*

Question: Print the following pattern

1      1
12    21
123  321
12344321

*/

#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){

            if(j<=i) cout<<j;            
            else cout<<" ";
        }
        for(int k=4;k>=1;k--){

            if(k>i) cout<<" ";
            else cout<<k;
        }
        cout<<"\n";
    }
    return 0;
}