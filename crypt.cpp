#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <crypt.h>
#include <string.h>
int main()
{
	printf("%s",crypt("123o","aa"));
}
