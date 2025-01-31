#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
           //if ( i == 1 || i == n || j == 1 || j == n || i == j || j == 2*i || i == 2*j)
           // works for n = 5
           if ( i == 1 || i == n || j == 1 || j == n || i == j || i + j == n + 1)
            {
                printf(" H ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}
