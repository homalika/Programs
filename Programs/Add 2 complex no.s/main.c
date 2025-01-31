/*
write code to print summation of two complex numbers 
input : 1 + 2i, 3 + 4i
output : 4 + 6i
*/ 
// typedef is type definition 
#include <stdio.h>
typedef struct complexNumber{
    int real;
    int img;
} complex; // -- alias name for complexNumber is complex here
complex add(complex x, complex y)
{
    complex add;
    add.real = x.real + y.real;
    add.img = x.img + y.img;
    return (add);
}
int main()
{
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