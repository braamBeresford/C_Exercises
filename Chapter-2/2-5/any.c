#include <stdio.h>

int any(char s1[], char s2[]);
int main(){
	char s1[] = "Hello there kido!";
	char s2[] = "to";

	int result = any(s1, s2);
	printf("The letter appears at %d\n", result+1);
	return 0;
}


int any(char s1[], char s2[]){
	int i, j;

	for(i = 0; s1[i] != '\0'; i++){
		for(j = 0; s2[j] != '\0'; j++){
			if(s1[i] == s2[j]){
				return i;
			}
		}
	}

	return -1;
}
