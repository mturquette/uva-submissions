#include <stdio.h>

int main()
{
	unsigned long i = 55;
	int count = 0;

	while (i != 0)
	{
		printf("i is %lx\n", i);
		if (i % 2)
			count++;
		i = i >> 1;
	}

	printf("count is %d\n", count);

	return 0;
}
