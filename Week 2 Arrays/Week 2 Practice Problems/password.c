#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(int argc, string argv[])
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    } 
    return 0;
}

bool valid(string password)
{
    bool lowerCase = false, upperCase = false, oneNumber = false, oneSymbol = false;
    for (int i = 0, n = strlen(password); i < n; i++)
    {
        if ((password[i] >= 97) && (password[i] <= 122))
        {
            lowerCase = true;
        }
        if ((password[i] >= 65) && (password[i] <= 90))
        {
            upperCase = true;
        }
        if ((password[i] >= 48) && (password[i] <= 57))
        {
            oneNumber = true;
        }

        if (((password[i] >= 33) && (password[i] <= 47)) || ((password[i] >= 58) && (password[i] <= 64)) ||
            ((password[i] >= 91) && (password[i] <= 96)) || ((password[i] >= 123) && (password[i] <= 126)))
        {
            oneSymbol = true;
        }
    }
    if (lowerCase && upperCase && oneNumber && oneSymbol)
    {
        return true;
    }
    return false;
}
/*
lowerCase from 97 to 122
upperCase from 65 to 90
numbers from 48 to 57

specialChar:
from 33 to 47 AND
from 58  64 AND
from 91 to 96 AND
from 123 to 126
*/
