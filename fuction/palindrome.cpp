#include <iostream>
using namespace std;
 
 void isprime(int n){
    int m;
    for(int i=2;i<n/2;i++){
        m= n%i;
        if(m==0){
            cout<<"not a prime";
        }
        else{
            cout<<"primw";
        }
    }

 }
 int main(){
    int n;
    cin>>n;
    isprime(n);

 }
 /*#include <iostream>
using namespace std;
 
 void isprime(int n){
    int m;
    int flag=0;
    for(int i=2;i<n/2;i++){
        m= n%i;
        if(m==0){
            flag=1;
           break;
        }
       flag=flag+1;
    }
    if(flag==1){
        cout<<"not a primw";
    }
    else{
        cout<<"prime";
    }

 }
 int main(){
    int n;
    cin>>n;
    isprime(n);
    
 }