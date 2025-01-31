/* An array of integers arr[] of size n, the task is to flip the array of elements 
in a cyclic order of d positions
input : arr[] = {1, 2, 3, 4, 5, 6}  , d = 2
output : {3, 4, 5, 6, 1, 2}
*/ 

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int d = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < d; i++)
    {
        int first = arr[0];
        for(int j = 0; j < n; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first;
    }
    printf("Flipped array is : ");
    for (int x = 0; x < n; x++)
    {
        printf("%d ", arr[x]);
    }
    return 0;
}
