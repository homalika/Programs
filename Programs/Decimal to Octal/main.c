/*
Convert decimal to octal :
input : 8, 16
output : 10, 20
*/
#include <stdio.h>
void dec_to_oct(int n)
{
    int oct[32]; // maximum storage area of any integer is 32 bits 
    // -- take 32 here coz its online compiler 
    // general size in normal compilers is 16 bits
    int i = 0;
    if (n == 0)
    {
        printf("0");
        return;
    }
    while(n != 0)
    {
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
int main()
{
    int d;
    printf("Enter the decimal number : ");
    scanf("%d", &d);
 // printf("Octal equivalent is : %o\n", d); --  %o used to convert decimal to octal
    dec_to_oct(d);
    return 0;
}