 #include<cs50.h>
#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    
    pritnf("%c %c %c", c1, c2, c3); //this way we cant print c1, c2 and c3 variable as chars output: Hi!
    pritnf("%i %i %i", c1, c2, c3); //this way we cant print c1, c2 and c3 variable as numbers output: 72 73 33 0
    string s = "HI!";
    
    printf("%s\n",s);// output: HI!
    printf("%c\n",s[0]);// output: H
    printf("%c %c\n",s[0], s[2]);// output: H !
    printf("%i %i %i %i", s[0], s[1], s[2], s[3])// output: 72 73 33 0 ; 0 Is null, information that tells  us where is the end of string

    // We can make array of strings, for example
    string words[2]; // we're makin array of 2 strings
    words[0] = "Hi";
    words[1] = "Bye";
    printf("%c %c %c \n",words[0][0],words[0][1],words[0][2]);// words[position in array][position of char]
    printf("%c %c %c \n",words[1][0],words[1][1],words[1][2]);//

}
