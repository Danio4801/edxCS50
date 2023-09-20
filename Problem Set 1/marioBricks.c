#include <cs50.h>
#include <stdio.h>

int get_size(void);
void draw_heights_of_pyramids(int heights_of_pyramids);

int main(void)
{
    // ASK HOW TALL SHOULD PIRAMIDS BE?
    int heights_of_pyramids = get_size();
    // PIRAMIDS FACTORY HERE
    draw_heights_of_pyramids(heights_of_pyramids);
}

int get_size(void)
{
    int heights_of_pyramids;
    do
    {
        heights_of_pyramids = get_int("Hey user, how tall the pyramids should be?\n");
    }
    while (heights_of_pyramids < 1 || heights_of_pyramids > 8);
    return heights_of_pyramids;
}

void draw_heights_of_pyramids(int heights_of_pyramids)
{
    for (int i = 1; i <= heights_of_pyramids; i++)
    {
        // Spaces before the first set of bricks
        for (int j = heights_of_pyramids - i; j > 0; j--)
        {
            printf(" ");
        }
        // Bricks 1
        for (int b = 0; b < i; b++)
        {
            printf("#");
        }
        // Spaces between the sets of bricks
        printf("  ");
        // Bricks 2
        for (int x = 0; x < i; x++)
        {
            printf("#");
        }
        printf("\n"); // Move to the next line for the next row
    }
}
