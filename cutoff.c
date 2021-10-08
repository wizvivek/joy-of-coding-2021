#include<stdio.h>
int main ()
{
    int r;
    printf("enter your rank\n");
    scanf("%d",&r);
    if (1<r&&r<=3250)
    {
        printf("you will get any branch \n");
    }
    else if(3250<r&&r<=6505)
    {
        printf("you will get any branch other than cse\n ");
    }
    else if(6505<r&&r<=12012)
    {
        printf("you will get ECE and MEC\n ");
    }
    else if(12012<r&&r<22340)
    {
        printf("you will get MEC\n");
    }
    else{
        printf("admission is not possible at RNSIT\n");
    }
    return 0;
}