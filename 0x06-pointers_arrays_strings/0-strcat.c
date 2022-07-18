#include "main.h"

/**
* _strat -> this is a funcion strcat
* @dest: first param
* @src: second param
* Return: a string
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
