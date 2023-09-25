#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    //prosba o podanie danych karty
    long cardNumber = get_long("Insert card number here: "); //prosba o podanie numeru karty
    printf("Your card number is: %li\n", cardNumber); //wypi1sanie na ekranie numeru karty
    //sprawdzenie przynaleznosci do banku
        //Ustalenie dlugosci znakow karty
            //sprawdzenei czy karta ma 13 15 lub 16 znakow (jezeli nie to jest nieprawdziwa, odrzucamy)
        //Determinacja czy karta jest prawdziwa
            //wyodrebnienie co drugiej cyfry z karty (zaczynajac od lewej strony)
                //pomnozenie kazdej z wartosci przez dwa i dodanie ich do siebie
            //wyodrebnienie co drugiej cyfry z karty (zaczynajac od prawej strony)
                //dodanie kazdej wyodrebnionej wartosci do siebie
                //dodanie sumy kazdej wyodrebnionej wartosci do siebie do sumy co drugiej cyfry z karty (zaczynajac od lewej strony)pomnozonej przez dwa
            //sprawdzenie
                //sprawdzenie czy mod 10 daje nam zero, jezeli tak karta jest prawdziwa
            //sprawdzenie do ktorego banku karta nalezy
                //tbc
}
