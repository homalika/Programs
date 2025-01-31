#include <stdio.h>
#include<math.h>
int main()
{
    int n, c, i, j, s;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        for (s = 1; s <= n - i; s++)
        {
            printf("  ");
        }
        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                c = 1;
            }
            else
            {
                c = c * (i - j + 1) / j;
            }
            printf("%4d", c);
        }
        printf("\n");
    }
    return 0;
}
