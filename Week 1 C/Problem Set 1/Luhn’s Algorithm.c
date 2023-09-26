#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int cardLength(long cardNumber);
bool checkSum(long cardNumber, int lengthOfTheCardNumber);
void cardIssuer(long cardNumber, int lengthOfTheCardNumber);

int main(void)
{
    long cardNumber = get_long("Insert card number here: ");           // card number request
    int lengthOfTheCardNumber = cardLength(cardNumber);                // check the number of characters on the card
    bool checkSumStatus = checkSum(cardNumber, lengthOfTheCardNumber); // check if the card is valid
    if (checkSumStatus == false)                                       // if check failed then output: invalid
    {
        printf("INVALID\n");
    }
    else // if check passed then - issuer determination (amex, visa or master)
    {
        cardIssuer(cardNumber, lengthOfTheCardNumber);
    }
    return 0;
}
int cardLength(long cardNumber)
{
    int lengthOfTheCardNumber = 0;
    while (cardNumber > 0)
    {
        lengthOfTheCardNumber++;
        cardNumber /= 10;
    }
    return lengthOfTheCardNumber;
}
bool checkSum(long cardNumber, int lengthOfTheCardNumber)
{
    int total = 0;
    bool czyParzysta = false;
    while (cardNumber > 0)
    {
        int currentlyLastDigit = cardNumber % 10; // pamietamy ze %10 daje nam ostatnia cyfre
        if (czyParzysta)
        {
            currentlyLastDigit *= 2;
            if (currentlyLastDigit > 9)
            {
                currentlyLastDigit = (currentlyLastDigit % 10) + 1;
            }
        }
        total += currentlyLastDigit;
        czyParzysta = !czyParzysta;
        cardNumber /= 10; // pamietamy ze podzial /10 zmiennej pozwala usunac skrajnie prawa cyfre
    }
    return total % 10 == 0;
}
void cardIssuer(long cardNumber, int lengthOfTheCardNumber)
{
    int firstDigit, firstTwoDigits;

    if (lengthOfTheCardNumber == 15)
    {
        firstTwoDigits = (int) (cardNumber / 10000000000000);
        if (firstTwoDigits == 34 || firstTwoDigits == 37)
        {
            printf("AMEX\n");
            return;
        }
    }
    else if (lengthOfTheCardNumber == 16)
    {
        firstTwoDigits = (int) (cardNumber / 100000000000000);
        if (firstTwoDigits >= 51 && firstTwoDigits <= 55)
        {
            printf("MASTERCARD\n");
            return;
        }
        firstDigit = (int) (cardNumber / 1000000000000000);
        if (firstDigit == 4)
        {
            printf("VISA\n");
            return;
        }
    }
    else if (lengthOfTheCardNumber == 13)
    {
        firstDigit = (int) (cardNumber / 1000000000000);
        if (firstDigit == 4)
        {
            printf("VISA\n");
            return;
        }
    }
    printf("INVALID\n"); // If none of the conditions match, the issuer is undetermined
}
// MASTERCARD 16 DIGITS STARTS WITH 51, 52, 53, 54 OR 55
// VISA 13 OR 16 DIGITS STARTS WITH 4
// AMEX 15 DIGITS STARTS WITH 34 OR 37
