#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return -1;
	}

	int result = 0;
	while (result * result <= n)
	{
		result++;
	}

	return result -1;
}

int main()
{
	printf("The natural square root of 16 is %i\n", _sqrt_recursion(n));
	return 0;
}
