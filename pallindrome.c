#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len, m, com;
    printf("enter a string\n");
    scanf("%[^\n]s", str);
    char rstr[100];
    len = strlen(str);
    m = len - 1;
    for (int i = 0; i < len; i++)
    {
        rstr[i] = str[m];
        m--;
    }
    com = strcmp(str, rstr);
    if (com == 0)
    {
        printf("PALLINDROM\n");
    }
    else
    {
        printf("Not Pallondrom\n");
    }
    return 0;
}