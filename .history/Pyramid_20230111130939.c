#include <stdio.h>
int main()
{
    int i, j, n, sp;
    scanf("%d", &n);
    int space = n - 1;

    for (i = 1; i <= n; i++)
    {
        for (sp = 0; i <= space; sp++)
        {
            printf(" ");
        }
        for (j = 0; j < i * 2 - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}