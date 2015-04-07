#include<iostream>
using namespace std;
int main()
{
	int n;
	
	while(cin>>n)
	{
		int cnt=0;
		int temp;
		int arr[101]={};
		if(n==0)
		{
			break;
		}
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			arr[temp]+=1;
			cnt+=1;
		}
		for(int i=1;i<=100;i++)
		{
			for(int j=1;j<=arr[i];j++)
			{
				cout<<i;
				cnt-=1;
				if(cnt>0)
					cout<<" ";
			} 
		}
		cout<<endl;
	}
} 
