#include<cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for(int i = 0, n = strlen(s); i < n; i++) // !!! please notice how me made int i and int n, n is calculated only once 
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}

for(int i = 0; i < strlen(s); i++) // !!! this loop is worse because we use the strlen function several times, even if the string length is the same in each iteration, we are clearly wasting resources, which makes no sense
