#include<iostream>
using namespace std;

int main(){
long long int t,n,a[1000000],sum=0,mi,m;
cin>>t;
for(int i=0;i<t;i++)
{sum=0;
    cin>>n;
    for(int j=0;j<n;j++)
    
      
    cin>>a[j];
    long long int k=n;
    while(k>0)
    {mi=a[0];m=0;
        for(int j=1;j<k;j++)
     {
        if(a[j]<mi)
        {mi=a[j];m=j;}
     }
     sum=sum+(k-m)*mi;
     k=m;
    }
    
    cout<<sum<<"\n";
}
  
  return 0;
}
