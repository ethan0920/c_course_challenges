#include <stdio.h>

int main()
{
    float rain[5][12] = {
        { 6.7, 8.9, 2.5, 7.6, 5.6, 7.5, 9.3, 6.7, 3.5, 2.5, 7.8, 9.1 },
        { 3.7, 2.9, 0.5, 7.6, 5.6, 1.5, 6.35, 2.7, 1.2, 3.4, 7.6, 1.9 },
        { 6.7, 8.9, 3.5, 2.6, 5.6, 7.5, 9.3, 6.7, 3.5, 2.5, 7.8, 9.1 },
        { 6.7, 8.9, 2.5, 1.2, 5.6, 7.2, 9.3, 6.7, 3.5, 2.5, 7.8, 9.1 },
        { 6.7, 8.9, 2.5, 7.2, 1.06, 1, 0.2, 6.7, 3.5, 2.5, 7.8, 9.1 }
    };
    
    float yearTotal = 0;
    float monthTotal = 0;
    // get yearly output
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            monthTotal += rain[i][j]; // yearly total
            yearTotal += rain[i][j];
        }
        printf("Year %i\n", i + 1);
        printf("Monthly Average %.2f\n", (monthTotal / 12));
        monthTotal = 0;
    }
    
    printf("5 Year Rain Amt %.2f", yearTotal);
    printf("5 Year Average\n");
    printf("Avg: %.2f", (yearTotal / 5));
    return 0;
}
