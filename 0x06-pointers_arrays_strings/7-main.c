#include "main.h"
#include <stdio.h>

/**
 * leet - Converts characters to leet alphabet.
 * @s: The string to be converted.
 *
 * Return: The converted string.
 */
char *leet(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		switch (*p)
		{
			case 'e':
			case 'E':
				*p = '3';
				break;
			case 'a':
			case 'A':
				*p = '4';
				break;
			case 't':
			case 'T':
				*p = '7';
				break;
			case 'o':
			case 'O':
				*p = '0';
				break;
			case 'l':
			case 'L':
				*p = '1';
				break;
			default:
				break;
		}
		p++;
	}
	return s;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);

	return (0);
}

