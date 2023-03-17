#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled and
 *        run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of char: %u byte(s)\n", (unsigned int)sizeof(char));
	printf("size of int: %u byte(s)\n", (unsigned int)sizeof(int));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("size of float: %u byte(s)\n", (unsigned int)sizeof(float));
	return (0);
}

