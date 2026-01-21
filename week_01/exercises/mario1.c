#include <stdio.h>
// #include <cs50.h>
void print_row(int n_User);

int main(void){
    int n_User;
    do{
         n_User = get_int("Height: ");
    } while(n_User < 1);

    int espacos = n_User - 1;
    int hashtags = n_User + 1;
    for(int i = 0; i < n_User; i++){
        print_row(n_User);
    }
}

void print_row(int n_User){
    int qtd = 1;
    for(int j = 0; j < n_User; j++){
        for(int k = 0; k < qtd; k++){
            printf("#");
        }
        qtd += 1;
        printf("\n");
    }
}

