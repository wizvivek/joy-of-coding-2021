#include <stdio.h>
int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n, c = 0;
  printf("enter the chits value\n ");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("enter the chit needed to be found\n");
  scanf("%d", &n);
  for (int i = 0; i < 10; i++)
  {
    if (n == arr[i])
    {
      c++;
    }
  }

  printf("%d is the number of attemps", c);
  return 0;
}