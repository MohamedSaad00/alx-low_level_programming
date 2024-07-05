#include "main.h"
/**
*cap_string - function that capitalize first character of a word
*@str: string to capitalize
*Return:returns the capitalized string
*/

char *cap_string(char *str)
{
    int index = 0;

    if (str[index] >= 'a' && str[index] <= 'z')
    {
        str[index] -= 32;
    }
    while (str[index] != '\0')
    {
        if (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
            str[index] == ',' || str[index] == ';' || str[index] == '.' ||
            str[index] == '!' || str[index] == '?' || str[index] == '"' ||
            str[index] == '(' || str[index] == ')' || str[index] == '{' ||
            str[index] == '}')
	{
	if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
	{
	str[index + 1] -= 32;
	}
	}
	index++;
	}
	return (str);
}
