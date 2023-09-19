#include <cs50.h>
#include <stdio.h>

//-----------------------
int get_starting_size(void);
int get_ending_size(int startingPopulationSize);
//-----------------------
int main(void)
{
    // TODO: Prompt for start size
    int startingPopulationSize = get_starting_size();
    printf("The starting population size is equal to: %i.\n", startingPopulationSize);

    // TODO: Prompt for end size
    int endingPopulationSize = get_ending_size(startingPopulationSize);
    printf("The ending population size is equal to: %i.\n", endingPopulationSize);

    // TODO: Calculate number of years until we reach threshold
    int currentPopulationSize = startingPopulationSize;
    int n = 0; // number of years
    while (currentPopulationSize < endingPopulationSize)
    {
        currentPopulationSize = currentPopulationSize + (currentPopulationSize / 3) - (currentPopulationSize / 4);
        n++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", n);
}

//-----------------------
int get_starting_size(void)
{
    int startingPopulationSize;
    do
    {
        startingPopulationSize = get_int("Please, enter the starting population size: ");
    }
    while (startingPopulationSize < 9);
    return startingPopulationSize;
}

//-----------------------
int get_ending_size(int startingPopulationSize)
{
    int endingPopulationSize;
    do
    {
        endingPopulationSize = get_int("Please, enter the ending population size: ");
    }
    while (startingPopulationSize > endingPopulationSize);
    return endingPopulationSize;
}
