#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    // First, we total up the hours saved in the array into a new variable
    float totalHours = 0;
    for (int i = 0; i < weeks; i++)
    {
        totalHours += (float) hours[i];
    }

    // T (ascii 84) for total hours
    // A (ascii 65) for average per week
    // Depending on the value of output, we return either  sum, or the average number of hours.
    if (output == 84)
    {
        return totalHours;
    }
    else if (output == 65)
    {
        for (int i = 0; i < weeks; i++)
        {
            return (totalHours / (float) weeks);
        }
    }
    else
    {
        printf("An error occured");
    }
    return -1;
}
