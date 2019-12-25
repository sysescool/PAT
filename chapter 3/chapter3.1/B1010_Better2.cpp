#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(){
	int a,b;
	int count = 0;
	while(scanf("%d %d", &a, &b)!=EOF){
		if(a!=0 && b!=0){
			if(count!=0) printf(" ");
			printf("%d ", a*b);
			printf("%d",  b-1);
			count++;
		}
	}
	if(count == 0){
		printf("0 0");
	}
	return 0;
}
