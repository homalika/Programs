// for series 1/2 + 3/4 + 5/6 + ...... + n where n = 12

#include <stdio.h>
int main()
{
    int n;
    double sum = 0.0;
    printf("Enter value of n: ");   //number of elements in the series
    scanf("%d", &n);
    /* 
    int numerator = 1;
    int denominator = 2;
    for (int i = 1; i <= n; i++)
    {
        sum += (double)numerator / denominator;
        numerator += 1;
        denominator += 2;
    }
    */
    for (int i = 1; i <= n; i += 2)
    {
        sum += (double)i / (i+1);
    }
    
    printf("Sum of series is: %.6f \n", sum);
    return 0;
}
