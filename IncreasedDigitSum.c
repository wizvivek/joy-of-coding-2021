#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    if (n==0)
    {
        sum=1;
    }
    while(n!=0)
    {
      sum+=((n%10) +1);
      n=n/10;
    }
    printf("increased digit sum =%d\n",sum);
    return 0;
}