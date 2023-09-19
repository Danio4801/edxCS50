//double quotes are for strings, single quotes are for chars
// "||" means logical or
#include <cs50.h>
#include<stdio.h>

int main(void)
{
char agreeStatus = get_char("Do you agree? ");

if (agreeStatus == 'y' || agreeStatus == 'Y')
{
 printf("Agree \n");
}
else if (agreeStatus == 'n'|| agreeStatus == 'N' )
{
    printf("Not agreed\n");
}
}