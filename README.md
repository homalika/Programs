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
### 13. Estimated Time:
Write a C program that takes an integer input representing weight and determines the estimated time required based on the given weight conditions. If the weight is not within the valid range, the program should display an "Invalid input" message.

**Algorithm**:
1. Declare an integer variable wt.
2. Prompt the user to enter the weight.
3. Read the input value and store it in wt.
4. Check the weight range and print the estimated time:
   - If wt == 0, print "Estd time : 0 minutes"
   - If wt is between 1 and 2000, print "Estd time : 25 minutes"
   - If wt is between 2001 and 4000, print "Estd time : 35 minutes"
   - If wt is between 4001 and 7000, print "Estd time : 45 minutes"
   - Otherwise, print "Invalid input"
5. End the program.

**Code**:
```c
#include <stdio.h>
int main()
{
    int wt;
    printf("Enter weight: ");
    scanf("%d", &wt);
    if (wt == 0){
        printf("Estd time : 0 minutes \n");
    }
    else if (wt > 0 && wt <= 2000){
        printf("Estd time : 25 minutes \n");
    }
    else if (wt > 2000 && wt <= 4000){
        printf("Estd time : 35 minutes \n");
    }
    else if (wt > 4000 && wt <= 7000){
        printf("Estd time : 45 minutes \n");
    }
    else{
        printf("Invalid input\n");
    }
    return 0;
}
```
**Input**:
```
Enter weight: 1500
```
**Output**:
```
Estd time : 25 minutes
```
### 14. Even Numbers:
Write a C program that takes two integers as input representing a range and finds all even numbers within that range. The program should also calculate the sum of these even numbers and display the result.

**Algorithm**:
1. Declare three integer variables: m, n (for the range) and sum (initialize to 0).
2. Prompt the user to enter the range values m and n.
3. Read the values of m and n.
4. Print the message "Even numbers in given range are: ".
5. Use a for loop from m to n:
   - If the number is even (i % 2 == 0), print it and add it to sum.
6. Print the total sum of all even numbers found.

**Code**:
```c
#include <stdio.h>
int main(){
    int m, n, sum = 0;
    printf("Enter range: ");
    scanf("%d %d", &m, &n);
    printf("Even numbers in given range are: ");
    for (int i = m; i <= n; i++){
        if (i % 2 == 0){
            sum += i;
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("Summated value is: %d", sum);
    return 0;
}
```
**Input**:
```
Enter range: 2 10
```
**Output**:
```
Even numbers in given range are: 2 4 6 8 10 
Summated value is: 30
```
### 15. Factorial Using Recursion:
Write a C program that takes an integer as input and calculates its factorial using a recursive function.

**Algorithm**:
1. Define a recursive function fact(int n) that:
  - Returns 1 if n is 0 or 1 (since 0! = 1! = 1).
  - Otherwise, returns n * fact(n - 1).
2. In main(): Declare an integer variable a.
  - Prompt the user to enter a number.
  - Read the value into a.
  - Call fact(a) to compute the factorial and print the result.

**Code**:
```c
#include <stdio.h>
int fact(int n){
    if (n == 0 || n == 1){
        return n;
    }
    return n * fact(n - 1);
}
int main(){
    int a;
    printf("Enter n : ");
    scanf("%d", &a);
    printf("Factorial of %d is : %d\n", a, fact(a));
    return 0;
}
```
**Input**:
```
Enter n : 5
```
**Output**:
```
Factorial of 5 is : 120
```
### 16. Fibonacci Using Recursion:
Write a C program to find the nth Fibonacci number using recursion and display the Fibonacci series up to n terms.

**Algorithm**:
1. Define a recursive function fib(int n):
   - If n == 0, return 0.
   - If n == 1, return 1.
   - Otherwise, return fib(n-1) + fib(n-2).
2. In main(): Declare an integer n.
   - Prompt the user to enter n.
   - Read the value of n.
   - Print the nth Fibonacci number using fib(n).
   - Print the Fibonacci series up to n terms by calling fib(i) inside a loop.

**Code**:
```c
#include <stdio.h>
int fib(int n){
    if (n == 0 || n == 1){
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("%dth Fibonacci is : %d\n", n, fib(n));
    printf("Fibonacci Series is : ");
    for(int i = 0; i < n; i++){
        printf("%d  ", fib(i));
    }
    return 0;
}
```
**Input**:
```
Enter n : 7
```
**Output**:
```
7th Fibonacci is : 13
Fibonacci Series is : 0  1  1  2  3  5  8  
```
### 17. Finding Missing Number:
iven an array of size (n-1) containing distinct integers from the range [1, n], find the missing number.

**Algorithm**:
1. Calculate the expected sum of first n natural numbers using the formula: sum=𝑛(𝑛+1) / 2
2. Compute the actual sum of elements in the given array.
3. Subtract the actual sum from the expected sum to get the missing number.
4. Print the missing number.

**Code**:
```c
#include<stdio.h>
int findm(int arr[], int n){
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
```
**Input**:
```
Enter value of n: 8
Enter array: 1 3 2 6 7 8 4
```
**Output**:
```
Missing value is : 5
```
### 18. Find Series:
Find the nth value of the series: 1 + 2^2/2! + 3^3/3! + ... + n^n/n!. For a given integer n.

**Algorithm**:
1. Read the integer n (number of terms in the series).
2. Initialize sum = 0.0.
3. For each term i (from 1 to n):
   - Compute the numerator (i^i).
   - Compute the denominator (i! or factorial of i).
   - Add i^i / i! to the sum.
4. Print the final sum rounded to 3 decimal places.

**Code**:
```c
#include <stdio.h>  // there is issue in code
int main(){
    int n;
    double sum = 0.0;
    printf("Enter value of n: ");   //number of elements in the series
    scanf("%d", &n);
    double nr = 1.0;
    long long dr = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            nr *= i;
            dr *= j;
        }
        sum += nr/dr;
    }
    printf("Sum %.3f \n", sum);
    return 0;
}
```
**Input**:
```
Enter value of n: 5
```
**Output**:
```
Sum: 7.000
```
### 19. Find value of n:
Find the sum of the series: 1/2 + 3/4 + 5/6 + ...... + n/n+1 where n is given integer.

**Algorithm**:
1. Read the integer n (number of terms in the series).
2. Initialize sum = 0.0.
3. Iterate through odd values of i from 1 to n (i.e., 1, 3, 5, ..., n).
   - Compute each term as i / (i + 1).
   - Add it to sum.
4. Print the final sum rounded to 6 decimal places.

**Code**:
```c
#include <stdio.h>
int main(){
    int n;
    double sum = 0.0;
    printf("Enter value of n: ");   //number of elements in the series
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2){
        sum += (double)i / (i+1);
    }
    printf("Sum of series is: %.6f \n", sum);
    return 0;
}
```
**Input**:
```
Enter value of n: 12
```
**Output**:
```
Sum of series is: 4.103016
```
### 20. Flip Array d positions:
Given an array arr[] of size n, rotate its elements left in a cyclic order by d positions.

**Algorithm**:
1. Input the array arr[] of size n and the number of positions d.
2. Normalize d by setting d = d % n (if d > n).
3. Reverse the first d elements of the array.
4. Reverse the remaining n - d elements of the array.
5. Reverse the entire array to get the final rotated array.
6. Print the rotated array.

**Code**:
```c
#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int d = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < d; i++){
        int first = arr[0];
        for(int j = 0; j < n; j++){
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first;
    }
    printf("Flipped array is : ");
    for (int x = 0; x < n; x++){
        printf("%d ", arr[x]);
    }
    return 0;
}
```
**Input**:
```
arr[] = {1, 2, 3, 4, 5, 6}, d = 2
```
**Output**:
```
Flipped array is: 3 4 5 6 1 2
```
### 21. Floyd's Triangle:
Write a C program that takes an integer n as input and prints a Floyd's Triangle pattern with n rows. The numbers in the triangle should be consecutive, starting from 1.

**Algorithm**:
1. Declare an integer variable n.
2. Take user input for n.
3. Initialize an integer c = 1 to keep track of the numbers to be printed.
4. Use an outer loop from i = 1 to n (for each row):
  - Use an inner loop from j = 1 to i (to print numbers in each row): Print the current value of c. Increment c. Move to the next line after the inner loop.

**Code**:
```c
#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int c = 1;
    for(int i = 1; i<= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
```
**Input**:
```
Enter n: 5
```
**Output**:
```
Enter n: 5
1  
2 3  
4 5 6  
7 8 9 10  
11 12 13 14 15  
```
### 22. Geometric Series 2:
Write a C program to find the n-th term of the sequence: 0, 0, 7, 6, 14, 12, 21, 18,...
The pattern follows:
Odd index terms (1st, 3rd, 5th, ...) → 7 * k, where k = index / 2 (integer division).
Even index terms (2nd, 4th, 6th, ...) → 6 * (k - 1), where k = index / 2.

**Algorithm**:
1. Declare integer variables n and term.
2. Take input for n (the term position).
3. If n is odd, calculate the term as 7 * (n/2).
4. If n is even, calculate the term as 6 * (n/2 - 1).
5. Print the n-th term.

**Code**:
```c
#include <stdio.h>
int main(){
    int n, term;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n % 2 == 1){
        term = 7 * (n/2);
    } else {
        term = 6 * (n/2 - 1);
    }
    printf("The %d th term is :  %d\n", n, term);
    return 0;
}
```
**Input**:
```
Enter n: 5
The 5 th term is : 14
```
**Output**:
```
Enter n: 6
The 6 th term is : 12
```
### 23. Happy Number:
Write a C program to check whether a given number n is a Happy Number or not.
- A **Happy Number** is defined as a number that will eventually reach 1 when repeatedly replacing the number with the sum of the squares of its digits. If the process enters a cycle that includes 4, it will never reach 1 and is therefore not a Happy Number.

**Algorithm**:
1. Declare integer variables: n (input number), on (original number), sum, and digit.
2. Take input for n. Store the original value of n in on.
3. Base Case: If n is a single-digit number:
   - If n == 1 or n == 7, print that it is a Happy Number.
4. Otherwise, print that it is not a Happy Number and exit.
5. Loop until n becomes 1 (Happy Number) or 4 (Non-Happy Number): Initialize sum = 0. Extract each digit from n, square it, and add it to sum. Update n = sum.
6. If n becomes 1, print that the number is a Happy Number.
7. If n becomes 4, print that the number is not a Happy Number.

**Code**:
```c
#include <stdio.h>
#include<math.h>
int main(){
    int n, on, sum, digit;
    printf("Enter n: ");
    scanf("%d", &n);
    on = n; // store original value
    if (n >= 1 && n <= 9) {
        if (n == 1 || n == 7) {
            printf("%d is a Happy number\n", on);
        } else {
            printf("%d is not a Happy number\n", on);
        }
        return 0;
    }
    while(n != 1 && n != 4){
        sum = 0;
        while(n > 0){
            digit = n % 10;
            sum += pow(digit, 2);
            n /= 10;
        }
        n = sum;
    }
    if (n == 1){
        printf("%d is a Happy number\n", on);
    } else {
        printf("%d is not a Happy number\n", on);
    }
    return 0;
}
```
**Input**:
```
Enter n: 19
```
**Output**:
```
19 is a Happy number
```
### 24. Head, Tail Recursion:
Write a C program to demonstrate Head Recursion and Tail Recursion by printing numbers from 1 to n using Head Recursion and from n to 1 using Tail Recursion.

**Algorithm**:
1. Implement the Head Recursion function head(n): If n == 0, return. Recursively call head(n - 1). Print n.
2. Implement the Tail Recursion function tail(n): If n == 0, return. Print n. Recursively call tail(n - 1).
3. In the main() function:
   - Call head(6) and print the result.
   - Call tail(6) and print the result.

**Code**:
```c
#include <stdio.h>
void head(int n){  // Head recursion
    if(n == 0)
        return;
    head(n - 1);
    printf("%d ", n);
}
void tail(int n){ // Tail recursion
    if(n == 0)
        return;
    printf("%d ", n);
    tail(n - 1);
}
int main(){
    printf("Head recursion is : ");
    head(6);
    printf("\n\n");
    printf("Tail recursion is : ");
    tail(6);
    return 0;
}
```
**Output**:
```
Head recursion is : 1 2 3 4 5 6 
Tail recursion is : 6 5 4 3 2 1
```
### 25. Hollow Equilateral Triangle:
Write a C program to print a hollow pyramid pattern of & symbols for a given height n.

**Algorithm**:
1. Take input n (number of rows).
2. Use an outer loop from i = 1 to n:
   - Print spaces to align the pyramid (loop from j = 1 to n - i).
   - Use an inner loop to print & and spaces for the pyramid:
     - Print & if it is the first column (j == 1), last column (j == (2*i - 1)), or the last row (i == n).
     - Otherwise, print a space.
   - Move to the next line.

**Code**:
```c
#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            printf(" ");
        }
        for (int j = 1; j <= (2*i - 1); j++){
            if (j == 1 || i == n || j == (2*i - 1)){
            printf("&");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
```
**Input**:
```
Enter n: 5
```
**Output**:
```
    &    
   & &   
  &   &  
 &     & 
&&&&&&&&&
```
### 26. Hollow Square with Numbers:
Write a C program to print a hollow square pattern of size n × n, where the border contains column numbers (j) and the inside is hollow.

**Algorithm**:
1. Take input n (size of the square).
2. Use an outer loop from i = 1 to n (to print rows).
   - Use an inner loop from j = 1 to n (to print columns).
   - Print j if it is in the first row (i == 1), last row (i == n), first column (j == 1), or last column (j == n).
   - Otherwise, print a space " ".
3. Move to the next line after printing each row.

**Code**:
```c
#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(i == 1 || i == n || j == 1 || j == n)
            printf("%d",j);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
```
**Input**:
```
Enter n: 5
```
**Output**:
```
12345
1   5
1   5
1   5
12345
```
### 27. Hollow Square with Diagonals:
Write a C program to print a pattern of 'H' characters inside an n × n square, where:
  - The border of the square is made of 'H'.
  - The main diagonal and secondary diagonal (forming an 'X') are also filled with 'H'.

**Algorithm**:
1. Take input n (size of the square).
2. Use an outer loop from i = 1 to n (rows).
3. Use an inner loop from j = 1 to n (columns).
   - Print " H " if:
     - It's in the first or last row (i == 1 || i == n).
     - It's in the first or last column (j == 1 || j == n).
     - It's in the main diagonal (i == j).
     - It's in the secondary diagonal (i + j == n + 1).
   - Otherwise, print spaces (" ").
4. Move to the next line after printing each row.

**Code**:
```c
#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
           if ( i == 1 || i == n || j == 1 || j == n || i == j || i + j == n + 1){
                printf(" H ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}
```
**Input**:
```
Enter n: 5
```
**Output**:
```
 H  H  H  H  H 
 H  H     H  H 
 H     H     H 
 H  H     H  H 
 H  H  H  H  H 
```
### 28. Hollow square:
Write a C program to print a hollow square pattern using the character 'H', where:
  - The border of the square is filled with 'H'.
  - The inside of the square is hollow (empty spaces).

**Algorithm**:
1. Take input n (size of the square).
2. Use an outer loop from i = 1 to n (rows).
3. Use an inner loop from j = 1 to n (columns).
  - Print 'H' if:
   - It's in the first row (i == 1).
   - It's in the last row (i == n).
   - It's in the first column (j == 1).
   - It's in the last column (j == n).
  - Otherwise, print a space " ".
4. Move to the next line after printing each row.

**Code**:
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("H");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
```
**Input**:
```
Enter n: 5
```
**Output**:
```
HHHHH
H   H
H   H
H   H
HHHHH
```
### 29. Hollow Triangle:
Write a C program to print a hollow right-angled triangle pattern of numbers where:
  - The left and right edges of the triangle contain numbers.
  - The bottom row is fully filled with numbers.
  - The inside of the triangle is hollow (empty spaces).

**Algorithm**:
1. Take input n (height of the triangle).
2. Use an outer loop from i = 1 to n (for rows).
3. Use an inner loop from j = 1 to i (for columns).
   - Print j if:
     - It's in the last row (i == n).
     - It's in the first column (j == 1).
     - It's in the last column of the row (i == j).
   - Otherwise, print a space " ".
4. Move to the next line after printing each row.

**Code**:
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            if(i == n || i == j || j == 1) {
                printf("%d", j);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
```
**Input**:
```
Enter n: 5
```
**Output**:
```
1
12
1 3
1  4
12345
```
### 30. Largest digit in a num:
Write a C program to find the largest digit in a given number n.

**Algorithm**:
1. Take input n (a positive integer).
2. Initialize val = 0 to store the largest digit.
3. Use a while loop until n becomes 0:
   - Extract the last digit using rem = n % 10.
   - If rem is greater than val, update val = rem.
   - Remove the last digit using n /= 10.
4. Print val as the largest digit.

**Code**:
```c
#include <stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int val = 0;
    while (n != 0) {
        int rem = n % 10;
        if (rem > val) {
            val = rem;
        }
        n /= 10;
    }
    printf("Largest digit is %d\n", val);
    return 0;
}
```
**Input**:
```
Enter n: 83657
```
**Output**:
```
Largest digit is 8
```
### 31. Largest digit in num (Arrays):
Write a C program to find the largest digit in a given number. The program should take an integer input from the user and determine the largest digit present in the number.

**Algorithm**:
1. Start the program and take an integer input from the user.
2. Determine the number of digits using log10(n).
3. Extract each digit from the number and store it in an array.
4. Find the largest digit by iterating through the array.
5. Print the largest digit.

**Code**:
```c
#include <stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int dig = (int)log10(n);
    int arr[dig];
    for (int i = 0; i < dig; i++){
        int rem = n % 10;
        arr[i] = rem;
        n /= 10;
    }
    int big = arr[0];
    for(int i = 1; i < n; i++){
        if (arr[i] > big){
            big = arr[i];
        }
    }
    printf("Largest digit in given number is %d\n", big);
    return 0;
}
```
**Input**:
```
Enter number: 4785
```
**Output**:
```
Largest digit in given number is 8
```
### 32. Largest element in array:
Write a C program to find the largest element in an array. The program should take an integer input specifying the number of elements, accept the elements of the array, and determine the largest element.

**Algorithm**:
1. Start the program and take input for the number of elements in the array (n).
2. Declare an array of size n and take n integer inputs from the user.
3. Initialize a variable big with the first element of the array.
4. Traverse the array from the second element onwards. If any element is greater than big, update big.
5. After the loop, print the largest element.

**Code**:
```c
#include <stdio.h>
int main(){
    int n;
    printf("Enter num of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of array: ", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int big = arr[0];
    for(int i = 1; i < n; i++){
        if (arr[i] > big){
            big = arr[i];
        }
    }
    printf("Largest element is %d\n", big);
    return 0;
}
```
**Input**:
```
Enter num of elements in array: 5  
Enter 5 elements of array: 3 8 1 6 9  
```
**Output**:
```
Largest element is 9
```
### 33. Magic Number:
Write a C program to check whether a given number is a magic number or not. A number is considered a magic number if the sum of its digits is repeatedly calculated until a single-digit number is obtained, and the final result is 1.

**Algorithm**:
1. Start the program and take an integer input n.
2. Store the original number (on) for later use.
3. Repeat the following process until n becomes a single-digit number:
   - Set sum = 0.
   - Extract each digit of n and add it to sum.
   - Update n = sum.
4. If the final value of n is 1, print that it is a magic number. Otherwise, print that it is not a magic number.

**Code**:
```c
//1234 is magic number
#include <stdio.h>
int main(){
    int n, on, sum, digit;
    printf("Enter n: ");
    scanf("%d", &n);
    on = n;
    while(n >= 10){
        sum = 0;
        while(n > 0){
            digit = n % 10;
            sum += digit;
            n /= 10;
        }
        n = sum;
    }
    if (n == 1){
        printf("%d is a Happy number\n", on);
    } else {
        printf("%d is not a Happy number\n", on);
    }
    return 0;
}
```
**Input**:
```
Enter n: 1234
```
**Output**:
```
1234 is a Happy number
```
### 34. Mixture of Geometric series:
Write a C program to find the n-th term in the given number sequence: 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187, ...

**Algorithm**:
1. Take input n (position in sequence).
2. If n is odd (n % 2 == 1), compute the term as 2^(n/2).
3. If n is even (n % 2 == 0), compute the term as 3^((n/2) - 1).
4. Print the result.

**Code**:
```c
#include <stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    if (n%2==1){
        int a = pow(2,n/2);
        printf("%d ", a);
    } else {
        int b = pow(3,(n/2)-1);
        printf("%d ",b);
    }
    return 0;
}
```
**Input**:
```
Enter value of n: 16
```
**Output**:
```
2187
```
### 35. Nested Loops:
Write a C program that takes an integer n as input and prints an n x n square pattern where each element is the word "Hom", separated by spaces.

**Algorithm**:
1. Take input n (size of the square).
2. Use a nested loop to print the pattern:
 - Outer loop runs n times (rows).
 - Inner loop runs n times (columns) to print "Hom ".
3. Print a newline (\n) after each row.
4. End the program.

**Code**:
```c
#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            printf("Hom ");
        }
        printf("\n");
    }
    return 0;
}
```
**Input**:
```
Enter n: 3
```
**Output**:
```
Hom Hom Hom  
Hom Hom Hom  
Hom Hom Hom  
```
### 36. Nested, Tree Recursion:
Write a C program demonstrating nested recursion and tree recursion.

**Algorithm**:
For nested recursion:
1. If n > 100, return n - 10.
2. Otherwise, call nest(nest(n + 11)).
3. The recursion repeatedly increases n until it reaches above 100, then starts returning values.
For tree recursion:
1. If n == 0, return (base case).
2. Print n (preorder traversal: root, left, right).
3. Recursively call tree(n - 1) twice.

**Code**:
```c
#include <stdio.h>
int nest(int n){  // Nested recursion
    if (n > 100)
        return n - 10;
    return nest(nest(n + 11));
}
void tree(int n) // Tree recursion{
    if(n == 0)
        return;
    printf("%d ", n); // preorder traversal -- root, left, right
    tree(n - 1);
    tree(n - 1);
}
int main(){
    printf("Nested recursion result : %d\n\n", nest(95));
    printf("Tree recursion result : ");
    tree(3);
    return 0;
}
```
**Output**:
```
Nested recursion result : 91  
Tree recursion result : 3 2 1 0 0 1 0 0 2 1 0 0 1 0 0  
```
### 37. Niven's Number/ Harshad's Number:
A Niven's number (also called a Harshad number) is an integer that is divisible by the sum of its digits. Your task is to write a program to determine whether a given number is a Niven's number or not.

**Algorithm**:
1. Input the number: Read an integer n from the user.
2. Store the original number: Create a variable on and assign the value of n to it (this helps for comparison in the final output).
3. Sum the digits of the number:
   - Initialize a variable sum to store the sum of digits.
   - Extract each digit by using the modulus operator (n % 10), and add it to sum.
   - Remove the last digit of n by performing integer division (n /= 10).
4. Check if the number is divisible by the sum of its digits:
   - If on % sum == 0, the number is a Niven's number.
   - Otherwise, it is not a Niven's number.
5. Output the result: Print whether the number is a Niven's number or not based on the divisibility check.

**Code**:
```c
#include <stdio.h>
int main() {
    int n, on, rem = 0, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    on = n;
    while( n > 0){
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    if (on % sum == 0){
        printf("%d is Niven's number.\n", on);
    } else {
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
### 38. Pascal's Triangle:
Write a C program to print Pascal's Triangle of height n using loops and combinatorial logic.

**Algorithm**:
1. Take input n (number of rows in Pascal’s Triangle).
2. Use a nested loop structure:
  - Outer loop (i): Iterates from 0 to n-1, representing rows.
  - Inner loop (s): Prints spaces for alignment to maintain a triangle shape.
  - Inner loop (j): Computes and prints Pascal’s triangle values using binomial coefficients
     - C(i,j) = i! / j!×(i−j)!
     - If j == 0, set c = 1.
     - Otherwise, update c = c * (i - j + 1) / j using an iterative approach.
3. Print the computed values in a formatted manner (%4d ensures spacing).
​
**Code**:
```c
#include <stdio.h>
#include<math.h>
int main(){
    int n, c, i, j, s;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for (s = 1; s <= n - i; s++){
            printf("  ");
        }
        for(int j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                c = 1;
            }  else {
                c = c * (i - j + 1) / j;
            }
            printf("%4d", c);
        }
        printf("\n");
    }
    return 0;
}
```
**Input**:
```
Enter n: 5
```
**Output**:
```
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
```
### 39. Perpendicular:
Write a C program to print a hollow pyramid pattern using the & symbol, where the first and last rows are fully filled, and intermediate rows have & only at the edges.

**Algorithm**:
1. Take input n (height of the pyramid).
2. Use a nested loop to generate the pyramid structure:
  - Outer loop (i): Iterates through rows (from 1 to n).
  - First inner loop (j): Prints leading spaces to align the pyramid.
  - Second inner loop (j): Prints:
    - & if it's the first row, last row, or the pyramid edges (j == 1 or j == (2*i - 1)).
    - Space (' ') otherwise for the hollow effect.
3. Move to the next row using printf("\n").

**Code**:
```c
#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=n-i;j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2*i - 1); j++){
            if (i == 1 || i == n || j == i) {
            printf("&");
            } else {
               printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
```
**Input**:
```
Enter n: 5
```
**Output**:
```
    &    
   & &   
  &   &  
 &     & 
&&&&&&&&&
```
### 40. Pointers intro:
Write a C program to demonstrate pointers, memory addresses, and arrays with pointers.

**Algorithm**:
1. Declare an integer variable (num = 100) and initialize it.
2. Create a pointer (ptr) that stores the address of num.
3. Print: The value of num. The memory address of num. The pointer ptr (should match &num).
4. Declare an integer array (nums[6]) with six elements.
5. Use a loop to print the memory addresses of each element in nums[6].
6. End the program.

**Code**:
```c
#include <stdio.h>
int main(){
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
    for (i = 0; i < 6; i++){
        printf("%p \n", &nums[i]);
    }
    return 0;
}
```
**Output**:
```
100, 6422284
0x64e0
0x64e0
0x64e0 
```
### 41. Prime numbers in range:
Write a C program to print all prime numbers in a given interval (both inclusive). A prime number is a natural number greater than 1 that is only divisible by 1 and itself. The user provides two numbers, a and b, and the program outputs all prime numbers between a and b (both inclusive).

**Algorithm**:
1. Read two integers, a and b, from the user.
2. Define a function prime(n) to check if a number n is prime:
  - If n is less than or equal to 1, return 0 (not prime).
  - Initialize a loop to check divisibility from 2 to sqrt(n):
  - If n is divisible by any number in this range, return 0 (not prime).
  - If no divisor is found, return 1 (prime).
3. Loop through all numbers from a to b: If a number is prime (using prime(n) function), print it.

**Code**:
```c
#include <stdio.h>
int prime(int n) {
    if (n <= 1) return 0; // Not prime
    for (int i = 2; i * i <= n; i++) // -- alternate method while loop
    {
        if (n % i == 0) return 0; // Divisible, not prime
    }
    return 1; // Prime
}
int main() {
    int a, b;
    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);
    printf("Prime numbers between %d and %d are: ", a, b);
    for (int i = a; i <= b; i++) {
        if (prime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
```
**Input**:
```
Enter a and b : 2 15
```
**Output**:
```
Prime numbers between 2 and 15 are: 2 3 5 7 11 13
```
### 42. Remove Duplicates:
Write a C program to remove duplicate elements from a sorted array. Given an array arr[] of size n.  The duplicates should be removed in-place.

**Algorithm**:
1. Initialize an array arr[] and determine its size n.
2. If n is 0 or 1, print the array as it is (no duplicates to remove).
3. Initialize an index j = 0 to keep track of unique elements.
4. Loop through the array: If arr[i] is different from arr[i + 1], store arr[i] in arr[j] and increment j.
5. Print the unique elements up to index j.

**Code**:
```c
#include <stdio.h>
int main(){
    int arr[] = { 1, 1, 2, 2, 2, 3, 4, 4, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    if (n == 0 || n == 1) {
        printf("Array after removing duplicates: ");
        for(int i = 0; i < n; i++)  { 
            printf("%d ", arr[i]);
        }
        return 0;
    }
    int j = 0; // for index of next unique element 
    for(int i = 0; i < n; i++)    // for(int i = 0, i < n - 1, i++)
    {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    printf("The array after removing duplicates is : ");
    for(int  i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```
**Input**:
```
arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 4}  
```
**Output**:
```
The array after removing duplicates is: 1 2 3 4  
```
### 43. Reverse of a number:
Write a C program to reverse a given integer number. The program should take an integer input, reverse its digits, and display the reversed number.

**Algorithm**:
1. Take an integer input num from the user.
2. Initialize rev = 0 to store the reversed number.
3. Use a while loop to reverse the digits of num:
  - Extract the last digit using rem = num % 10.
  - Append it to rev using rev = rev * 10 + rem.
  - Remove the last digit using num /= 10.
4. Print the reversed number.

**Code**:
```c
#include <stdio.h>
int main(){
    int num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while(num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("Reverse : %d \n", rev);
    return 0;
}
```
**Input**:
```
Enter a number: 1234
```
**Output**:
```
Reverse : 4321
```
### 44. Second largest in array:
Write a C program to find the second largest element in an array. The user provides an array of at least two elements, and the program finds the second largest distinct number.

**Algorithm**:
1. Take an integer input n (number of elements in the array).
  - If n < 2, print an error message and exit.
2. Declare an array arr[n] and take n elements as input.
3. Initialize:
  - big = arr[0] (largest element)
  - bigg = -1 (second largest element)
4. Loop through the array:
   - If arr[i] > big: Set bigg = big . Update big = arr[i]
   - Else if arr[i] > bigg and arr[i] != big: Update bigg = arr[i]
5. If bigg == -1, print "No second largest element present."
6. Else, print bigg as the second largest element.

**Code**:
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter num of elements in array: ");
    scanf("%d", &n);
    if (n < 2){
        printf("Array must have atleast 2 elements\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d elements of array: ", n);
    for (int i = 0; i < n; i++)  {
        scanf("%d", &arr[i]);
    }
    int big = arr[0], bigg = -1;
    for(int i = 1; i < n; i++) {
        if (arr[i] > big) {
            bigg = big;
            big = arr[i];
        }
        else if (arr[i] > bigg && arr[i] != big) {
            bigg = arr[i];
        }
    }
    if (bigg == -1){
        printf("No second largest element present.\n");
    } else {
        printf("Second element is %d\n", bigg);
    }
    return 0;
}
```
**Input**:
```
Enter num of elements in array: 4  
Enter 4 elements of array: 5 6 6 4  
```
**Output**:
```
Second element is 5
```
### 45. String operations:
Write a C program to demonstrate basic string operations, including finding the length of a string, copying a string, concatenating two strings, and comparing two strings using standard library functions.

**Algorithm**:
1. Declare and initialize character arrays (char str[]).
2. Use strlen() to find and print the length of a string.
3. Use sizeof() to print the allocated size of a string.
4. Copy one string to another using strcpy().
5. Concatenate two strings using strcat().
6. Compare strings using strcmp() and print the result.

**Code**:
```c
#include<stdio.h>
#include<string.h>  //string directory
int main() {
    char str[20] = "abcdefghijkl";
    char strs[20] = "abcdefghijkl";
    char strss[20] = "abcd";
    char strr[20]; //for strcpy
    char con[20] = "mnopqrstuvwxyz"; //for strcat
    printf("Length of string str : %ld\n", strlen(str));
    printf("Size of string str is : %ld\n", sizeof(str));
    strcpy(strr, str);
    printf("Copied string strr from str is : %s\n", strr);
    strcat(str, con);
    printf("Concatenated string (str and con) is : %s\n", str);
    printf("String comparison of str and strs is %d\n", strcmp(str, strs));  // if both strings equal -- 0, else -- 1
    printf("String comparison of str and strss is %d\n", strcmp(str, strss)); //returns debug value
    return 0;
}
```
**Output**:
```
Length of string str : 12
Size of string str is : 20
Copied string strr from str is : abcdefghijkl
Concatenated string (str and con) is : abcdefghijklmnopqrstuvwxyz
String comparison of str and strs is 0
String comparison of str and strss is debug_value
```
### 46. Strong number/Krishna Murthy num:
Write a C program to check whether a given number is a Strong Number.
 - A Strong Number is a number where the sum of the factorials of its digits is equal to the original number.

**Algorithm**:
1. Take an integer input num from the user.
2. Store the original number onum for comparison.
3. Initialize sum = 0.
4. Extract each digit rem using num % 10:
  - Calculate the factorial of rem using a for loop.
  - Add the factorial to sum.
  - Remove the last digit from num using num /= 10.
6. If sum == onum, print "Strong number"; otherwise, print "Not a Strong number".

**Code**:
```
#include <stdio.h>
int main() {
    int num, onum, rem, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    onum = num;
    while(num > 0) {
        rem = num % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++)  {
            fact *= i;
        }
        sum += fact;
        num /= 10;  
    }
    if (sum == onum) {
        printf("%d is a Strong number\n", onum);
    } else {
        printf("%d is not a Strong number\n", onum);
    }
    return 0;
}
```
**Input**:
```
Enter the number: 145
```
**Output**:
```
145 is a Strong number
```
### 47. Swap first and last digits:
Write a C program to swap the first and last digits of a given number.

**Algorithm**:
1. Take an integer input n from the user.
2. Determine the number of digits using log10(n).
3. Extract the first digit using n / pow(10, digit).
4. Extract the last digit using n % 10.
5. Swap the first and last digits by forming a new number:
  - Multiply the last digit by pow(10, digit) to place it at the front.
  - Keep the middle digits unchanged using (n % (int)pow(10, digit) - last + one).
6. Print the swapped number.

**Code**:
```c
#include <stdio.h>
#include<math.h>
int main() {
    int n, one, last, digit, swap;
    printf("Enter n: ");
    scanf("%d", &n);
    digit = (int)log10(n); // to get number of digits in a number
    one = n / pow(10, digit);
    last = n % 10;
    swap = last * pow(10, digit) + (n % (int)pow(10, digit) - last + one);
    printf("Swapped number is : %d\n", swap);
    return 0;
}
```
**Input**:
```
Enter n: 1234
```
**Output**:
```
Swapped number is: 4231
```
### 48. Swap using pointers:
Write a C program to swap two numbers using pointers.

**Algorithm**:
1. Declare two integer variables a and b.
2. Declare two pointer variables p1 and p2.
3. Take input values for a and b.
4. Assign p1 = &a and p2 = &b to store addresses.
5. Use a temporary variable temp to swap the values: temp = *p1 ,*p1 = *p2, *p2 = temp
6. Print the swapped values of a and b.

**Code**:
```c
#include <stdio.h>
int main(){
    int a, b, *p1, *p2, temp; //pointer val of a is p1 and b is p2
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    temp = *p1;  // address of val in p1 to temp
    *p1 = *p2;
    *p2 = temp;
    printf("After swapping : \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
```
**Input**:
```
Enter the values of a and b: 5 10
```
**Output**:
```
After swapping:
a = 10
b = 5
```
### 49. Swap:
Write a C program to swap two numbers without using a temporary variable.

**Algorithm**:
1. Take two integer inputs a and b.
2. Print the values before swapping.
3. Use the swapping formula:
a = (a + b) - (b = a)
4. Print the swapped values of a and b

**Code**:
```c
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("Before Swap : %d %d\n", a, b);
    a = (a + b) - (b = a); // method 1
    printf("After Swap : %d %d", a, b);
    return 0;
}
```
### 50. Triangles:
Write a C program to print two different triangular patterns using the word "Hom" based on a given number n.

**Algorithm**:
1. Take input n (number of rows).
2. First Triangle (Descending Order)
  - Loop i from 1 to n:
    - Loop j from i to n:
      - Print "Hom " without a newline.
    - Move to the next line.
3. Print a newline for separation.
4. Second Triangle (Ascending Order)
  - Loop i from 1 to n:
    - Loop j from 1 to i:
      - Print "Hom " without a newline.
    - Move to the next line.
   
**Code**:
```c
#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for (int j=i;j<=n;j++) {
            printf("Hom ");
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            printf("Hom ");
        }
        printf("\n");
    }
    return 0;
}
```
**Input**:
```
Enter n: 4
```
**Output**:
```
Hom Hom Hom Hom 
Hom Hom Hom 
Hom Hom 
Hom 

Hom 
Hom Hom 
Hom Hom Hom 
Hom Hom Hom Hom 
```
### 51. Types of Functions:
Write a C program that demonstrates different types of functions by performing basic arithmetic operations and displaying a greeting message.

**Algorithm**:
1. Declare hi() function to print "Good morning!".
2. Declare sum(int a, int b) function to compute and print the sum of a and b.
3. Declare mul(int a, int b) function to return the multiplication of a and b.
4. Declare sub(int a, int b) function to compute and print the subtraction of a and b.
5. In main() function:=
  - Declare integers a = 5, b = 10.
  - Call hi().
  - Call sum(a, b).
  - Store the return value of mul(a, b) and print it.
  - Call sub(a, b).

**Code**:
```c
#include <stdio.h>
void hi() { //no arguments and no return value
    printf("Good morning!\n");
}
void sum(int a, int b) {  //with arguments and no return value
    int add = a + b;
    printf("Summation : %d\n", add);
}
int mul(int a, int b) {  //with arguments and return value
    return a * b;
}
int sub(int a, int b) { //with arguments and no return value
    int x = a - b;
    printf("Subtraction : %d\n", x);
}
int main() {
    int a = 5, b = 10;
    hi();
    sum(a, b);
    int res = mul(a, b);
    printf("Product : %d\n", res);
    sub(a, b);
    return 0;
}
```
**Output**:
```
Good morning!  
Summation : 15  
Product : 50  
Subtraction : -5  
```
### 52. Valley Count:
A hiker is walking on a trail, represented as a series of steps either uphill ('U') or downhill ('D'). A valley is defined as a sequence of consecutive steps below sea level (level 0), starting with a downhill step ('D') and ending when the hiker returns to sea level.
Given an integer N representing the number of steps and a string PATH representing the sequence of steps taken by the hiker, write a program to count the number of valleys encountered.

**Algorithm**:
1. Initialize:
  - level = 0 (Starting at sea level)
  - valley_count = 0 (Counter for valleys)
2. Iterate through each character in the PATH string:
  - If the step is 'U' (Upwards): 
     - Increase level by 1.
     - If level == 0, it means the hiker returned to sea level from a valley, so increment valley_count.
  - If the step is 'D' (Downwards):
     - Decrease level by 1.
3. After iterating through all steps, print the value of valley_count.

**Code**:
```c
#include <stdio.h>
int valley(long int steps, char *path){
    long int level = 0, vcount = 0; // Track level and valley coun
    for (long int i = 0; i < steps; i++) {
        if (path[i] == 'U') {
            level++;
            if (level == 0) { // Returning to sea level from a valley 
                vcount++;
            }
        }  else if (path[i] == 'D') {
            level--;
        }
    }
    return vcount;
}
int main() {
    long int steps;
    printf("Enter number of steps: ");
    scanf("%ld", &steps);
    char path[steps + 1]; // +1 for null character '\0'
    printf("Enter the path string: ");
    scanf("%s", path);
    int result = valley(steps, path);
    printf("Valleys are %d\n", result);
    return 0;
}
```
**Input**:
```
Enter number of steps: 8
Enter the path string: UDDDUDUU
```
**Output**:
```
Valleys are 1
```
