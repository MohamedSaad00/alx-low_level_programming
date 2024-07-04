#include "main.h"

/*
 * _strcat - concatenates the strings pointed to by @src to
 *the end of string pointed to by @dest
 *@dest: string that will be appended
 *@src: string to be concatenated upon
 * 
 * Return: return pointer to @dest
 *
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return dest;
}
