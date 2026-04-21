#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Definindo o alfabeto e os pontos globalmente ou dentro do main
char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
int pontos[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

void winner(char user1[], char user2[]) {
    int contador1 = 0;
    int contador2 = 0;

    // Lógica para o Player 1
    int len1 = strlen(user1);
    for (int i = 0; i < len1; i++) {
        char letra = tolower(user1[i]); // Garante que a letra seja minúscula
        
        // Encontra o índice da letra no alfabeto
        for (int j = 0; j < 26; j++) {
            if (letra == alfabeto[j]) {
                printf("%c => %d => %d\n", letra, j, pontos[j]);
                contador1 += pontos[j];
                break;
            }
        }
    }

    printf("------------------------------------\n");

    // Lógica para o Player 2
    int len2 = strlen(user2);
    for (int i = 0; i < len2; i++) {
        char letra = tolower(user2[i]);
        
        for (int j = 0; j < 26; j++) {
            if (letra == alfabeto[j]) {
                printf("%c => %d => %d\n", letra, j, pontos[j]);
                contador2 += pontos[j];
                break;
            }
        }
    }

    printf("------------------------------------\n");

    // Resultado
    if (contador1 > contador2) {
        printf("Player 1 wins!\n");
    } else if (contador2 > contador1) {
        printf("Player 2 wins!\n");
    } else {
        printf("It's a tie.\n");
    }

    printf("------------------------------------\n");
    printf("Player 1: %d\n", contador1);
    printf("Player 2: %d\n", contador2);
}

int main() {
    // Strings em C
    char user1[] = "COMPUTER";
    char user2[] = "BOLIGRAFO";

    winner(user1, user2);

    return 0;
}