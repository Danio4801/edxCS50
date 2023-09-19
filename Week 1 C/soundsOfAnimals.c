//loop while and loop for
#include<cs50.h>
#include<stdio.h>

int main(void){

int counter = 0;
while (counter < 3)
{
    printf("Meow \n");
    counter++; //counter+=1;
}

for (int i = 0; i<3 ;i++) // word "get" means assigment
{
    printf("Hau hau!\n");
}

while (true) //we can also use while(1), while(0) or while(false);
{
    printf("Mooo!\n");
}

}