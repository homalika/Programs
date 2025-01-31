#include <stdio.h>
int main()
{
    // left shift and right shift
    int right = 6 >> 2;
    int left = 6 << 2;
    printf("Right shift : %d\n", right);
    printf("Left shift : %d\n", left);
    // ~ (tilde) symbol - complement or bit wise not operation
    // not operation in bitwise gives high recurring values so use unsigned datatype
    unsigned int x = 1; 
    printf("%d \n", ~x); // %d is signed -- always gives negative value
    printf("%u \n", ~x); // %u is unsigned
    return 0;
}