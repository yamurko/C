#include<stdio.h>
#include<stdlib.h>
void pri(int[], int[], int);

void main()
{
    int a[9], n, i, prime[9];

    printf("/*How Many Numbers You Want\nTo Add in Array*/\n\nEnter Limit : ");
    scanf_s("%d", &n);

    printf("\nEnter %d Numbers in Array:\n\n", n);
    for (i = 0; i < n; i++)
        scanf_s("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        pri(a[i], prime[i], n);
    }


    return 0;
}

void pri(int a[], int prime[], int n)
{
    int t = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        c = 0;
        for (int j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
        {
            prime[t] = a[i];
            t++;
        }
    }
    printf("\nPrime Numbers in Above Array:\n\n");
    for (int i = 0; i < t; i++)
    {
        printf(" %d ", prime[i]);
    }
}