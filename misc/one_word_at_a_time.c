#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
	int c;
	int linePosition = IN;
	while((c = getchar()) != EOF){
		if (c == '\n' ||  c == '\t' || c == ' '){
			if(linePosition){
				putchar('\n');
				linePosition = OUT;
			}
		} else{
			putchar(c);
			linePosition = IN;
		}
	}
}
