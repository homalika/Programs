//swap first and last digits

#include <stdio.h>
#include<math.h>
int main()
{
    int n, one, last, digit, swap;
    printf("Enter n: ");
    scanf("%d", &n);
    digit = (int)log10(n); // to get number of digits in a number
    one = n / pow(10, digit);
    last = n % 10;
    swap = last * pow(10, digit) + (n % (int)pow(10, digit) - last + one);
    printf("Swapped number is : %d\n", swap);
    return 0;
}
