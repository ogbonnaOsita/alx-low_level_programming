#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 * Return: Always 0 (Success)
 */

int main(void)
{
	int password[100];
	int a, b, c;

	b = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		password[a] = rand() % 78;
		b += (password[a] + '0');
		putchar(password[a] + '0');
		if ((2772 - b) - '0' < 78)
		{
			c = 2772 - b - '0';
			b += c;
			putchar(c + '0');
			break;
		}
	}
	return (0);
}
