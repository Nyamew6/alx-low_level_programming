#include <unistd.h>

/**
 * _putchar - writes a single character to the standard output (stdout)
 * @c: The character to be written
 *
 * Description: Writes the character specified by the argument 'c' to the
 * standard output (stdout). Returns 1 on success, and -1 on failure,
 * setting the 'errno' global variable appropriately.
 *
 * Return: 1 on success, -1 on failure
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
