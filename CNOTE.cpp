#include <iostream>
using namespace std;

int main() {
int z;
cin>>z;
for(int j=0;j<z;j++)
{
   int x,y,k,n,page,cost,move=0;
   cin>>x>>y>>k>>n;
   for(int i=0;i<n;i++)
   {
       cin>>page>>cost;
       if(page>=x-y && cost<=k)
       {
           move=1;
          
       }
   }
   if(move==1)
   {
       cout<<"LuckyChef\n";
   }
   else
   {
       cout<<"UnluckyChef\n";
   }
}


	return 0;
}
