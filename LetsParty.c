#include <stdio.h>
int main()
{
    int high_i = 0;
    float high_f = 0;
    int mr_int[6] = {560, 660, 590, 760, 480, 960};
    float mr_float[6] = {97.50, 66.00, 79.25, 76.55, 98.45, 96.40};
    char mr_char[6] = {'M', 'T', 'W', 't', 'F', 'S'};
    for (int i = 0; i < 6; i++)
    {
        high_i = (high_i > mr_int[i]) ? high_i : mr_int[i];
        high_f = (high_f > mr_float[i]) ? high_f : mr_float[i];
    }
    switch (high_i)
    {
    case 560:
    {
        printf("mr_int will party on monday\n");
        break;
    }
    case 660:
    {
        printf("mr_int will party on tuesday\n");
        break;
    }
    case 590:
    {
        printf("mr_int will party on wednesday\n");
        break;
    }
    case 760:
    {
        printf("mr_int will party on thursday\n");
        break;
    }
    case 480:
    {
        printf("mr_int will party on fridayy\n");
        break;
    }
    default:
    {
        printf("mr_int will party on saturday\n");
    }
    }
    if (high_f == 97.50)
    {
        printf("mr_float will party on monday\n");
    }
    else if (high_f == 66.0)
    {
        printf("mr_float will party on tuesday\n");
    }
    else if (high_f == 79.25)
    {
        printf("mr_float will party on wednesday\n");
    }
    else if (high_f == 76.55)
    {
        printf("mr_float will party on thursday\n");
    }
    else if (high_f==98.45)
    {
        printf("mr_float will party on friday\n");
    }
    else 
    {
        printf("mr_float will party on saturday\n");
    }
    return 0;
}