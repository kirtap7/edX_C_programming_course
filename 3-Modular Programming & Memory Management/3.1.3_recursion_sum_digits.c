/*Please write a C-program that uses a recursive function called "sumOfDigits()" to compute the sum of 
the digits of a number. To do so, your main function should first read an integer number as input and 
then call sumOfDigits(), which should in turn call itself until there are no digits left to sum, at which 
point the final sum should display to the user.

Here is the main idea of how the recursion in sumOfDigits() should work:

sumOfDigits(6452) = 2 + sumOfDigits(645)

sumOfDigits(645) = 5 + sumOfDigits(64)

...

sumOfDigits(6) = 6
*/

#include <stdio.h>

int sumOfDigits(int);

int main(void){

    int value;
    scanf("%d", &value);

    int sumDigits = 0;
    sumDigits = sumOfDigits(value);

    printf("%d", sumDigits);
 }


int sumOfDigits(int num){

	int lastDigit = num % 10;
	int newNum = num / 10;
	int result = 0;

	if (newNum == 0) //Base case: if number is only 1 digit, just return it
		result = num;
	else 
		result = lastDigit + sumOfDigits(newNum);

	return result;
}