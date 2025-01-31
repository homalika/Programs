#include <stdio.h>
int nest(int n)  // Nested recursion
{
    if (n > 100)
        return n - 10;
    return nest(nest(n + 11));
}
void tree(int n) // Tree recursion
{
    if(n == 0)
        return;
    printf("%d ", n); // preorder traversal -- root, left, right
    tree(n - 1);
    tree(n - 1);
}

int main()
{
    printf("Nested recursion result : %d\n\n", nest(95));
    printf("Tree recursion result : ");
    tree(3);
    return 0;
}