#include<iostream>
using namespace std;
int f=0;
void checksum(int a[],int n,int s)
{
	
	int w=0;
	if(n<=0)
	return;
	
	if(s-a[n-1] > 0 && n>0 && f!=1){
	s = s - a[n-1];
	checksum(a,n-1,s);
	w=1;
	}
	else if(s == a[n-1])
	{
		cout<<a[n-1]<<" ";
		f=1;
		return;
	}
	else if(f==1 && w==1)
	{
		cout<<a[n-1]<<" ";
		return;
	}
	
	
	if(n>0){
	if(w)	
	s = s + a[n-1];
	checksum(a,n-1,s);
}
	
}
int main()
{
	int n,s,i;
	cout<<"Enter the number of numbers ";
	cin>>n;
	cout<<"Enter the sum ";
	cin>>s;
	int a[n];
	cout<<"Enter the numbers "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	checksum(a,n,s);
}
