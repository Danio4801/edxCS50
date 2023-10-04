#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Function prototypes
bool argument_count_verification(int argc);
string get_encryption_key(string argv[]);
string get_plaintext(void);
void encryption(string message, string key);

int main(int argc, string argv[])
{
    // arg count verification
    if ((argument_count_verification(argc)) == 1) // Checking if the number of command-line arguments is correct
    {
        return 1;
    }

    // key prompt
    const string errorMessage = "error";
    string key = get_encryption_key(argv); // This function validates the key;  we're passing whole array.
    int errorStatus = 0;
    for (int i = 0; i < 5; i++) // We're checking whether or not the key is equal to error
    {
        if (errorMessage[i] == key[i])
        {
            errorStatus++;
        }
        if (errorStatus == 5)
        {
            return 1;
        }
    }

    // text prompt
    string message = get_plaintext();

    // encyption
    encryption(message, key);
    return 0;
}

bool argument_count_verification(int argc)
{
    if (argc != 2)
    {
        printf("Wrong number of command line arguments.\n");
        return true; // Returning true indicates an error
    }
    else
    {
        return false; // Returning false indicates success
    }
}

string get_encryption_key(string argv[])
{
    const string errorMessage = "error";

    string key = argv[1]; // first argument in command line is the encrypiton key

    if (strlen(key) != 26) // if the key length != 26 characters, then error
    {
        printf("Key must contain 26 characters.\n"); // error information (output)
        key = errorMessage;
        return key; // returning error
    }

    for (int i = 0; i < 26; i++) // inside this loop we check whether all characters are alphabetical (or not)
    {
        if ((isalpha(key[i])) == false)
        {
            key = errorMessage;
            return key; // returning error
        }
    }

    for (int i = 0; i < 26;
         i++) // this part of the code check for the same characters inside key, all characters inside the key must be uniqe
    {
        if (isalpha(argv[1][i]))
        {
            for (int j = 0; j < i; j++)
            {
                if ((argv[1][i]) == (argv[1][j]))
                {
                    printf("Key must contain unique characters.\n");
                    key = errorMessage;
                    return key;
                }
            }
        }
        else
        {
            key = errorMessage;
            return key;
        }
    }
    return key;
}

string get_plaintext(void)
{
    string message = get_string("plaintext: "); // prompt for plaintext
    if (strlen(message) <= 0)                   // if message is empty
    {
        printf("Error, code can't convert empty message.\n"); // error information (output)
    }
    return message;
}

void encryption(string message, string key)
{
    const int ascii_upper = 65;
    const int ascii_lower = 97;

    printf("ciphertext: ");
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        if (isalpha(message[i])) // if isalpha return true
        {
            if (isupper(message[i])) // if it's  capital letter
            {
                int letterVariable = message[i] - 65;      // Calculate the index in the key
                message[i] = toupper(key[letterVariable]); // Preserve uppercase in ciphertext
            }
            else
            {
                int letterVariable = message[i] - 97;      // Calculate the index in the key
                message[i] = tolower(key[letterVariable]); // Preserve lowercase in ciphertext
            }
        }
        printf("%c", message[i]); // Print the character
    }
    printf("\n");
}
