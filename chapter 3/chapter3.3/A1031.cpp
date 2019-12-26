#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	scanf("%s",s);
	int row = (strlen(s)+2)/3;
	int column = (strlen(s)+2)/3 + (strlen(s)+2)%3;
	int k=0;
	for(int i=0; i<row; ++i){
		if(i!=row-1)
			for(int j=0; j<column; j++){
				if(j==0) {printf("%c", s[k]); k++; }
				else if(j==column-1) {printf("%c\n", s[strlen(s)-k]);}
				else printf(" ");
			}
		else
			for(int j=0; j<column; j++){
				printf("%c", s[k+j]);
			}
	}
	return 0;
}
