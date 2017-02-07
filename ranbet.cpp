#include <iostream>
#include <stdlib.h>
using namespace std;
 


int notfound(int a[],int k,int n)
{
	int f=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		f=0;
	}
	return f;
}
int main()
{
	int n,e;
	cout<<"Enter no. of vertices ";
	cin>>n;
	cout<<"Enter no. of edges ";
	cin>>e;
	int a[n][n];
	int i,j,k,l;

	for(i=0;i<n+1;i++)
	{
		for(j=0;j<n+1;j++)
		a[i][j]=0;
	}
	cout<<"Please enter vertices in the order from 0 to "<<n-1<<"0 and "<<n-1<<" inclusive";
	int v[e][2];
	for(i=0;i<e;i++)
	{
		cin>>v[i][0];
		cin>>v[i][1];
		
	}
	for(i=0;i<e;i++)
	{
		a[v[i][0]][v[i][1]] = 1;
		j++;
	}
	l=0,k=0;

	

	while(j>n-1)
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
		if(a[i][k])
			{
				for(l=0;l<n;l++)
				{
					if(l != i && l != j)
					if((a[k][l] == a[i][l]) && a[i][l] == 1){
					a[k][l]=0;
					j--;
				}
				}
		}
	}

}
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	{
		cout<<a[i][j]<<" ";
	}
cout<<endl;
}
}
