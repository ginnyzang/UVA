#include<iostream>
using namespace std;
int main()
{
	int k;
	cin>>k;
	while(k--)
	{
		int n;
		while(cin>>n)
		{
			int arr[100000];
			for(int i=0;i<n;i++)
				cin>>arr[i];
			int max=arr[0];
			int ans=arr[0]-arr[1];
			for(int i=1;i<n;i++)
			{
				if(arr[i]>=max)
					max=arr[i];
				else
				{
					if(max-arr[i]>ans)
						ans=max-arr[i];	
				}
			}
			cout<<ans<<endl;
		}
	}
} 
