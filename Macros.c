#include <stdio.h>
#define INCREMENT(x) x=x+3
int main()
{
	char* ptr = "Welcome To C Programming";
	int x = 10;
	printf("%s ", INCREMENT(ptr));
	printf("%d", INCREMENT(x));
	return 0;
}

