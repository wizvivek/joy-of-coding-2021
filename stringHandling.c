#include <stdio.h>
#include<string.h>
int main()
{
    char str1[] = {"R N S Institue Of Technology"};
    printf("length : %d\n", strlen(str1));
    char str2[] = {" Bengaluru"};
    printf("%s\n", strcat(str1, str2));
    printf("%s\n", strupr(str1));
    return 0;
}