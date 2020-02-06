#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int num;
	int ans[3];
	scanf("%d", &num);
	ans[2] = num/100;
	ans[1] = num%100/10;
	ans[0] = num%10;
	for(int i=0; i<ans[2]; i++){
		printf("B");
	}
	for(int i=0; i<ans[1]; i++){
		printf("S");
	}
	for(int i=1; i<=ans[0]; i++){
		printf("%d",i);
	}
	return 0;
}
