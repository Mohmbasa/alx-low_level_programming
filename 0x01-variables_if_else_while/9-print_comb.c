#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *              separated by ", " in ascending order using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    /* Loop through tens place digits */
    for (i = 0; i < 10; i++)
    {
        /* Loop through ones place digits */
        for (j = 0; j < 10; j++)
        {
            /* Print the current combination */
            putchar(i + '0'); /* Print tens place digit */
            putchar(j + '0'); /* Print ones place digit */

            /* Check if it's not the last combination */
            if (!(i == 9 && j == 9))
            {
                putchar(','); /* Print comma */
                putchar(' '); /* Print space */
            }
        }
    }

    putchar('\n'); /* Print newline */

    return (0);
}
