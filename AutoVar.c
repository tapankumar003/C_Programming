#include <stdio.h>
void function()
{
int x=10;//local variable (also automatic)
auto int y=20;//automatic variable(Automatic variable similar as local variable)
x=x+10;
y=y+10;
printf("x:%d and y:%d\n",x,y);

}
int main() {

	function();
	function();
	function();
	return 0;
}
/*
Keywords.....

auto        extern        short        while
break        float        signed        _Alignas
case        for        sizeof        _Alignof
char        goto        static        _Atomic
const        if        struct        _Bool
continue    inline        switch        _Complex
default     int        typedef        _Generic
do         long        union        _Imaginary
double         register    unsigned    _Noreturn
else         restrict    void        _Static_assert
enum         return        volatile    _Thread_local
*/
