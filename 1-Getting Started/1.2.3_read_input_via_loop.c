
/* write a program that takes several lines of input from a user (see the below example). 
The first line of the input indicates the number of robots to be deployed. Each subsequent 
line shows the height, the weight, the power of the engines and a resistance rating (1,2, or 3) 
of each of of these robots. Your program should use this information to calculate the total power 
of these robots. The power of all robots is the sum of the power of each robot, where the power of
an individual robot is calculated via:

(enginePower + resistance) * (weight - height) */

#include <stdio.h>

int main(void){
    
    int i;
    int enginePower = 0;
    int resistance = 0;
    int weight = 0;
    int height = 0;
    int numRobots = 0;
    int sum = 0;
    
    scanf("%d", &numRobots);
    
    for (i = 0; i < numRobots; i++){
        scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance);
       
        sum = sum + (enginePower + resistance) * (weight - height);
    }
    
    printf("%d", sum);
    
}