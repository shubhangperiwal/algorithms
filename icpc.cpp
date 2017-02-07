#include<iostream>
using namespace std;
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


int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	int n,j;
	cin>>n;
	int a[n];
	for(j=0;j<n;j++)
	cin>>a[j];
	
	insort(a,n);
	int k;
	
	int b[n];
	for(j=0;j<n;j++)
	b[j]=0;
	
		
		for(j=0;j<n-1;j++)
		{
		k=n-1;	
		while(k>j)
			{
			if(a[k]%a[j]==0)
			b[k]++;
			k--;
			}
		}
		long long num=0,num1=1;
		
		num = num+num1;
		num1 = 1;
	}
	num = num%1000000009;
	cout<<num<<endl;

}
}
