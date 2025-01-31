#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter values :");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before Swap : %d %d %d \n", a, b, c);
    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);
    printf("After Circular Swap : %d %d %d\n", a, b, c);
    return 0;
}