#include<stdio.h>
#include<stdlib.h>
int main()
{
    int pin,rev=0;
    printf("enter the pin\n");
    scanf("%d",&pin);
    while(pin!=0)
    {
        rev=(10*rev)+(pin%10);
        pin=pin/10;

    }
    while(rev!=0)
    {
        if(rev%10==9)
        {
            int n=0;
            printf("%d",n);
        }
        else{
        printf("%d",((rev%10)+1));}
        rev=rev/10;
    }
    return 0;
}