#include <stdio.h>

int main(void){
    int x = get_int("X: ");
    int y = get_int("Y: ");

    int z = x + y;

    printf("%i\n", z);
    printf("%i\n", x * 2);
    printf("%f\n", (float) x / y);
}