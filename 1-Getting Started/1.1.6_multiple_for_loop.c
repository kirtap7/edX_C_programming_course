/*You would like to display the same thing multiple times, 
but you do not wish to have to re-type it multiple times in your program..*/

#include <stdio.h>

int main(void){
    int i = 0;
    for (i = 0; i<3; i++){
        printf("C is fun!\n");
    }
    printf("\n");
    
    for (i = 0; i<5; i++){
        printf("We can do everything with it!\n");
    }
    return 0;
}


