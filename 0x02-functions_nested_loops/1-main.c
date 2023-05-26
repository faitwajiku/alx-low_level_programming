#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return 0;
}

