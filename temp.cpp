#include <iostream>

using namespace std;
int main()
{
	int y,i;
	
	int a[12];
	for(i=0;i<12;i++)
		a[i]=0;
	string ar[12]={"January","February","March","April","May","June", "July","August","September","October","November","December"};
	int fd=1;
	cin>>y;
	
	int f = y - 2016;
	
	if(f>0)
	{
		for(i=2016;i<y;i++)
		{
		if(i%4 == 0)
		fd = fd + 2;		
		else
		fd = fd + 1; 
		
		if(fd>7)
		fd=fd-7;				
		}
	}
	else if(f<0)
	{
		for(i=y;i<2016;i++)
		{
			if(i%4==0)
			fd = fd - 2;		
			else
			fd = fd -1;
			
			if(fd<7)
			fd=fd+7;
			
		}
	}
	
	
	
	
	
	int m[12];
	if(y%4 == 0)
	int m[] = {31,29,31,30,31,30,31,31,30,31,30,31};
	
	else
	int m[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	fd=fd%7;
	for(i=0;i<12;i++)
	{
		
		if(fd==3)
			a[i]=1;
		fd = fd + m[i];
		fd = fd%7;		
		
	}
	for(i=0;i<12;i++)
	{
		if(a[i]==1)
		cout<<ar[i]<<endl;
	}
	
}
