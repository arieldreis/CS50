#include <stdio.h>
#include <cs50.h>

void calculate_cents(int cents);

int main(void){
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    } while(cents < 0);

    calculate_cents(cents);
}

void calculate_cents(int cents){
    int change = 0;
    while(cents >= 25){
        change++;
        cents -= 25;
    }
    while(cents >= 10){
        change++;
        cents -= 10;
    }
    while(cents >= 5){
        change++;
        cents -= 5;
    }
    while(cents >=  1){
        change++;
        cents -= 1;
    }

    printf("%d\n", change);
}
