#include <stdio.h>
int main()
{
    int num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while(num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("Reverse : %d \n", rev);
    return 0;
}
