#include <stdio.h>
#define PRINT(i, limit)								 \
	while (i < limit) {								 \
		printf("Welcome ");							 \
		i++;											 \
	}
int main()
{
	int i = 0;
	PRINT(i, 3);
	return 0;
}

