/* Your job is to find the length of the longest word in a text with no punctuation or special 
characters of any kind - only contains words. To do so, please write a C-program that takes as 
a input first the number of words in a text, followed by all of the words in the text. The output 
of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.*/

#include <stdio.h>

int main(void){

	int nWords;
	int maxLength = 0;
	int i;
	char word[101];
	int l;

	scanf("%d", &nWords);

	for (i=0; i<nWords;i++){

		scanf("%s", word);

		l=0;
		while (word[l] != '\0'){
			l++;
		} 
		if (l>maxLength){
			maxLength = l;
		}
	}
	
	printf("%d", maxLength);

	return 0;
}