#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    float tax = (tax_percent / 100) * bill_amount;
    float bill = bill_amount;
    int tip = tip_percent;

    printf("You will owe $%.2f each!\n", half(bill, tax, tip));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    bill += tax;
    float tip_amount = (tip / 100.0) * bill;
    bill += tip_amount;
    return bill / 2.0;
}
