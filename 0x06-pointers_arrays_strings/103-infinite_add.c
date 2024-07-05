#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, len, carry = 0, sum;

    while (n1[len1])
        len1++;
    while (n2[len2])
        len2++;

    if (size_r <= (len1 > len2 ? len1 : len2) + 1)
        return (0);
    r[size_r - 1] = '\0';

    len1--;
    len2--;
    len = size_r - 2;
    while (len1 >= 0 || len2 >= 0 || carry)
    {
        sum = carry;
        if (len1 >= 0)
            sum += n1[len1--] - '0';
        if (len2 >= 0)
            sum += n2[len2--] - '0';

        r[len--] = (sum % 10) + '0';
        carry = sum / 10;
    }
    if (len < 0 && (len1 >= 0 || len2 >= 0 || carry))
        return (0);
    for (len++, len1 = 0; r[len]; len++, len1++)
        r[len1] = r[len];
    r[len1] = '\0';

    return (r);
}
