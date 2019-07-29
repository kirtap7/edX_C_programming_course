/*The goal of this problem is to find the smallest integer in a list of numbers.

To help you with this task, please write a function called min() that finds and returns the smallest
amongst two integers (be sure to also write a prototype for this function). The function thus takes 
two integers as input and returns the smallest of the two. This function will use an if statement with 
a condition that contains either "less than" or "greater than".

Next, please use min() in your main function to work your way through an entire list of numbers in order 
to find its minimum. The first number you read gives the number of elements in the list of integers under 
consideration. You will then read the integer values, using min() to keep only the smallest integer read 
at each step. In the end, please print out the smallest integer in the list.
*/

#include <stdio.h>

int min(int, int);

int main(void){

    int numDigits;
    scanf("%d", &numDigits);

    int i;
    int num;
    int smallest;
    scanf("%d", &smallest); //read first number and assign as smallest 

    for (i=1; i<numDigits; i++){ //start loop at 1 since one number has been already read
    	scanf("%d ",&num);
    	smallest = min(smallest,num);
    }

    printf("%d", smallest);
 }


int min(int num1, int num2){

	if(num1<num2)
		return num1;
	else 
		return num2;
}