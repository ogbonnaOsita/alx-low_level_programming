#ifndef MAIN_H

#define MAIN_H

#include <stdio.h>
/**
 * positive_or_negative - checks 
 * if a number is positive or negative
 */
void positive_or_negative(int i)
{
	int n;
	n = i / 2;
	if (n > 0)
		printf("%d  is positive\n", i);
	else if (n == 0)
		printf("%d  is zero\n", i);
	else if (n < 0)
		printf("%d is negative\n", i);
}

#endif /* MAIN_H */
