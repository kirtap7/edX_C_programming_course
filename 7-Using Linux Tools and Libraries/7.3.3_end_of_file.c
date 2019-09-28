/*You are still teaching a class on C-programming! You would like to find out whether the students in your class did better 
on the most recent assignment than the students in your colleagues' classes. The average grades of all these classes are stored 
n a file called "gradeComparison.txt". The first number stored in the file represents the average grade of the students in your 
class. All of the subsequent numbers represent the average grades of students from other sections. For example, if the file 
contained the following:

95.23 94.80 91.56
this would mean that the students in your class received an average grade of 95.23 on the last assignment, which is higher than 
the average grades received by students in the other sections.

If, on the other hand, the file was

95.23 94.80 91.56 96.40 93.25
then this would mean that the students in the fourth class received a slightly higher grade than the students in your class.  

Your job is to find out whether the students in your class did better than the students in the other classes and if so, print out 
the word "Yes". If on the other hand students in another class did better than your students then you should print out "No", 
followed by one space, followed by the number of the first class in the file that had a better grade average.*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

	double myClass,otherClass;
	int num = 1;
	int higher = 1;

	FILE *myFile;

	myFile = fopen("gradeComparison.txt", "r");

	fscanf(myFile, "%lf", &myClass);

	while (fscanf(myFile, "%lf", &otherClass) != EOF){
		if (otherClass>myClass){
			num++;
			higher = 0;
			break;
		}
		else num++;
	}

	printf(higher ? "Yes\n" : "No %d\n", num);

	fclose(myFile);

	return 0;
}