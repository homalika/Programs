#include <stdio.h>
int main()
{
    int n;
    printf("Enter num of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int big = arr[0];
    for(int i = 1; i < n; i++)
    {
        if (arr[i] > big)
        {
            big = arr[i];
        }
    }
    printf("Largest element is %d\n", big);
    return 0;
}