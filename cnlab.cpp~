#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <crypt.h>
#include <string.h>
int solve(char *a,char *b)
{
	int i;
	int n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		return 0;
	}
	return 1;
}
int inc(char *c){
    if(c[0]==0) return 0;
    if(c[0]=='z'){
        c[0]='a';
        return inc(c+sizeof(char));
    }  
    c[0]++;
    return 1;
}

void perm(int n,char *p,char *l,char *u)
{
    
    int i,j,k=0;
   
   	 char *d;	
	 char *c = (char *)malloc((n+1)*sizeof(char));	
	 char *z = (char *)malloc((n+1)*sizeof(char));
	
	strcpy(c,l);
	strcpy(z,u);
	
	
	while(c[0]<=z[0])
	{
	
	d=crypt(c,"aa");
	k=solve(d,p);
		if(k)
	          break;
	c[n-1]++;
	if(c[n-1]-'z' == 1)
	{
	
	for(i=n-1;i>0;i--)					
		{			
		if(c[i]>'z')
			{
			c[i-1]++;
			c[i]='a';
			}
		}
	}
	}

	if(k)
	printf("%s",c);

	else
	printf("not found ");
	
}

int main()
{
	printf("Enter encrypted shit ");
	char p[20];
	gets(p);
	perm(4,p,"aaaa","nzzz");
}


