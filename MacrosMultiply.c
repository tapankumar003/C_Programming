/*#include <stdio.h>
#define MULTIPLY(a, b) a* b
int main()
{
	// The macro is expanded as 2 + 3 * 3 + 5, not as 5*8
	printf("%d", MULTIPLY(2 + 3, 3 + 5));
	return 0;
}
*/
//output 16

#include <stdio.h>
// here, instead of writing a*a we write (a)*(b)
#define MULTIPLY(a, b) (a) * (b)
int main()
{
	// The macro is expanded as (2 + 3) * (3 + 5), as 5*8
	printf("%d", MULTIPLY(2 + 3, 3 + 5));
	return 0;
}
// Output 40

