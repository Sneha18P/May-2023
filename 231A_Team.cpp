#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);int arr[n][3];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		int s=0;
		for(int j=0;j<3;j++)
		{
			if(arr[i][j]==1)
			 s++;
		}
		if(s>=2)
		 c++;
	}
	printf("%d",c);
}
