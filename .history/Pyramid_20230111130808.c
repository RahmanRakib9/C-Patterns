#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    i

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < i * 2 - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}