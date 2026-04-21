#include <stdio.h>

int get_positive_int();
void meow(int n);


int main(int n){
    int times = get_positive_int();
    meow(times);  
}


int get_positive_int(void){
    int n;
   do
    {
        int n = get_int("Number");
    } while(n < 1);
}

void meow(int n){
    for (int i = 0; i < n; i++)
    {
        printf("Meow!!!\n");
    }
    
}; 