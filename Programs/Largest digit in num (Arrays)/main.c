#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int dig = (int)log10(n);
    int arr[dig];
    for (int i = 0; i < dig; i++)
    {
        int rem = n % 10;
        arr[i] = rem;
        n /= 10;
    }
    int big = arr[0];
    for(int i = 1; i < n; i++)
    {
        if (arr[i] > big)
        {
            big = arr[i];
        }
    }
    printf("Largest digit in given number is %d\n", big);
    return 0;
}