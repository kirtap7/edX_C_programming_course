/*Petra lives in the United States, where temperature is measured in Fahrenheit, whereas Rémi lives in France, where one 
measures in Celsius. During their weekly meetings to discuss the preparation of this course, they often wonder who currently 
has the nicer weather.

To help with this important discussion, complete the below C program that converts temperature from Fahrenheit to Celsius or 
from Celsius to Fahrenheit, depending on the user's input. The user should enter an integer, followed by a space, followed by 
the letter 'F' (for Fahrenheit) or the letter 'C' (for Celsius) and the program then converts this temperature to the other unit 
and prints it out with one decimal place (see examples below).

Your job is to complete the given program by filling in the function prototypes, the function calls, and the printf() statements 
at the indicated locations (lines that start with //).*/
#include <stdio.h>

double ctof(int x);
double ftoc(int x);

int main(void) {

    int usertemp;
    char unit;
    double convertedtemp;

    scanf("%d %c", &usertemp, &unit);
    if (unit=='C'){
        convertedtemp = ctof(usertemp);
        printf("%.1lf F\n", convertedtemp);
    } else if (unit=='F'){
        convertedtemp = ftoc(usertemp);
        printf("%.1lf C\n", convertedtemp);
    }

    return 0;
}

double ctof(int x){
    return((9.0/5)*x+32);
}

double ftoc(int x){
    return(5.0/9*(x-32));
}