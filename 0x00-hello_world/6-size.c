#include <stdio.h>

/**
 * main -  prints the size of various types on the computer
 * Return: 0 always
 */

int main(void)
{
	printf("Size of a char: %lu  byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}

