//teen patti
#include <iostream>
#include <string.h>
#include <stdlib.h>
typedef struct teen{
	int cash;
	int bet;
	int raise;
	bool call;
	char card[3][2];
	int sum;
	
}Player;
using namespace std;
void createDeck(char c[52][2]);
void shuffle(char c[52][2]);
void distribute(Player p[],int n,char c[52][2]);

int main()
{
	
}
