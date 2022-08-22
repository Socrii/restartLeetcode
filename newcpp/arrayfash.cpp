#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array"<<endl;
        int n;
        cin>>n;
      int a[n];
      if(n%2==0){
      for(int i=0;i<n;i++){
        int k=1;
        int t=2;
        for (int j=0;j<n/2; j++)
        { 

           a[j]=k;
           
            k=k+2;
        }
        for (int l=n-1;l>=n/2;l--)
        {
            
            a[l]=t;
            t=t+2;
        
         }
        
      }

      }
      else 

for(int i=0;i<n;i++){
        int f=1;
        int g=2;
        for (int j=0;j<=n/2; j++)
        { 
         a[j]=f;
          f=f+2;
        }
        for (int l=n-1;l>n/2;l--)
        {  
            a[l]=g;
            g=g+2;  
         }
        }
     cout<<" the given array of desired fashion is"<<endl;
     cout<<"\n";
for(int u=0;u<n;u++)
   { cout<<a[u]<<endl;}
return 0;
}