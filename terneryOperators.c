#include<stdio.h>
int oftwo(int a,int b)
{
    return((a>b)?a:b);
}
int ofthree(int d,int c)
{
    return((d>c)?d:c);
}

int main()
{
    int a,b,c,x;
    printf("enter three numbers\n");
    scanf("%d %d %d\n",&a,&b,&c);
    printf("the greater of first two numbers is %d\n",oftwo(a,b));
    printf("the greater of the three is %d\n",ofthree(oftwo(a,b),c));
    return 0;
}