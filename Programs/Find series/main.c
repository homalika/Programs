//find nth val. let n = 5 of series 1 + 2^2/2! + 3^3/3! + ... + n

#include <stdio.h>
int main()
{
    int n;
    double sum = 0.0;
    printf("Enter value of n: ");   //number of elements in the series
    scanf("%d", &n);
    double nr = 1.0;
    long long dr = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            nr *= i;
            dr *= j;
        }
        sum += nr/dr;
    }
    printf("Sum %.3f \n", sum);
    return 0;
}