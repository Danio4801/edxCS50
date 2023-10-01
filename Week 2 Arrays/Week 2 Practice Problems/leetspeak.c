#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string replace(string word);

int main(int argc, string argv[])
{
    if (argc < 2 || argc > 2)
    {
        printf("Error. Invalid number of arguments.\n");
        return 1;
    }
    else
    {
        string word = argv[1];
        word = replace(word);
        printf("%s\n", word);
        return 0;
    }
}

string replace(string word)
{
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        switch (word[i])
        {
            case 'a':
                word[i] = '6';
                break;
            case 'e':
                word[i] = '3';
                break;
            case 'i':
                word[i] = '1';
                break;
            case 'o':
                word[i] = '0';
                break;
            default:;
        }
    }
    return word;
}
