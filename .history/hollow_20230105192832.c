#include <stdio.h>
// Hollow Patterns
int main()
{
    int i, n, j;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");

    for (i = 0; i < n - 2; i++)
    {
        printf("#");
        for (j = 0; j < n - 2; j++)
        {
            printf(" ");
        }
        printf("#\n");
    }

    for (i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}