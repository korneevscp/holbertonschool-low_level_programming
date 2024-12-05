#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to a string of '0' and '1' chars
 * 
 * Return: the converted number, or 0 if there is one or more chars
 *         in the string b that is not '0' or '1' or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    // Check if the string is NULL
    if (b == NULL)
        return (0);

    // Traverse the string
    while (*b)
    {
        // If the character is not '0' or '1', return 0
        if (*b != '0' && *b != '1')
            return (0);

        // Shift the result to the left by 1 to make space for the next bit
        result = result << 1;

        // If the current character is '1', set the least significant bit
        if (*b == '1')
            result |= 1;

        // Move to the next character
        b++;
    }

    return result;
}

int main(void)
{
    unsigned int n;

    // Testing with different binary strings
    n = binary_to_uint("1");
    printf("%u\n", n);  // Should print 1
    n = binary_to_uint("101");
    printf("%u\n", n);  // Should print 5
    n = binary_to_uint("1e01");
    printf("%u\n", n);  // Should print 0 (invalid character 'e')
    n = binary_to_uint("1100010");
    printf("%u\n", n);  // Should print 98
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);  // Should print 402

    return (0);
}
