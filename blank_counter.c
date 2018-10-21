#include <stdio.h>

int main(){
	int c, spaces, tabs, newlines;
	c = spaces = tabs = 0;
	while(( c =getchar()) != EOF){
		if (c == '\n')
			newlines++;
		else if (c == '\t')
			tabs++;
		else if (c == ' ')
			spaces++;

		printf("Spaces: %d\t Tabs: %d\t Newlines: %d\n", spaces, tabs, newlines);
	}
}
