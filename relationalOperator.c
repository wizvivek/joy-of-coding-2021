#include<stdio.h>
int main()
{
    int a=5,b=5,c=10;
    printf("%d==%dis%d\n",a,b,a==b);
    printf("%d==%dis%d\n",a,c,a==c);
    printf("%d>%dis%d\n",a,b,a>b);
    printf("%d>%dis%d\n",a,c,a>c);
    printf("%d<%dis%d\n",a,b,a<b);
    printf("%d<%dis%d\n",a,c,a<c);
    printf("%d!=%dis%d\n",a,b,a!=b);
    printf("%d!=%dis%d\n",a,c,a!=c);
    printf("%d>=%dis%d\n",a,b,a>=b);
    printf("%d>=%dis%d\n",a,c,a>=c);
    printf("%d<=%dis%d\n",a,b,a<=b);
    printf("%d<=%dis%d\n",a,c,a<=c);
    return 0;
    
    }