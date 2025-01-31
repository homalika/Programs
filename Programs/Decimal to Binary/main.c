/*
Convert decimal to binary :
input : 6 
output : 110
*/
#include <stdio.h>
void dec_to_bin(int n)
{
    int bin[32]; // maximum storage area of any integer is 32 bits 
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
int main()
{
    int d;
    printf("Enter the decimal number : ");
    scanf("%d", &d);
 // printf("Binary equivalent is : %b\n", d); --  %b used to convert decimal to binary
    dec_to_bin(d);
    return 0;
}