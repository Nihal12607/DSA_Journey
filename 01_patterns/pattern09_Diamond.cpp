/*

Question: Print the following pattern

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *                      
      * * *        
        *

*/

#include<iostream>
using namespace std;

int main(){
    int k,p ;
    for(int i=0;i<5;i++){
        for(int j=1;j<=9;j++){
            k = 2*i+1;
            p = (9-k)/2;
            if(j<=p){
                cout<< " ";
                
            }
            else if(j<=p+k){
                cout<< "*";
            }
        }
        cout<<"\n";
    }
    for(int i=4;i>=0;i--){
        for(int j=1;j<=9;j++){
            k = 2*i+1;
            p = (9-k)/2;
            if(j<=p){
                cout<< " ";
                
            }
            else if(j<=p+k){
                cout<< "*";
            }
        }
        cout<<"\n";
    }
    return 0;
}