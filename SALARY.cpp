#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0,op,mini;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		mini=a[0];
		for(int i=0; i<n; i++)
		{
		   mini=min(mini,a[i]);
			sum=sum+ a[i];
		}
		op=sum - n*mini;
		cout<<op<<"\n";
	}
	return 0;
}
