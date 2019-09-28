/*You are selling plants and are working on creating invoices for customer orders. You are testing a program that should 
receive, as arguments passed in from the command line, a number of plants to be purchased (an integer) and the price per 
plant (a decimal number). Your job is to create an invoice for the customer that prints out the total price 
of the order (which can be found by multiplying the price per plant by the number of plants purchased). 

If your program is called with an incorrect number of arguments the user should receive the message "Invalid input".

Be sure to print prices with two decimal places, and to print the invoice exactly as presented in the examples below.*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
	int numPlants;
	double pricePlant;

	if (argc != 3){
		printf("Invalid input");
	}
	else{
		numPlants = atoi(argv[1]);
		pricePlant = atof(argv[2]);
		printf("%d plants for %.2lf dollars each cost %.2lf dollars.\n", numPlants, pricePlant, numPlants * pricePlant);
	}
	return 0;
}