#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    long long int sum=0,c;
	    int n;
	    cin>>n>>c;
	    int arr[n];
	    for( int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        sum=sum+arr[i];
	    }
	    if(sum<=c)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	}
	return 0;
}
