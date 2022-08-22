#include <iostream>
using namespace std;
int fibo(int n, int a,int b){
    int sum;
   for(int i=0;i<n;i++){
     sum=a+b;
      a=b;
    b=sum;
   
   }
   return sum;
     }
  int main(){
    int n;
    int a;
    int b;
  cin>>n>>a>>b;
 
    int y=fibo(n,a,b);
    cout<<y;
  }