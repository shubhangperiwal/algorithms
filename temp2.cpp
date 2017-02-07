#include<iostream>
using namespace std;
int max(int a,int b)
{
	if(a>b)
		return a;
		
		return b;
}
int main()
{   
    int i,j,n;
    cin>>n;
    int arx[n];
    int ary[n];
    long length,temp;
    for(i=0; i<n; i++)
    {
        cin>>arx[i];
        cin>>ary[i];
    }
    temp = max(((ary[0]-ary[1])*(ary[0]-ary[1])),((arx[0]-arx[1])*(arx[0]-arx[1])));
    for(i=0;i<n;i++)
    {       
       for(j=i+1;j<n;j++)
        {
            length=max(((ary[j]-ary[i])*(ary[j]-ary[i])),((arx[j]-arx[i])*(arx[j]-arx[i])));
            if(length<=temp)
            {
                temp=length;
            }
        }                     
    }    
    cout<<temp;    
}

