#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int val = 0;
    while (n != 0)
    {
        int rem = n % 10;
        if (rem > val)
        {
            val = rem;
        }
        n /= 10;
    }
    printf("Largest digit is %d\n", val);
    return 0;
}
