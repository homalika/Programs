#include <stdio.h>
int main()
{
    int num = 100; //100 is in num
    int *ptr = &num;// int type of 100 is 
    printf("%d, %u\n", num, &num); //pointer value 
    printf("%p\n", num);
    printf("%p\n", &num); //memory address
    printf("%p\n",ptr);
    printf("\n");
    printf("Example 2\n");
    int nums[6] = {100, 200, 500, 800, 300, 600};
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("%p \n", &nums[i]);
    }
    return 0;
}