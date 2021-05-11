#include <stdio.h>
int main()
{
    int n, i, j, c;
    printf("Enter an integer :");
    scanf("%d", &n);
    if (n % 2 == 1 && n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == i || j == n - i + 1)
                    printf("*");
                else if ((j > i && j < n - i + 1) || (j < i && j > n - i + 1))
                    printf("-");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    else
        printf("Enter a odd positive number");
}