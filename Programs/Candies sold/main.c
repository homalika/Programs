#include <stdio.h>
int main()
{
    int n = 15, k = 5;
    int m;
    printf("Enter number of candies: ");
    scanf("%d", &m);
    if (m >= 1 && m <= n - k)
    {
        printf("Number of candies sold : %d \n", m);
        printf("Number of candies available : %d \n", n - m);
    }
    else
    {
        printf("INVALID INPUT\n");
        printf("Number of candies left : %d \n", n);
    }
    return 0;
}