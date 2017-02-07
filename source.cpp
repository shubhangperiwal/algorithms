#include<iostream>
#include<string.h>
using namespace std;
typedef struct tree{
	int d;
	struct tree *l,*r;
}TREE;
typedef TREE * TREEPTR;
void build_tree(TREEPTR node)
{
    int data,i;
    TREEPTR temp = node;
    cin>>data;
    char c[20];
    cout<<"ENter path ";
    gets(c);
    int l = strlen(c);
    for(i=0;i<l-1;i++)
    {
		if(c[i]==l){
		temp = temp->l;
		
	}
		
		else if(c[i]==r)
		temp = temp->r;
	
	if(temp == NULL)
		cout<<"Wrong input";
		return;
		}
    
}
int main()
{
	int n;
	
}
