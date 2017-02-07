#include<iostream>
#include<stdio.h>
using namespace std;
void insort(int a[],int n);
int main()
{
	int n;
	cout<<"Enter the number of numbers";
	cin>>n;
	int i=0;
	
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	insort(a,n);
	cout<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}

void insort(int a[],int n)
{
	int i,j;
	int k;
	for(j=1;j<n;j++)
	{
		k=a[j];
		i=j-1;
		while(i>=0 && a[i]>k)
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=k;
	}
}
