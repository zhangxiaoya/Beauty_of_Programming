#include <stdio.h>

struct 
{
	unsigned a :4;
	unsigned b :4;
} m;

int main(int argc, char const *argv[])
{
	for(m.a = 1; m.a <= 9; m.a ++)
		for(m.b = 1;m.b <=9;m.b++)
			if(m.a % 3 !=m.b % 3)
				printf("A = %d, B = %d\n", m.a, m.b);
	return 0;
}