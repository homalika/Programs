#include <stdio.h>
int main()
{
    int n;
    printf("Enter num of elements in array: ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Array must have atleast 2 elements\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d elements of array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int big = arr[0], bigg = -1;
    for(int i = 1; i < n; i++)
    {
        if (arr[i] > big)
        {
            bigg = big;
            big = arr[i];
        }
        else if (arr[i] > bigg && arr[i] != big)
        {
            bigg = arr[i];
        }
    }
    if (bigg == -1){
        printf("No second largest element present.\n");
    }
    else
    {
        printf("Second element is %d\n", bigg);
    }
    return 0;
}

//arr = { 5, 6, 6, 4 } --- output is 5

