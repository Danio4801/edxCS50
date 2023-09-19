//decision making
 #include <cs50.h>
#include<stdio.h>

int main(void)
{
    int x = get_int("What's x?:\n");
    int y = get_int("What's y?:\n");

if (x < y) //space after using the word "if"
{
    printf("x is less then y\n");
}
else if (x > y)
{
    printf("x is greater then y\n");
}
else
{
    printf("x is equal to y\n");
}


}