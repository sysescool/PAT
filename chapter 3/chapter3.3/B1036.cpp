#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(){
	int n;
	char c;
	scanf("%d %c", &n, &c);
	int row = round((n * 0.5));
	for(int j=0; j<row; j++){
		if(j==0 || j==row-1){
			for(int i=0; i<n; i++){
		       		printf("%c", c);
			}
			printf("\n");
		}else{
			for(int i=0; i<n; i++){
				if(i==0 || i==n-1) printf("%c",c);
				else printf(" ");
			}
			printf("\n");
		}		
	}
	return 0;
}
