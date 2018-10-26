/* 1-22 Write a program to "fold" long input lines into two or more shorter
lines after the last non-blank character that occurs before the n-th column
of input. Make sure your program does something intelligent with very long
lines, and if there are no blanks or tabs before the specified column, page
34 */
#include <stdio.h>

#define LINELENGTH 20
#define MAXLENGTH 1024

int getword(char word[], int lim);

int main(){
	char word[MAXLENGTH];
	
	int wordlen = 0;
	int currentLineLength = 0;
	while((wordlen = getword(word, MAXLENGTH)) != -1){
		// Minus 1 to leave room for space
		if((currentLineLength += wordlen) > (LINELENGTH -1)){
			putchar('\n');
			currentLineLength = 0;
		}
		currentLineLength += wordlen;	
		printf("%s ", word);
	}

	return 0;
}


int getword(char word[], int lim){
	int c, j;
	for(j =0; (c = getchar()) != EOF && j < lim-1; ++j){
		if(c == ' ' || c == '\n' || c == '\t')
			break;
		word[j] = c;
	}
	if(c == EOF)
		return -1;

	word[j] = '\0';
	return j;	
}
