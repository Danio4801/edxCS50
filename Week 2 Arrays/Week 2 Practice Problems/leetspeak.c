#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

string get_word(string word);

int main(int argc, string argv[])
{
    string word = get_word();
}

string get_word(void)
{
    string word = get_string("Enter the word you want to convert: ");
    return word;
}
