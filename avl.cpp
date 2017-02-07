#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct avl{
	int d;
	int h;
	struct avl *l,*r;
}AVL;
typedef AVL* AVLTREE;
int maxval(int a,int b)
{
	if(a>b)
	return a;
	return b;
}
int height(AVLTREE node)
{
	if(node == NULL)
	return 0;
	
	return maxval(height(node->l),height(node->r)) + 1;
}
int balanceVal(AVLTREE node)
{
	if(node==NULL)
	return 0;
	return height(node->l) - height(node->r);
}
int main()
{

}
