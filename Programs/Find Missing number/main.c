/* 
An array[] of size n - 1 with integers in the range if [1, n]. Find the left
over number from the first n integers 
constraint : no duplicate or negative values occurred
input : arr[] = {1, 3, 2, 6, 7, 8, 4}
        n = 8 
output : 5
*/

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array : ");
    for(int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int a = (n * (n + 1))/2;
    printf("Missing value is : %d\n", a - sum);
    return 0;
}

/* Using function : 
#include<stdio.h>
int findm(int arr[], int n)
{
    int tot = n * (n+1)/2;
    int arrsum = 0;
    for(int i = 0; i < n - 1; i++){
        arrsum += arr[i];
    }
    return tot - arrsum;
}
int main(){
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int n = 8;
    int miss = findm(arr, n);
    printf("Missing number is : %d\n", miss);
    return 0;
}
*/