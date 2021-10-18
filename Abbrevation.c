#include <stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("enter a string\n");
    scanf("%[^\n]s", str);
    while (i <= str[i])
    {
        if (str[i] == ' ')
        {
            printf("%c", str[i + 1]);
        }
        if (i == 0)
        {
            printf("%c", str[i]);
        }
        i++;
    }
    return 0;
}