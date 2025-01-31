// 0, 0, 7, 6, 14, 12, 21, 18,...
// 7*0, 6*0, 7*1, 6*1, 7*2, 6*2,...
//Find nth term

#include <stdio.h>
int main()
{
    int n, term;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n % 2 == 1)
    {
        term = 7 * (n/2);
    }
    else
    {
        term = 6 * (n/2 - 1);
    }
    printf("The %d th term is :  %d\n", n, term);
    return 0;
}
