#include <stdio.h>
int main()
{
    int num, onum, rem, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    onum = num;
    while(num > 0)
    {
        rem = num % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact *= i;
        }
        sum += fact;
        num /= 10;
        
        /* while(i <= rem)
        {
            fact *= i;
        } */
        
    }
    if (sum == onum)
    {
        printf("%d is a Strong number\n", onum);
    }
    else
    {
        printf("%d is not a Strong number\n", onum);
    }
    return 0;
}