#include <stdio.h>
// pyramid
int main()
{
    int i, j, n, sp;
    scanf("%d", &n);
    int space = n - 1;

    for (i = 1; i <= n; i++)
    {
        for (sp = 1; sp <= space; sp++)
        {
            printf(" ");
        }
        space--;
        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
// for n=5
// output will be
   # 
  ###
 #####
#######
#######
 
