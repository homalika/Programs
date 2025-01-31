/*
Convert decimal to hexadecimal :
input : 255
output : FF
*/
#include <stdio.h>
void dec_to_hex(int n)
{
    int hex[32]; // maximum storage area of any integer is 32 bits 
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
        int r = n % 16;
        if (r < 10)  // since we want characters after 9 -- A to F, we consider this condition
        {
            hex[i] = r + '0';
        }
        else
        {
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
int main()
{
    int d;
    printf("Enter the decimal number : ");
    scanf("%d", &d);
 // printf("Hexadecimal equivalent is : %x\n", d); --  %x used to convert decimal to hexa
    dec_to_hex(d);
    return 0;
}