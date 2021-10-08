#include <stdio.h>
int main()
{
    int n;
    float cost;
    printf("enter number of blue books\n");
    scanf("%d", &n);
    if (n < 10000)
    {
        printf("NO discount\n");
        cost = 10 * n;
        printf("total cost =%f\n", cost);
    }
    else if (10000 <= n && n < 15000)
    {
        printf("10 percent discount\n");
        cost = (10 * n) - (10 * n * 0.1);
        printf("cost =%f\n", cost);
    }
    else if (15000 <= n && n < 20000)
    {
        printf("20 percent discount\n");
        cost = (10 * n) - (10 * n * 0.2);
        printf("cost =%f", cost);
    }
    return 0;
}