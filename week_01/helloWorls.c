# include <stdio.h>
int main (void){
    printf("Hello, \"World!\"\n");
    printf("Hello, World!\n");
    char name[] = "World";
    printf("Hello, %s!\n", name);
    get_string("Enter your name: ", name, sizeof(name));
    return 0;
}