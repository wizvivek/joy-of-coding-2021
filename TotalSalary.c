#include <stdio.h>
int main()
{
    int mr_int[6] = {560, 660, 590, 760, 480, 960};
    float mr_float[6] = {97.50, 66.00, 79.25, 76.55, 98.45, 96.40};
    int i;
    float sumf = 0, avgi = 0, avgf = 0, sumi = 0;

    for (i = 0; i < 6; i++)
    {
        sumi = sumi + mr_int[i];
        sumf = sumf + mr_float[i];
    }
    avgf = (sumf / 6);
    avgi = (sumi / 6);
    printf("weekly salary of mr_int is %.2f and average is %.2f\n", sumi, avgi);
    printf("weekly salary of mr_float is %.2f and average is %.2f\n", sumf, avgf);

    return 0;
}