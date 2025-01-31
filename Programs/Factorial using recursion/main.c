#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return n * fact(n - 1);
}
int main()
{
    int a;
    printf("Enter n : ");
    scanf("%d", &a);
    printf("Factorial of %d is : %d\n", a, fact(a));
    return 0;
}