#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m = 5;
    for (int i = 1; i <= 21; i += 2)
    {
        m++;
        if (n == i)
        {
            int star = 1;
            int space = m - 1;

            for (int j = 1; j <= m; j++)
            {
                for (int k = 1; k <= space; k++)
                {
                    printf(" ");
                }
                for (int L = 1; L <= star; L++)
                {
                    printf("*");
                }
                printf("\n");

                star += 2;
                space--;
            }

            for (int i = 1; i <= 5; i++)
            {
                for (int j = 1; j <= 5; j++)
                {
                    printf(" ");
                }
                for (int j = 1; j <= n; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            // printf("%d - %d %d\n",m,i,n);
        }
    }

    // if (n == 1)
    // {
    //     n = 6;
    //     int star = 1;
    //     int space = n - 1;

    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= space; j++)
    //         {
    //             printf(" ");
    //         }
    //         for (int j = 1; j <= star; j++)
    //         {
    //             printf("*");
    //         }
    //         printf("\n");

    //         star += 2;
    //         space--;
    //     }
    //     n = 1;
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= n; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // int star = 1;
    // int space = n - 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= space; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= star; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");

    //     star += 2;
    //     space--;
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= n; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    return 0;
}