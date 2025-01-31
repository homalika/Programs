#include <stdio.h>
int main()
{
    int wt;
    printf("Enter weight: ");
    scanf("%d", &wt);
    if (wt == 0)
    {
        printf("Estd time : 0 minutes \n");
    }
    else if (wt > 0 && wt <= 2000)
    {
        printf("Estd time : 25 minutes \n");
    }
    else if (wt > 2000 && wt <= 4000)
    {
        printf("Estd time : 35 minutes \n");
    }
    else if (wt > 4000 && wt <= 7000)
    {
        printf("Estd time : 45 minutes \n");
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}
