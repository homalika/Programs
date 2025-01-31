#include <stdio.h>
void fun1(int n);
void fun2(int n); // function declaration done as its used in fun1 before its defined
// function definition
void direct(int n) // Direct recursion -- function calling itself(head / tail)
{
    if(n == 0)
        return;
    printf("%d ", n);
    direct(n - 1);
}
void fun1(int n)  // Indirect recursion
{
    if (n <= 0)
        return;
    printf("%d ", n);
    fun2(n - 1);
}
void fun2(int n)
{
    if(n <= 0)
        return;
    printf("%d ", n);
    fun1(n - 1);
}
int main()
{
    printf("Direct recursion : ");
    direct(6);
    printf("\n\n");
    printf("Indirect recursion : ");
    fun1(6);
    return 0;
}