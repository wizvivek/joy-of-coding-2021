#include <stdio.h>
int main()

{
    int age;
    printf("Enter age\n");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("Not elegible to vote\n");
    }
    else
    {
        printf("Elegible to vote\n");
    }
    return 0;
}