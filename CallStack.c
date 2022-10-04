# include <stdio.h>

int x = 0;
int f()
{
return x;
}
int g()
{
int x = 1;
return f();
}
/* output for the below program is 0, i.e., the value returned by f() is not
 dependent on who is calling it. f() always returns the value of
  global variable x.*/
int main()
{
printf("%d", g());
printf("\n");
}

