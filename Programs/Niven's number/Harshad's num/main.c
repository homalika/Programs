#include <stdio.h>
int main()
{
    int n, on, rem = 0, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    on = n;
    while( n > 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    if (on % sum == 0)
    {
        printf("%d is Niven's number.\n", on);
    }
    else
    {
        printf("%d is not a Niven's number.\n", on);
    }
    return 0;
}
