#include <stdio.h>

int main(){
	int c;
	c = getchar();
	printf(EOF);
	while(c != EOF){
		putchar(c);
		c = getchar();
	}
}
