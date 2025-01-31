/* Print prime numbers in given interval (both inclusive)
   input : 2, 15
   output : 2, 3, 5, 7, 11, 13
*/
#include <stdio.h>
int prime(int n) {
    if (n <= 1) return 0; // Not prime
    for (int i = 2; i * i <= n; i++) // -- alternate method while loop
    {
        if (n % i == 0) return 0; // Divisible, not prime
    }
    return 1; // Prime
/* -- using while loop:
int prime(int n){
    if(n <= 1) return 0;
    int i = 2;
    while(i * i <= n)
    {
        if(n % i == 0)
            return 0;
        i++;
    }
    return 1;
}  */
}
int main()
{
    int a, b;
    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);
    printf("Prime numbers between %d and %d are: ", a, b);
    for (int i = a; i <= b; i++) {
        if (prime(i)) 
        {
            printf("%d ", i);
        }
    }
    return 0;
}
