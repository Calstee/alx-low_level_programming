#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: get a random number and compare its last digit with 5
 * Return: 0
 */
int main(void)
{
		int n;
		int last;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		last = n % 10;

		if (last > 5)
			printf("last digit of %d is %d and is greater than 5\n", n, last);
		else if (last == 0)
			printf("last digit of %d is %d and is 0\n", n, last);
		else if (last < 6)
			printf("last digit of %d is %d and is less than 6 and not 0\n", n, last);


		return (0);
}
