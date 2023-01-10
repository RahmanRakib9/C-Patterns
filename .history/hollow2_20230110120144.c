#include <stdio.h>
// Hollow Pattern 1
int main()
{
    int i, j, n;
    scanf("%d", &n); // 5

    for (i = 1; i <= n; i++) // 5<=5
    {
        for (j = 1; j <= i * 2 - 1; j++) //
        {
            if (i == n)
            {
                printf("#");
                continue;
            }
            if (j == 1 || j == i * 2 - 1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}
// for n=5
// output will be
