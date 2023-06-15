#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints the message "and that piece of art is useful"
 *              - Dora Korpar, 2015-10-19 to the standard error.
 *
 * Return: 1 (Exit status)
 */
int main(void)
{
const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = sizeof(message) - 1;
write(2, message, len);
return (1);
}
