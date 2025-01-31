#include <stdio.h>
void head(int n)  // Head recursion
{
    if(n == 0)
        return;
    head(n - 1);
    printf("%d ", n);
}
void tail(int n)  // Tail recursion
{
    if(n == 0)
        return;
    printf("%d ", n);
    tail(n - 1);
}
int main()
{
    printf("Head recursion is : ");
    head(6);
    printf("\n\n");
    printf("Tail recursion is : ");
    tail(6);
    return 0;
}