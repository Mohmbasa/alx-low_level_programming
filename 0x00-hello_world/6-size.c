#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the size of various types on the current system.
 * Types include char, int, long int, long long int, float, double, and long double.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of a char: %zu byte(s)\n", sizeof(char));
    printf("Size of an int: %zu byte(s)\n", sizeof(int));
    printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
    printf("Size of a float: %zu byte(s)\n", sizeof(float));
    printf("Size of a double: %zu byte(s)\n", sizeof(double));
    printf("Size of a long double: %zu byte(s)\n", sizeof(long double));

    return 0;
}
