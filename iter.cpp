#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	
	int n;
	printf("ENter number ");
	scanf("%d",&n);
	 char *c = (char *)malloc((n+1)*sizeof(char));	
	 char *z = (char *)malloc((n+1)*sizeof(char));
	
	int i;
	for(i=0;i<n;i++)
	{	
	c[i]='a';
	z[i]='z';
	}

	
	d=crypt(c,"aa");
	k=solve(d,p);

	while(strcmp(c,z))
	{
	
	printf("%s\n",c);
	c[n-1]++;
	if(c[n-1]-'z' == 1)
	for(i=n-1;i>0;i--)					
		{
		c[n-1]='z';		
		if(c[i]=='z')
			{
			c[i-1]++;
			c[i]='a';
			}
		}

	
	
	}	
}
