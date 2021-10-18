
#include <stdio.h>

int main()
{
    char ch = 'v';
    char name[] = "vivek kumar";char name1[50];char ch1;
    printf("%c\t %s\n",ch,name);

    printf("enter a character and a name\n");
    scanf("%c %[^\n]s", &ch1,name1);
    printf("%c\t%s\n", ch1,name1);
    
    return 0;
}