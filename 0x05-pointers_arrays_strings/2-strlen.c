#include "main.h"

/**
*count the 
*number of characters
*
*/
int _strlen(char *s)
{
     int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
