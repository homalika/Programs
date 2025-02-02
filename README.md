# Programs
This repository consists of various C programming programs covering diverse topics like arrays, pointers, functions and more!

---
### 1. ASCII Values:
Print the characters and it's respective ASCII Values in a sequential manner.
- An ASCII value is a numeric code that represents a character in a computer. ASCII stands for American Standard Code for Information Interchange.
  
**Algorithm**:
1. Start the program.
2. Initialize a for loop that iterates from 0 to 133.
3. Inside the loop, use the printf function to print the character representation (%c) and its corresponding ASCII value (%d).
4. Print the output in a tabular format with proper spacing.
5. End the program.

**Code**:
```c
#include <stdio.h>
int main()
{
    for(int i = 0; i <= 133; i++)
    {
        printf("%c\t\t%d\n", i, i);
    }
    return 0;
}
/* A -- 65  to  Z -- 90
   a -- 97  to  z -- 122 */
```

### 2. Abecedarian Series:
Write a C program to generate an Abecedarian Series by inserting the second string (str2) after each character of the first string (str1). The output should display all possible combinations where each character of str1 is prefixed to str2.
- An abecedarian series is a sequence of items that appear in alphabetical order.

**Algorithm**:
1. Start the program.
2. Declare three character arrays: s1, s2, and out to store input strings and output.
3. Prompt the user to enter two strings:
   - s1 (a sequence of characters).
   - s2 (a fixed string to append).
4. Use a loop to iterate through each character of s1:
   - Construct a new string by appending s2 to each character of s1.
   - Store the result in out using snprintf() for safe string formatting.
   - Print the generated string.
5. End the program.

**Code**:
```c
#include <stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100];
    char out[100];
    printf("Enter the first string : ");
    scanf("%s", s1);
    printf("Enter the second string : ");
    scanf("%s", s2);
    for(int i = 0; i < strlen(s1); i++)
    {
        snprintf(out, sizeof(out), "%c%s ", s1[i], s2); // appending strings in empty array 'out'
        printf("%s ", out);
    }
    printf("\n");
    return 0;
}
```

**Input**:
```
Enter the first string: abcdef  
Enter the second string: ate  
```
**Output**:
```
aate bate cate date eate fate  
```

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
