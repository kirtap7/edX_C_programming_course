
/* improve your existing multiplication program (that prints the 8 times table). 
Your program should read an integer from the user (not you) and print the multiplication 
table for the number that they enter*/
#include <stdio.h>

int main(void){
    
    int i;
    int mult = 0;
    int num;
    
    scanf("%d", &num);
    
    for (i=0; i<11; i++){
        printf("%dx%d = %d\n", mult, num, num*mult);
        mult++;
    }
}