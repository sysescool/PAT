#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int a1, b1, c1;
	int a2, b2, c2;
	scanf("%d.%d.%d %d.%d.%d", &a1, &b1, &c1, &a2, &b2, &c2);
	int money = a1*17*29 + b1*29 + c1;
	int pay   = a2*17*29 + b2*29 + c2;
	int change  = pay - money;
	if(change<0) { printf("-"); change = -change;}
	printf("%d.%d.%d\n", change/29/17, change/29%17, change%29);
	return 0;
}
