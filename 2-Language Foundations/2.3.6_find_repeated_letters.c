/* You are still conducting linguistic research! This time, you'd like to write a program to find out 
how many letters occur multiple times in a given word. Your program should read a word from the input 
and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should 
iterate through the letters of the word and compare each letter with the one following it. If these equal
each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that
occur more than twice are not counted again. You may assume that the word you read from the input has 
no more than 50 letters, and that the word is all lowercase.*/

#include <stdio.h>

int main(void){

	char word[51];
	scanf("%s", word);
	int n=0;
	int i=0;

	//count letters in the word
	while(word[i]!='\0'){
		n++;
		i++;
	}

	int j,k;
	char swap;
	//sort letters in the word using bubble sort
	for (j=0; j<n-1; j++) {
        for (k=0; k<n-1; k++) {
            if (word[k] > word[k+1]) {
                swap = word[k];
                word[k] = word[k+1];
                word[k+1] = swap;
            }
        }
    }

    int count=0;
    int t;
    //loop through the sorted letters
    for (i=0;i<n-1;i++){
    	if (word[i] == word[i+1]){
    		count++; // if 2 consecutive letters match increment counter
    		// THEN determine the number of indexes to skip if a letter is found more than twice
    		t=1;
    		while (word[i] == word[i+t]){
    			t++;
    			i++;
    		}
    	}
    }

    printf("%d", count);
    
	return 0;
}