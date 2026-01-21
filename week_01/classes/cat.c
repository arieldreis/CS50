#include <stdio.h>

int main(void){
    int i = 0;
    while (i < 3)
    {
       printf("meow!\n");
       i++;
    }

    printf("-----------------------------\n");
    
    for(int index = 0; index < 3; index++){
        printf("meow!\n");
    }
    
}