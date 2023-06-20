#include <stdio.h>

/**
 * main - prints all possible combinations of two numbers
 *
 * Return: 0
 */
int main(void)
{
    int i;
    int j;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if (i != j && i - j < 0)
            {
                putchar(i + '0');
                putchar(j + '0');

                if (i + j != 17)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return 0;
}
