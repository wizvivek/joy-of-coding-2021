#include<stdio.h>
void noOfDigits(int a)
{
  int count=0,r;
  while(a!=0)
  {
      r=a%10;
    printf("%d\n",r);
    a=a/10;
    count++;
  }
  printf("number of digits are %d\n",count);
}

int rev(int a)
{
   int n=0;
   while(a!=0)
   {
       n=(n*10)+(a%10);
       a=a/10;

   }
   return n;
}
int main()
{
    int a,x;
    printf("enter a number\n");
    scanf("%d",&a);
    noOfDigits(a);
    x=rev(a);
    printf("the reverse number is %d\n",x);
    return 0;

}