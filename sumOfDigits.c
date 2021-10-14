


//WRONG CODE
#include<stdio.h>
int sod(int a)
{
   int sum=0,count=0;
   while(a!=0)
   {
       sum+=(a%10);
       a=a/10;
      
   }
   return sum;
}
int sodToOne(int k)
{
    int s=0;
    
  while(k>0||s>9)
  {
    if(k==0)
    {
k=s;
s=0;
    }
    s=s+(k%10);
    k=k/10;
    
  }
return s;
}   
 
  




int main()
{
    int n,x,y;
    printf("enter a number\n");
    scanf("%d",&n);
    x=sod(n);
    printf("sum of digits is %d\n",x);
    y=sodToOne(n);
   printf("sum to one digit is %d",y);
    return 0;
}