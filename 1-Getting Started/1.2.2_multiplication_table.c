
/*write a program that prints the multiples of 8 table. Because you will use your code again in the future 
to print other multiplcation tables, you decide to use a loop and only one print statement.*/
#include <stdio.h>

int main(void){
    
    int i;
    int mult = 0;
    int num = 8;
    
    for (i=0; i<11; i++){
        printf("%dx%d = %d\n", mult, num, num*mult);
        mult++;
    }
}