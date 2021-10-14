#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[20]={2,6,10,14,18,10,3,7};
    for (int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(arr[i]==arr[j])

            {
                printf("not distinct\n");
                exit(0);
            }
        }
    }
    printf("distinct\n");
    return 0;
}