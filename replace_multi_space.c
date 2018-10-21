#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(){
	int outsideWord = FALSE;
	int c;
	
	while((c=getchar()) != EOF){
		if(c == ' ' && outsideWord)
			;
		else if ( c == ' ' && !outsideWord){
			putchar(c);
			outsideWord = TRUE;
		}
		else{
			putchar(c);
			outsideWord = FALSE;
		}
	}
}
