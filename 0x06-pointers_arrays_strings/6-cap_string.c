#include "main.h"

/**
*cap_string - function that capitalize first character of a word
*@str: string to capitalize
*Return:returns the capitalized string
*/

char *cap_string(char *str)
{
    int i = 0;
    int capitalize_next = 1;

    while (str[i] != '\0')
    {
        if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 32;
            capitalize_next = 0;
        }

        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}')
        {
            capitalize_next = 1;
        }
        else
        {
            capitalize_next = 0;
        }

        i++;
    }

    return str;
}
