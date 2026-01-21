#include <stdio.h>
// #include <cs50.h>

int main(void){
    long card_number;
    int count;

    do{
        card_number = get_long("Number: ");
        count = 0;
        while(card_number > 0){
            card_number /= 10;
            count++;
        }
    }while((count < 13) || (count > 16));

    printf("Number of digits: %i\n", count);
}
