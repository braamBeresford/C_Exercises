/*
 *  Write a program to remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments do not nest.
 */
#include <stdio.h>

#define MAXLENGTH 1024

int getline2(char arr[], int lim);
int main(){
	int len, i;
	char input[MAXLENGTH];

	i=0;
	while((len = getline2(input, MAXLENGTH)) > 0){
		printf("\n Result: ================\n");
		while(input[i] != '\0'){
			if (input[i] == '/' && input[i+1] == '/'){
				i+= 2;
				while(input[i] != '\0' && input[i] != '\n')
					i++;
			} else if (input[i] == '/' && input[i+1] == '*'){
				while(input[i] != '\0' && input[i+1] != '\0' && (input[i] != '*' || input[i+1] != '/')) {
					i += 2;
				}
				if(input[i] == '*'){
					i += 2;
				}
			} else {
				putchar(input[i++]);
			}
		}
	}
}



int getline2(char arr[], int lim){
	int c, i;
	for(i = 0; i < lim-1 && (c=getchar()) != EOF; ++i){
		arr[i] = c;	
	}
	if(c == '\n'){
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return i;
}
