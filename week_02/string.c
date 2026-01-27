#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string s = get_string("Input: ");
    printf("Output: ")
    for(int index = 0, n = strlen(s); index < n; index++){
        printf("%c", s[index]);
    }
    printf("\n");
}
