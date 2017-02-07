#include <iostream>
using namespace std;
long p=1;
long p1=1;
int st=0;
int gcd(int m,int n)
{
	if(n>m)
	return gcd(n,m);
	
	while(n!=0)
	{
	int r = m % n;
	m = n;
	 n = r;
	}
	return m;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	p=p*a[i];
	}
	
	int k,l;
	
	for(i=0;i<n-1;i++)
	{
		
		for(j=i+1;j<n;j++)
		{
		st++;	
		k=gcd(a[i],a[j]);
		if(k==1)
		continue;
		
		else
			{
			st++;	
			l=j+1;
			while(k!=1 && l<=n)
				{
				p=p*k;
				k=gcd(k,a[l]);
				l++;
				st++;
				}
								
			}
		}
	}
	cout<<endl;
	cout<<p;
	cout<<endl;
	cout<<st;
}

