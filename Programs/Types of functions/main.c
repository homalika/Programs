#include <stdio.h>
void hi() //no arguments and no return value
{
    printf("Good morning!\n");
}

void sum(int a, int b)  //with arguments and no return value
{
    int add = a + b;
    printf("Summation : %d\n", add);
}

int mul(int a, int b)  //with arguments and return value
{
    return a * b;
}

int sub(int a, int b)  //with arguments and no return value
{
    int x = a - b;
    printf("Subtraction : %d\n", x);
}

int main()
{
    int a = 5, b = 10;
    hi();
    sum(a, b);
    int res = mul(a, b);
    printf("Product : %d\n", res);
    sub(a, b);
    return 0;
}