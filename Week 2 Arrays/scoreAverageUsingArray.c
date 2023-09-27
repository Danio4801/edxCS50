#include <cs50.h>
#include<stdio.h>

float average(int array[]);

const int N = 3;

int main(void)
{
    int scores[N];
    for(int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f \n", average(N, scores)); // by function average we are passing in the whole array of scores and before that N - configuration info about "length" of array, in the function it will be called length indeed
}

float average(int length, int scores[])
{
    int sum = 0;
    for(int i = 0; i < length;i++)
    {
        sum += scores[i];
    }
    return sum / (float) length ;
}
