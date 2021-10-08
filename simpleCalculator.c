#include <stdio.h>
int main()
{
    int a, b;
    char ch;
    printf("enter operator\n");
    scanf("%c", &ch);
    printf("enter two numbers\n");
    scanf("%d %d", &a, &b);

    switch (ch)
    {
    case '+':

    {
        printf("sum = %d\n", a + b);
        break;
    }
    case '-':
    {
        printf("difference = %d\n", a - b);
        break;
    }
    case '*':
    {
        printf("multiplication =%d \n", a * b);
        break;
    }
    case '/':
    {
        if (b == 0)
        {
            printf("division by zero is not defined\n");
        }
        printf("division = %d\n", a / b);
        break;
    }
    default:
    {
        printf("invalid operator\n");
    }
    }
    return 0;
}
