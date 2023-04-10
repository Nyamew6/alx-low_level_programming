#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
