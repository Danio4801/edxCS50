#include<cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("What's your name?: ");
    
    int n = 0;
    while(name[n] != '\0')
    {
        n++;
    }
    printf("%i \n", n);
}
   