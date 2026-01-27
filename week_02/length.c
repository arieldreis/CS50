#include <stdio.h>
#include <cs50.h>

int main(void){
    string name = get_string("Name: ");
    int n = strlen(name); // Calculate the length of a string.
    /* int n = 0;
    while(name[n] != '\0'){
        n++;
    }
    */
    printf("Value: %i\n", n); 
}
