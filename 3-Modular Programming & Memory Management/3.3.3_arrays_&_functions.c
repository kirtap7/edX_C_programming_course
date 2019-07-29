/*Within this program, we will pass an array with 6 integers to a function, have the function swap the 
first and last integer, the second and the second to last integer, the third and the third to last integer.

The function is called reverseArray and doesn't return anything (void). It should take one parameter, 
representing the array of integers. 

The main function first reads 6 integers from the input, and assigns them to the array. 
The main function then calls reverseArray, passing the array as an argument.

The main function then prints the reversed array.*/

#include <stdio.h>

void reverseArray(int []);

int main(void){

	int i, array[6]; 

	for (i=0; i < 6; i++)
		scanf("%d", &array[i]);

	reverseArray(array);

	for (i=0; i < 6; i++)
		printf("%d ", array[i]);

	return 0;
}

void reverseArray(int array[]){

	int i,temp;
	int lenArray = 6;

	for (i=0; i < lenArray/2; i++){
		temp = array[i];
		array[i] = array[lenArray-i-1];
		array[lenArray-i-1] = temp;
	}
}

// VERSION USING POINTERS

/* 
#include <stdio.h>
void reverseArray(int *);
int main(void){

	int i, array[6]; 

	for (i=0; i < 6; i++)
		scanf("%d", &array[i]);

	reverseArray(array);

	for (i=0; i < 6; i++)
		printf("%d ", array[i]);

	return 0;
}

void reverseArray(int * array){

	int i,temp;
	int lenArray = 6;

	for (i=0; i < lenArray/2; i++){
		temp = * (array + i);
		* (array + i) = * (array + lenArray-i-1);
		* (array + lenArray-i-1) = temp;
	}
}
*/

// VERSION USING POINTERS v2
/*
#include <stdio.h>
void reverseArray(int *);
int main(void){

	int i, array[6]; 

	for (i=0; i < 6; i++)
		scanf("%d", &array[i]);

	reverseArray(array);

	for (i=0; i < 6; i++)
		printf("%d ", array[i]);

	return 0;
}

void reverseArray(int * array){

	int i,temp;
	int lenArray = 6;

	for (i=0; i < lenArray/2; i++){
		temp = array[i];
		array[i] = array[lenArray-i-1];
		array[lenArray-i-1] = temp;
	}
}
*/

