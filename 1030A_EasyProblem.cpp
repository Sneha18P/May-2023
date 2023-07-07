#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;int f=0;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	 cout<<"HARD";
	else
	 cout<<"EASY";
	return 0;
}
