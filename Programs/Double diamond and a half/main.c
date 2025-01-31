#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 1; i <= 3; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if ((i+j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n  ");
    }
    return 0;
}
// n = 12 -- input