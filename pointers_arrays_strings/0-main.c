#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code 
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *p;

	printf("%s\n", s1);
	printf("%s", s2);
	p = strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", p);
	return (0);
}
