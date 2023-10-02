#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(int argc, string argv[])
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner
    if(score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if(score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
    return 0;
}

int compute_score(string word)
{
    int wordScore = 0; // Initialize the word score to zero.
    int whichLetter = 0; // Initialize the variable to store the letter's position in the alphabet.

    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (isalpha(word[i]))
        {
            word[i] = toupper(word[i]); // Convert the character to uppercase.
            word[i] -= 65; // Adjust the value to match with the POINTS array.
            whichLetter = word[i]; // Store the position of the letter in the alphabet.
            wordScore += POINTS[whichLetter]; // Add the corresponding point(s) to the word score.
        }
    }
    return wordScore; // Return the computed word score.
}
