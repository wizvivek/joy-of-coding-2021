#include <stdio.h>
int main()
{
    int mr_int[6] = {560, 660, 590, 760, 480, 960};
    double mr_float[6] = {97.56, 66.00, 79.25, 76.55, 98.45, 96.40};
    char mr_char[6] = {'M', 'T', 'W', 't', 'F', 'S'};
    int i;
    printf("Mr. Int: ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", mr_int[i]);
    }
    printf("\n");
    printf("Mr. float: ");
    for (i = 0; i < 6; i++)
    {
        printf("%f ", mr_float[i]);
    }
    printf("\n");
    printf("Mr. char ");
  
    for(i=0;i<6;i++)
    {
        printf("%c ", mr_char[i]);
       
    }
    printf("\n");
    return 0;
}
