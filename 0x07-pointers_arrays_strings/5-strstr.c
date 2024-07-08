#include "main.h"

/**
*_strstr - The _strstr() function finds the first occurrence
* of the substring needle in the string haystack.
* The terminating null bytes (\0) are not compared
*@haystack: string where the search is made
*@needle: string whose occurence is searched in haystack
*Return:Returns a pointer to the beginning of the located
* substring, or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;
	if(*needle == '\0')
		return haystack;
	while (*haystack)
	{
		h = haystack;
		n = needle;
		while(*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return haystack;
		haystack++;
	}
	return NULL;
}
