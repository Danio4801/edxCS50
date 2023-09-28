#include<cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Please, enter the string: ");
    int i = 0;
    while(s[i]!=0)
    {
        printf("Current char: %c \n", s[i]);
        printf("Length of the string: %i \n", (i + 1));
        i++;
    }
    printf("\n");
    printf("So the final length of the string without the Null character is: %i .\n", i );
}
