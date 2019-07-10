/*In order to be able to better fight various epidemics in a region, the department of medicine 
of a major university has launched a large study. Researchers are interested in how fast an 
epidemic spreads, and therefore the speed at which health measures must be put in place. 
Your program should first read an integer representing the total population of the area. 
Knowing that a person was infected on day 1 and that each infected person contaminates two new
people every day, you must calculate the day at which the entire population of the area will be 
infected.*/

#include <stdio.h>

int main(void){

	int population;
	scanf("%d", &population);

	//only 1 person infected at the start
	int infected = 1;
	int day = 1;

	while (infected<population){
		infected *= 3;
		day++;
	}

	printf("%d", day);
	return 0;
}