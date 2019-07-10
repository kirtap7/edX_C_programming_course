/*You want to determine the number of cities in a given region that have a population strictly 
greater than 10,000. To do this, you write a program that first reads the number of cities in 
a region as an integer, and then the populations for each city one by one (also integers).*/

#include <stdio.h>

int main(void){

	int numCities;

	scanf("%d", &numCities);

	int count = 0;
	int population = 0;
	int i;

	for (i=0; i<numCities;i++){
		scanf("%d", &population);
		if (population>10000){
			count +=1;
		}
	} 

	printf("%d", count);

	return 0;
}