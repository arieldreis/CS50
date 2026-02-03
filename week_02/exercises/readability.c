#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void){
    char text[100];

    printf("Text: ");
    scanf("%99s", text);

    int length = strlen(text);
    printf("%i\n", length);

    return 0;
}