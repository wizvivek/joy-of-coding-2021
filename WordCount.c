#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len, count = 0, i = 0;
    printf("enter a string\n");
    scanf("%[^\n]s", str);
    len = strlen(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            count++;
        }
        i++;
    }
    printf("the number of words in the string is %d", (len - count));
    return 0;
}