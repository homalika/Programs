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
int main(){
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
int main(){
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
### 3. Add Complex Numbers:
Write a C program to perform the summation of two complex numbers. The program should define a complex structure, implement a function to add two complex numbers, and display the result in the correct format.

**Algorithm**:
1. Define a Structure: Create a typedef struct named complexNumber with two integer members: real and img. Use complex as an alias for complexNumber.
2. Function for Addition: Define a function add(complex x, complex y) that takes two complex numbers and returns their sum.
   - Add the real parts of x and y and store them in add.real.
   - Add the imaginary parts of x and y and store them in add.img.
   - Return the sum as a complex type.
3. Main Function:
   - Declare three variables of type complex: x, y, and sums.
   - Initialize x and y with given values (real and imaginary parts).
   - Print the values of x and y.
   - Call the add() function and store the result in sums.
   - Print the sum of x and y in the format real + imag i.
4. End Program.

**Code**:
```c
#include <stdio.h>
typedef struct complexNumber{
    int real;
    int img;
} complex; 
complex add(complex x, complex y)
{
    complex add;
    add.real = x.real + y.real;
    add.img = x.img + y.img;
    return (add);
}
int main(){
    complex x, y, sums;
    x.real = 1;
    x.img = 2;
    y.real = 3;
    y.img = 4;
    printf("x = %d + %di\n", x.real, x.img);
    printf("y = %d + %di\n", y.real, y.img);
    sums = add(x, y);
    printf("Sum is : %d + %di\n", sums.real, sums.img);
    return 0;
}
```
**Input**:
```
x = 1 + 2i  
y = 3 + 4i  
```
**Output**:
```
x = 1 + 2i  
y = 3 + 4i  
Sum is : 4 + 6i  
```
### 4. Anagrams or not:
Write a C program to check if two given strings are anagrams. Two strings are anagrams if they contain the same characters in the same frequency but in different orders. The program should compare the lengths of the strings, count character occurrences, and determine if the counts match.

**Algorithm**:
1. Input Strings: Read two strings from the user.
2. Check Lengths: If the lengths of the two strings are not equal, they cannot be anagrams. Return false.
3. Count Character Occurrences:
   - Use an array of size 256 (for all ASCII characters).
   - Traverse both strings simultaneously:
     - Increment the count for characters in the first string.
     - Decrement the count for characters in the second string.
4. Check Final Counts:
   - If all counts in the array are 0, the strings are anagrams.
   - Otherwise, they are not anagrams.
5. Print Result: Display whether the strings are anagrams or not.

**Code**:
```c
#include <stdio.h>
#include<string.h>
#include<stdbool.h>
bool anagram(char s1[], char s2[])
{
    int c[256] = {0};
    int i;
    if(strlen(s1) != strlen(s2)){
        return false;
    }
    for(i = 0; s1[i] && s2[i]; i++)
    {
        c[(int)s1[i]]++;
        c[(int)s2[i]]--;
    }
    for(i = 0; i < 256; i++)
    {
        if(c[i] != 0){
            return false;
        }
    }
    return true;
}
int main(){
    char s1[100], s2[100];
    printf("Enter the first string : ");
    scanf("%s", s1);
    printf("Enter the second string : ");
    scanf("%s", s2);
    if(anagram(s1, s2))
    {
        printf("Anagrams\n");
    }else{
        printf("Not Anagrams\n");
    }
    return 0;
}
```
**Input**:
```
Enter the first string : silent  
Enter the second string : listen  
```
**Output**:
```
Anagrams  
```
### 5. Bit Manipulations:
Write a C program to demonstrate bitwise left shift (<<), bitwise right shift (>>), and bitwise NOT (~) operations. The program should show how these operations manipulate integer values at the binary level and print their results.

**Algorithm**:
1. Perform Left Shift (<<) : 6 << 2 shifts the bits of 6 two places to the left (equivalent to multiplying by 2^2).
2. Perform Right Shift (>>) : 6 >> 2 shifts the bits of 6 two places to the right (equivalent to dividing by 2^2).
3. Perform Bitwise NOT (~) : Apply ~ (tilde) to 1 and print the result using both signed (%d) and unsigned (%u) format specifiers to observe the differences.
4. Print the results.

**Code**:
```c
#include <stdio.h>
int main(){
    int right = 6 >> 2;
    int left = 6 << 2;
    printf("Right shift : %d\n", right);
    printf("Left shift : %d\n", left);
    unsigned int x = 1; 
    printf("%d \n", ~x);
    printf("%u \n", ~x);
    return 0;
}
```
**Output**:
```
Right shift : 1  
Left shift : 24  
-2  
4294967294  
```
### 6. Candies sold: 
A candy shop has 15 candies, with at least 5 always in stock. Customers can buy 1 to 10 candies. If the input is valid, update and display the stock; otherwise, print "INVALID INPUT" and show the total available candies.

**Algorithm**:
1. Initialize n = 15 (total candies) and k = 5 (minimum stock).
2. Take input for the number of candies (m).
3. Check if m is in the valid range (1 ≤ m ≤ n - k).
   - If valid:
     - Print the number of candies sold.
     - Update and print the remaining candies.
   - If invalid:
     - Print "INVALID INPUT".
     - Display the remaining candies (n).
4. End the program.

**Code**:
```c
#include <stdio.h>
int main(){
    int n = 15, k = 5;
    int m;
    printf("Enter number of candies: ");
    scanf("%d", &m);
    if (m >= 1 && m <= n - k)
    {
        printf("Number of candies sold : %d \n", m);
        printf("Number of candies available : %d \n", n - m);
    }else{
        printf("INVALID INPUT\n");
        printf("Number of candies left : %d \n", n);
    }
    return 0;
}
```
**Input**:
```
Enter number of candies: 7
```
**Output**:
```
Number of candies sold : 7 
Number of candies available : 8
```
### 7. Circular swap:
Write a program to perform a circular swap of three numbers without using a temporary variable (a → b → c → a), and display the values before and after swapping.

**Algorithm**:
1. Take input for three integers (a, b, c).
2. Print the values before swapping.
3. Perform circular swapping using arithmetic operations:
   - a = a + b + c
   - b = a - (b + c) (b gets original a)
   - c = a - (b + c) (c gets original b)
   - a = a - (b + c) (a gets original c)
4. Print the values after swapping.

**Code**:
```c
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter values :");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before Swap : %d %d %d \n", a, b, c);
    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);
    printf("After Circular Swap : %d %d %d\n", a, b, c);
    return 0;
}
```
**Input**:
```
Enter values: 3 5 7
```
**Output**:
```
Before Swap: 3 5 7
After Circular Swap: 5 7 3
```
### 8. Decimal to Binary:
Convert a decimal number to its binary equivalent using division by 2 and store the binary digits in an array before displaying them in reverse order.

**Algorithm**:
1. Take input for a decimal number (d). Check if d is 0:
2. If d == 0, print "0" and exit. Convert decimal to binary:
3. Repeatedly divide d by 2, storing the remainders in an array.
4. Print binary equivalent: Reverse the stored remainders to get the correct binary representation.

**Code**:
```c
#include <stdio.h>
void dec_to_bin(int n)
{
    int bin[32];
    int i = 0;
    if (n == 0){
        printf("0");
        return;
    }
    while(n != 0){
        bin[i] = n % 2;
        n /= 2;
        i++;
    }
    printf("Binary equivalent in funtion is :");
    for(int k = i - 1; k >= 0; k--)
    {
        printf("%d", bin[k]);
    }
    printf("\n");
}
int main(){
    int d;
    printf("Enter the decimal number : ");
    scanf("%d", &d);
    dec_to_bin(d);
    return 0;
}
```
**Input**:
```
Enter the decimal number: 6
```
**Output**:
```
Binary equivalent in function is: 110
```
### 9. Decimal to Hexadecimal:
Convert a decimal number to its hexadecimal equivalent using division by 16 and display the result in uppercase format (0-9, A-F).

**Algorithm**:
1. Take input for a decimal number (d).
2. Check if d is 0: If d == 0, print "0" and exit.
3. Convert decimal to hexadecimal:
   - Repeatedly divide d by 16, storing the remainders.
   - If remainder < 10, store it as a character '0'–'9'.
   - If remainder ≥ 10, convert it to 'A'–'F'.
4. Print hexadecimal equivalent: Reverse and display the stored values.

**Code**:
```c
#include <stdio.h>
void dec_to_hex(int n)
{
    int hex[32];
    int i = 0;
    if (n == 0){
        printf("0");
        return;
    }
    while(n != 0){
        int r = n % 16;
        if (r < 10){
            hex[i] = r + '0';
        }else {
            hex[i] = r - 10 + 'A';
        }
        n /= 16;
        i++;
    }
    printf("Hexadecimal equivalent in funtion is : ");
    for(int k = i - 1; k >= 0; k--)
    {
        printf("%c", hex[k]);
    }
    printf("\n");
}
int main(){
    int d;
    printf("Enter the decimal number : ");
    scanf("%d", &d);
    dec_to_hex(d);
    return 0;
}
```
**Input**:
```
Enter the decimal number: 255
```
**Output**:
```
Hexadecimal equivalent in function is: FF
```
### 10. Decimal to Octal:
Convert a decimal number to its octal equivalent using division by 8 and display the result.

**Algorithm**:
1. Take input for a decimal number (d).
2. Check if d is 0: If d == 0, print "0" and exit.
3. Convert decimal to octal: Repeatedly divide d by 8, storing the remainders.
4. Print octal equivalent: Reverse and display the stored values.

**Code**:
```c
#include <stdio.h>
void dec_to_oct(int n)
{
    int oct[32];
    int i = 0;
    if (n == 0){
        printf("0");
        return;
    }
    while(n != 0){
        oct[i] = n % 8;
        n /= 8;
        i++;
    }
    printf("Octal equivalent in funtion is : ");
    for(int k = i - 1; k >= 0; k--)
    {
        printf("%d", oct[k]);
    }
    printf("\n");
}
int main(){
    int d;
    printf("Enter the decimal number : ");
    scanf("%d", &d);
    dec_to_oct(d);
    return 0;
}
```
**Input**:
```
Enter the decimal number: 8
```
**Output**:
```
Octal equivalent in function is: 10
```
### 11. Direct, Indirect Recursion:
Write a C program to demonstrate Direct Recursion and Indirect Recursion using functions. In Direct Recursion, a function calls itself, whereas in Indirect Recursion, two functions call each other in a cyclic manner.

**Algorithm**:
1. Direct Recursion (Function direct(n))
- If n == 0, return (Base condition). Print n. Call direct(n-1).
2. Indirect Recursion (Functions fun1(n) and fun2(n))
- fun1(n):
   - If n <= 0, return (Base condition). Print n. Call fun2(n-1).
- fun2(n):
   - If n <= 0, return (Base condition). Print n. Call fun1(n-1).

**Code**:
```c
#include <stdio.h>
void fun1(int n);
void fun2(int n);
void direct(int n)
{
    if(n == 0)
        return;
    printf("%d ", n);
    direct(n - 1);
}
void fun1(int n)
{
    if (n <= 0)
        return;
    printf("%d ", n);
    fun2(n - 1);
}
void fun2(int n)
{
    if(n <= 0)
        return;
    printf("%d ", n);
    fun1(n - 1);
}
int main()
{
    printf("Direct recursion : ");
    direct(6);
    printf("\n\n");
    printf("Indirect recursion : ");
    fun1(6);
    return 0;
}
```
**Input**:
```
n = 6
```
**Output**:
```
Direct recursion : 6 5 4 3 2 1 
Indirect recursion : 6 5 4 3 2 1
```
### 12. Double Diamond and a Half:
Write a C program that takes an integer n as input and prints a pattern of * and spaces in a structured format using nested loops.

**Algorithm**:
1. Take an integer n as input.
2. Use a nested loop: Outer loop (i) runs for 3 rows. Inner loop (j) runs from 1 to n-1 (controls column printing).
3. Print * at positions where:
   - (i + j) % 4 == 0
   - i == 2 && j % 4 == 0
4. Print spaces at all other positions.
5. Move to the next line after each row with additional spaces to align properly.

**Code**:
```c
#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 1; i <= 3; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if ((i+j) % 4 == 0 || (i == 2 && j % 4 == 0)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n  ");
    }
    return 0;
}
```
**Input**:
```
Enter n: 12
```
**Output**:
```
  *   *   *   
*   *   *   
  *   *   *   
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
