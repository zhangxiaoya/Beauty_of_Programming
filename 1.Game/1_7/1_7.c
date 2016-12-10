#include <stdio.h>

int main()
{
	char n =81;
	while(n --)
	{
		if(n / 9 % 3 == n % 9 % 3)
			continue;
		printf("A = %d, B = %d\n", n / 9 + 1, n % 9 + 1);
	}
	return 0;
}