#include <cs50.h>
#include <stdio.h>

int get_size(void); //hint for the complier, this is how to convience complier to work
void print_grid(int size); //hint for the complier, this is how to convience complier to work  


int main(void)
{
int n  = get_size();
print_grid(n);
}


//IMPORTANT BELOW !!
int get_size(void){ //void means this function does NOT take any inputs;
//int at the begginig means we want the function to return the integer (so called the output).
    int n;
    do
    {
        n = get_int("Please, enter the number.\n");
    }
    while (n < 1);
    return n; //!! We are returning here the "n" value.
}

void print_grid(int size)//void at the beggining so it does not have any return value but it does take an argument (type of the input and the name of the variable )
{
    for (int i = 0; i < size; i++ )
        {
        for(int j = 0; j < size; j++)
            {
                printf("#");
            }
            printf("\n");
        }
}
