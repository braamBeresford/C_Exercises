/* Write a function htoi(s) which converts a string of hex digits (both 0x and 0X to equivilant ints. Allowed: 1-9, a-f, A-F
 */

#include <stdio.h>
#include <ctype.h>

int htoi(char s[]);
int main(){
	char test[] = "abcdef1"; 
	int result = htoi(test);
	printf("Result: %d\n", result);
}

int htoi(char s[]){
	int i = 0;
	unsigned int result = 0;
	int temp;
	int hexvalue;
	// Skip 0x if present
	if(s[i] == '0'){
		if(tolower(s[i]) == 'x'){
			i += 2;
		}
	}

	// Make all chars lower case
	for(i = 0; s[i] != '\0'; i++){
		temp = tolower(s[i]);

		if(isdigit(temp))
			hexvalue = temp - '0';
		else if('a' <= temp && temp <= 'f')
			hexvalue = temp - 'a' + 10;
		else
			break;

		result = (result * 16) + hexvalue;
	}

	return result;
}
