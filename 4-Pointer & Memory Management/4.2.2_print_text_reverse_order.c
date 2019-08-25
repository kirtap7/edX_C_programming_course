/* Your goal is to read a 68-word text from the input and then print it to the screen backwards. 
Individual words do not have to be spelled backwards, but rather your program should print out the 
last word first, then the second-to-last word, etc. No word has more than 40 characters. 
*/

#include <stdio.h>

int main(void){

	char text[68][41];

	int word;

	for (word=0;word<68;word++)
		scanf("%s", text[word]);

	for (word=68; word >= 0; word--)
		printf("%s ", text[word]);

	return 0;
}