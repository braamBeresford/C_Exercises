// Braam
#include <stdio.h>

void lower(char s[]);
int main(){
	char test[] = "HelLo there!";		
	lower(test);
	printf("%s \n", test);
}

void lower(char s[]){
	int i;

	for(i = 0; s[i] != '\0'; i++){
		(s[i] >= 'A' && s[i] <= 'Z') ? s[i] += 'a' - 'A': s[i];
	}
}
