#include <stdio.h>

int main(void)
{
	int ch;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	putchar('\n');
	return 0;
}
