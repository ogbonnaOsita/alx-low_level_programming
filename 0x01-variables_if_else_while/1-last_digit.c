#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - return last digit of a given random number
 * Return: Always 0 (Success)
 */

int main(void)

{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int d = n % 10;
	if (d>5)
		printf("Last digit of %d is %d and is greater than 5",n,d);
	else if (d == 0)
		printf("Last digit of %d is %d and is 0",n,d);
	else if (d < 6)
		print("Last digit of %d is  %d  and is less than 6 and not 0",n,d);
	return (0);

}
