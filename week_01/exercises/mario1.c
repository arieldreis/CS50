#include <stdio.h>
// #include <cs50.h>
void print_row(int n_User);

int main(void){
    int n_User;
    do{
         n_User = get_int("Height: ");
    } while(n_User < 1);

    for(int i = 0; i < n_User; i++){
        print_row(n_User);
    }
}

void print_row(int n_User){
    for(int j = 0; j < n_User; j++){
        printf(" ");
        for(int k = 0; k <= j; k++){
            printf("#");
        }
    }
    printf("\n");
}
