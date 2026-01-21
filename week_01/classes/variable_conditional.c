#include <stdio.h>
// #include <cs50.h>

int main(void){
    printf("This is a variable example.\n");
    int x = get_int("Enter an integer: ");
    int y = get_int("Enter an integer: ");

    if(x < y)
    {
        printf("%d is less than %d\n", x, y);
    }
    else if(x > y)
    {
        printf("%d is not greater than %d\n", x, y);
    }
    else
    {
        printf("%d is equal to %d\n", x, y);
    }
}