#include <stdio.h>
#include <cs50.h>
void print_row(int n_User);

int main(void){
    int n_User;
    int espacos;
    do{
         n_User = get_int("Height: ");
    }while(n_User < 1);
    for(int i = 1; i <= n_User; i++){
        print_row(n_User);
        printf(" ");
    }
    printf("\n");
}

void print_row(int n_User){
    for(int i = 1; i <= n_User; i++){
         printf("");
         for(int j = 1; j <= n_User; j++){
            printf("#");
         }
    }
    printf("\n");
}
