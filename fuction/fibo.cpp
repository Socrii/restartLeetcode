#include <iostream>
using namespace std;
int fibo(int n, int a,int b){
    int sum=0;
   for(int i=0;i<n;i++){
    int sum=a+b;
    b=sum;
    a=b;
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