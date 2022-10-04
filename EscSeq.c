/*
// C program to illustrate
// \a escape sequence
#include <stdio.h>
int main(void)
{
	printf("My mobile number "
		"is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a");
	return (0);
}
*/

// C program to illustrate
// \b escape sequence
#include <stdio.h>
int main(void)
{
	// \b - backspace character transfers
	// the cursor one character back with
	// or without deleting on different
	// compilers.
	printf("Hello C Programming\b\b\b\bT");
	return (0);
}

/*

list of escape sequence.....

\a   alarm or beep
\b   backspace
\f   form feed
\n   new line
\r   carriage return
\t   tab horizontal
\v   vertical tab
\\   backslash
\'   single quote
\"   double quote
\?   question mark
\ooo octal number
\xhh hexadecimal number
\0   null



*/
