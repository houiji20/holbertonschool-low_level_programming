 #include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: 2string
 * @src: 1string
 *
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;
	while (dest[d])
{
	dlen++;
}
for (i = 0; src[i] != 0; i++)
{
dest[d] = src[i];
dlen++;
}

dest[d] = '\0';
return (dest);
}

