#include <stdio.h>
int main()
{
    int a, b, *p1, *p2, temp; //pointer val of a is p1 and b is p2
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    temp = *p1;  // address of val in p1 to temp
    *p1 = *p2;
    *p2 = temp;
    printf("After swapping : \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
// * is caller and & is callee
// *p1 prints value (%d) and p1 prints address (%p)