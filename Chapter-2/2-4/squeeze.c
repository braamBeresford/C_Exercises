/* Write a squeeze(se, se) that deletes each cahracter in s1 that matches any character in the string s2 */
#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main(){

	char s1[] = "Hello!";
	char s2[] = "eo";
	squeeze(s1, s2);
	printf("Result: %s\n", s1);
}

void squeeze(char s1[], char s2[]){
	int i, j;
	int k = 0;
	
	for(i = 0; s2[i] != '\0'; i++){
		for(j = 0; s1[j+k] != '\0'; j++){
			printf("S1: %c\t S2:%c\n", s1[j], s2[i]);			
			s1[j] = s1[j+k];
			if(s2[i] == s1[j]){
				k++;
				s1[j] = s1[j+1];
			}
		}
		s1[++j] = '\0';
	}
}
