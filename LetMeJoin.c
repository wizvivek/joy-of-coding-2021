#include <stdio.h>
void display(int arr1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}
int insersertion(int arr1[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr1[i + 1] = arr1[i];
    }
    arr1[index] = element;
    return 1;
}
int main()
{
    int arr1[20] = {2, 6, 10, 14, 18, 3, 7, 11, 15, 19};
    int size = 10, element = 22, index = 4, x;
    display(arr1, size);
    x = insersertion(arr1, size, element, 20, index);
    size += 1;

    display(arr1, size);
    if (x == 1)
    {
        printf("successfull insertion\n");
    }
    else
    {
        printf("unsuccessfull insertion\n");
    }
}