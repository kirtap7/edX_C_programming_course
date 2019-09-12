/*In this problem you will continue developing the data feature which you started implementing in the previous problem.
You will implement a "tomorrow" feature in the C programming language via a function called "advanceDay()". The function 
advanceDay() should take as input a date (stored in a struct date) and return the date of the following day. You do not 
have to take into account leap years (although you may if you wish to). That is, it is okay for your function to always 
return March 1 as the day following February 28, no matter the year.
*/

#include <stdio.h>

struct date {
	int year;
	int month;
	int day;
};

void readDate(struct date *);
void printDate(struct date);
struct date advanceDay(struct date);

int main(void){
	struct date today;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date *stptr){
	scanf("%4d", &stptr->year);
	scanf("%2d", &stptr->month);
	scanf("%2d", &stptr->day);
}

void printDate(struct date date){
	printf("%.2d/%.2d/%.4d\n", date.month, date.day, date.year);
}

struct date advanceDay(struct date date){

	if (date.day ==30 && (date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11)){
		date.day = 1;
		date.month++; 
	}
	else if (date.day ==31 && (date.month == 1 || date.month == 3 || date.month == 5 || date.month == 7 || date.month == 8 
		|| date.month == 10)){
		date.day = 1;
		date.month++; 
	}
	else if (date.day ==31 && date.month == 12){
		date.day = 1;
		date.month =1;
		date.year++; 
	}
	else if (date.day ==28 && date.month == 2){
		//if leap year only add a day
		if ((date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0)){
			date.day = 1;
		}
		else{
			date.day = 1;
			date.month++;
		} 
	}
	else
		date.day ++;

	return date;
}