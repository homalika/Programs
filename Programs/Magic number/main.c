//1234 is magic number
#include <stdio.h>
int main()
{
    int n, on, sum, digit;
    printf("Enter n: ");
    scanf("%d", &n);
    on = n;
    while(n >= 10)
    {
        sum = 0;
        while(n > 0)
        {
            digit = n % 10;
            sum += digit;
            n /= 10;
        }
        n = sum;
    }
    if (n == 1)
    {
        printf("%d is a Happy number\n", on);
    }
    else
    {
        printf("%d is not a Happy number\n", on);
    }
    return 0;
}