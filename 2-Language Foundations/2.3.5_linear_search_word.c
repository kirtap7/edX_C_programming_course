/* You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word 
(including the middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should 
output a 1. If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. 
Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not 
have more than 50 letters.*/

#include <stdio.h>

int main(void){

	char word[51];
	scanf("%s", word);
	int i=0;
	int letterNum = 0;
	
	//count letters in the word
	while(word[i]!='\0'){
		letterNum++;
		i++;
	}

	int j, found;
    found = -1; //if no 't' or 'T' assign value -1
    j = 0;
    //linear search for 't' or 'T'
    while (found==-1 && j<letterNum) {

        if (('t' == word[j] || 'T' == word[j]) && j<=letterNum/2) { 
            found = 1; //if found in the first half
        } 
        else if (('t' == word[j] || 'T' == word[j]) && j>letterNum/2) { 
            found = 2; //if found in the second half
        } 
        else {
            j++; //if NOT found keep searching
        }
    }
    printf("%d", found);
	return 0;
}