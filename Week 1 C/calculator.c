#include<stdio.h>
#include<cs50.h>

int main(void)
{
    long x = get_long("Please, enter the x: ");
    long y = get_long ("Please, enter the y: ");

     //printf("%li\n", x / y);//In this case, %li indicates that we are dealing with an integer, but it is a long integer.

    float z = (float) x / (float) y;
    printf("%.20f\n",z); //(floating point imprecision)

    //int overflow means "run out of bits"


}