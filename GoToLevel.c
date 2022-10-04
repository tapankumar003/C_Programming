#include<stdio.h>
void func1()
{
	printf("HI\n");
	goto x;
	printf("Hello\n");
	x:;
	printf("Bye\n");
}
int main(){
	func1();
}
