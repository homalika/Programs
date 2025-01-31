#include <stdio.h>
#include<math.h>
int main()
{
    int n, on, sum, digit;
    printf("Enter n: ");
    scanf("%d", &n);
    on = n; // store original value
    if (n >= 1 && n <= 9) 
    {
        if (n == 1 || n == 7) {
            printf("%d is a Happy number\n", on);
        } else {
            printf("%d is not a Happy number\n", on);
        }
        return 0;
    }
    while(n != 1 && n != 4)
    {
        sum = 0;
        while(n > 0)
        {
            digit = n % 10;
            sum += pow(digit, 2);
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