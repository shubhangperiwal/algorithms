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
int found(int arr[], int l, int r,int x)
{
  while (l <= r)
  {
    int m = l + (r-l)/2;
 
    if (arr[m] == x) 
        return m;  
 
   
    if (arr[m] < x) 
        l = m + 1; 
 
    
    else
         r = m - 1; 
  }
  
  return 0; 
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
	int k,l,f=0;
	if(a[0]==0 || a[0]==1){
	cout<<"yes"<<endl;
	break;
	}
	else{
		
		for(j=0;j<n-1;j++)
		{
		k=n-1;	
		while(k>j)
		{
			if(a[k]%a[j]!=0)
			k--;
			
			else 
			{
				l=a[k]/a[j];
				
				if(found(a,j,n-1,l) != j && found(a,j,n-1,l))
				{				
				f=1;
				
				break;
				}
				k--;
			}
		}
				
				if(f==1)
				break;
			
			}
		
			
		}
	
	if(f==1)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
	}
}

