#include <stdio.h>

void meow(int n);

int main(int n){
    do
    {
        int n = get_int("Number");
    } while(n < 1);
    meow(n);
}