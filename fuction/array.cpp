//largest number in an array is lenarr
#include <iostream>
using namespace std;
int larry(int a[],int n){
int max=a[0];
for(int i=0;i<n;i++){
  if(max<a[i]){
    max=a[i];

  }
 

}
return max;
    
}
int main() {
int n;
cin>>n;
int a[n];
int i;
for ( i = 0; i < n; i++)
{
    cin>>a[i];
}
int y= larry (a,n);
cout<<y;

}