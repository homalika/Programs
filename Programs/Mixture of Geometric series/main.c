//1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187....
// 2^0, 3^0, 2^1, 3^1, 2^2, 3^2, 2^3, 3^3.... 
// n = 16 --- 2187

#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    if (n%2==1)
    {
        int a = pow(2,n/2);
        printf("%d ", a);
    }
    else
    {
        int b = pow(3,(n/2)-1);
        printf("%d ",b);
    }
    return 0;
}

/*  Algorithm:
input n
odd position --- n%2 == 1
                 term = pow(2,n/2)
even position --- n%2 == 0
                 term = pow(3,n/2)-1
*/