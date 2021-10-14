

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, r;
    printf("enter the number\n");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        if (r == 0)
        { 
            n/=10;
            continue;
        }
        printf("%d,", r);
        n = n / 10;
    }
    return 0;
}