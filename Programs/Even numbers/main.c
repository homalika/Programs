#include <stdio.h>
int main()
{
    int m, n, sum = 0;
    printf("Enter range: ");
    scanf("%d %d", &m, &n);
    printf("Even numbers in given range are: ");
    for (int i = m; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("Summated value is: %d", sum);
    return 0;
}
