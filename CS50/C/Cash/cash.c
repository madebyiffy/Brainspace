#include <cs50.h> // Does not compile because this library is only accessable in the Harvard Code50 codespace
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int c);
int calculate_dimes(int c);
int calculate_nickels(int c);
int calculate_pennies(int c);

int main(void)
{
    int c = get_cents();

    int q = calculate_quarters(c);
    c = c - q * 25;

    int d = calculate_dimes(c);
    c = c - d * 10;

    int n = calculate_nickels(c);
    c = c - n * 5;

    int p = calculate_pennies(c);
    c = c - p * 1;

    int coins = q + d + n + p;

    printf("%i\n", coins);
}

int get_cents(void)
{
    int c;
    do
    {
        c = get_int("Cents Owed: "); // this function is from cs50.h
    }
    while (c < 0);
    return c;
}

int calculate_quarters(int c)
{

    int q = 0;
    while (c >= 25)
    {
        q++;
        c = c - 25;
    }
    return q;
}

int calculate_dimes(int c)
{
    int d = 0;
    while (c >= 10)
    {
        d++;
        c = c - 10;
    }
    return d;
}

int calculate_nickels(int c)
{
    int n = 0;
    while (c >= 5)
    {
        n++;
        c = c - 5;
    }
    return n;
}

int calculate_pennies(int c)
{
    int p = 0;
    while (c >= 1)
    {
        p++;
        c = c - 1;
    }
    return p;
}