#include <iostream>
using namespace std;

void display(int a[][10],int n)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==0)
			cout<<"  ";
			else if(a[i][j]!=-1)
			cout<<a[i][j]<<" ";
			else
			cout<<"#"<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;//n represents number of rows/ columns
	int a[n][10],b[n][10];
	
	int i=0,j=0;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			{
				cin>>a[i][j];
			
			}
						
		}
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			b[i][j]=0;
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			{
				if(a[i][j]==1)
				b[i][j]=-1;
				
				else 
				b[i][j]=0;	
				
			}
	}
	
	cout<<endl;
		
	int k,l;
	int c=0;
	
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	{
		
		if(b[i][j]==-1)
		{
			
			
		}
		
		else if(b[i][j]==0)
		{	
			for(k=i-1;k<=i+1;k++)
			{
				for(l=j-1;l<=j+1;l++)
				{
					if(k>=0 && l>=0 && k<n && l<n)
					{								
												
						if(b[k][l]==-1)
							c=1;
						
					}
				}
			}
			
					if(c==1)
						b[i][j]=0;
						
			
					else 
						b[i][j]=1;
			
					c=0;
						
			
		
			if(b[i][j]==1)
			{
			
				for(k=i-2;k<=i+2;k++)
				for(l=j-2;l<=j+2;l++)
				{
					if(k>=0 && l>=0 && k<n && l<n)
					{
									
						if(b[k][l]==-1){
						c=1;
						
					}
					}
				}
				
					if(c==1)
						b[i][j]=1;
			
					else 
						b[i][j]=2;
			
					c=0;
			}
				
			
		}

	}
}
	cout<<endl;
	display(b,n);
}
