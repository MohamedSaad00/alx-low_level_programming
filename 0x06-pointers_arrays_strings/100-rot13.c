#include "main.h"

/**
* rot13 -  encodes a string using rot13
* @str:the string targeted
*Return: returns the encoded string
*/

char *rot13(char *str)
{
    int i, j;
    char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char encoded[] =  "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; original[j] != '\0'; j++)
        {
            if (str[i] == original[j])
            {
                str[i] = encoded[j];
                break;
            }
        }
    }

    return (str);
}

