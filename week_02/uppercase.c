#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string s = get_string("Before: ");
    printf("After: ");

    for(int index = 0, n = strlen(s); index < n; index++){
        // if s[i] is lowercase
        if(s[index] >= 'a' && s[index] <= 'z'){
            printf("%c", s[index] - 32);
        }else{
            // Else if not lowercase
            printf("%c", s[index]);
        }
    }
    printf("\n");
}
