#include<stdio.h>
int main()
{
    int n,count;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the entered array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        count=0;

        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count+=1;
            }
            
        }
        printf("the frequency of %d is %d\n",arr[i],count);                           
    }
    return 0;


}
