/*

Question: Print the following pattern

        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA

*/

#include<iostream>
using namespace std;

int main(){
    
    int k;
    int n= 5;
    for(int i=0;i<n;i++){
        char ch = 'A';
        k = i*2+1;
        int p = 0;
        for(int j=1;j<=2*n-1;j++){
            if(j<=(n-i-1) || j>(k+n-i-1)) cout<<" ";

            else{

                cout<<ch;
                if( p < (k/2))
                    ch++;
                else ch--;
                p++;
            }
        }
        cout<<"\n";
    }
    return 0;
}