#include <stdio.h>

#define SPACESINTABS 4
#define MAXLINE 2048
int getline2(char arr[], int lim);
int main(){
	int c, arrlen = 0, i, j;
	char line[MAXLINE];
	while(arrlen != 1){
		arrlen = getline2(line, MAXLINE);
		for(i = 0; i < arrlen; i++){ 
			if(line[i] == '\t'){
				for(j = 0; j < (4-(i%4)); ++j){
					putchar(' ');
				}
			}else{
				putchar(line[i]);
			}
		}
	}

}

int getline2(char arr[], int lim){
	int c, i;
	for(i = 0; i < lim-1 && (c=getchar()) != '\n'; ++i){
		arr[i] = c;	
	}
	if(c == '\n'){
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return i;

}
