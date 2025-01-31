#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        for (int j=i;j<=n;j++)
        {
            printf("Hom ");
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("Hom ");
        }
        printf("\n");
    }
    return 0;
}
