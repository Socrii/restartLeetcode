#include <iostream>
using namespace std;
bool primeNum(int n){
    int m;  
   for (int  i = 2; i < n/2; i++)
   {
      m=n%i;
      if(m==0){
        return false;
      }

   }
   
return true ;
}
 int main()
 {
  int n;
  cin>>n;
  bool y=primeNum(n);
if(y){
    cout<<"prime";
   }
   else{
    cout<<"not a prime";
   }


 }
 

 
  
