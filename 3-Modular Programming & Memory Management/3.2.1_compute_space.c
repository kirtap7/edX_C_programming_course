/*A delivery company has hired you to manage their tracking services division. It is your job to store all 
of the currently used tracking codes in the company's database. These codes consist of either all integers, 
all decimal numbers, or all characters. The chief technology officer has warned you that the database is 
old and has limited space, so you want to determine how much memory the tracking codes will occupy before 
storing them. You decide to write a program to assist you in this process. 

Your program should first read an integer number indicating how many tracking codes you plan on entering. 
Next, for each successive tracking code your program should read in the integer length of code followed 
by a space and then the type of code ('i' for integer, 'd' for decimal, or 'c' for character). 
Finally your program should print the total amount of space required to store all of the tracking codes 
(in bytes). If the user enters an incorrect type for any tracking number, the program should print 
'Invalid tracking code type' and exit.
*/

#include <stdio.h>

int main(void){

	int NumCodes, lenCode, i;
	int totSize = 0;
    char typeCode;
    
    scanf("%d", &NumCodes);

    for (i=0;i<NumCodes;i++){

	    scanf("%d %c", &lenCode, &typeCode);

	    if (typeCode == 'i')
	    	totSize += lenCode * sizeof(int);
	    else if (typeCode == 'd')
	    	totSize += lenCode * sizeof(double);
	    else if (typeCode == 'c')
	    	totSize += lenCode * sizeof(char);
	    else{
	    	printf("Invalid tracking code type");
	    	return 0;
	    }

	}

	printf("%d bytes", totSize);
    return 0;
 }
