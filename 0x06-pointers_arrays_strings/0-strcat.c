#include "main.h"

/**
* _strat - concatenates two strings.
* @dest: destination.
* @src: source.
* Return: the pointer to dest.
*/
char *_strcat(char *dest, char *src)
{
	int count = o, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count >= 0)
	{
		*(dest + count) = *(scr + count2);
		if (*(scr + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
