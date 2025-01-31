#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("Before Swap : %d %d\n", a, b);
    a = (a + b) - (b = a); // method 1
    printf("After Swap : %d %d", a, b);
    return 0;
}

/* method 2
if (b != 0 && a != 0)
{
    a = a * b;
    b = a / b;
    a = a / b;
    printf("After swap : %d %d", a, b);
}
else
{
    printf("Enter non zero numbers\n");
}
*/