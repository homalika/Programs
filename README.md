# Programs
**1. Niven's Number**:

**Problem Statement**:
A Niven's number (also called a Harshad number) is an integer that is divisible by the sum of its digits. Your task is to write a program to determine whether a given number is a Niven's number or not.

**Input**:
A single integer n (1 ≤ n ≤ 10^9).

**Output**:
If the number is a Niven's number, print:
n is Niven's number.
If the number is not a Niven's number, print:
n is not a Niven's number.

**Algorithm**:
1. Input the number: Read an integer n from the user.
2. Store the original number: Create a variable on and assign the value of n to it (this helps for comparison in the final output).
3. Sum the digits of the number:
   Initialize a variable sum to store the sum of digits.
   Extract each digit by using the modulus operator (n % 10), and add it to sum.
   Remove the last digit of n by performing integer division (n /= 10).
4. Check if the number is divisible by the sum of its digits:
   If on % sum == 0, the number is a Niven's number.
   Otherwise, it is not a Niven's number.
5. Output the result: Print whether the number is a Niven's number or not based on the divisibility check.

**Code**:
```c
#include <stdio.h>
int main()
{
    int n, on, rem = 0, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    on = n;
    while( n > 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    if (on % sum == 0)
    {
        printf("%d is Niven's number.\n", on);
    }
    else
    {
        printf("%d is not a Niven's number.\n", on);
    }
    return 0;
}
```

**Sample input**:
```
18
```

**Sample output**:
```
18 is Niven's number.
```
