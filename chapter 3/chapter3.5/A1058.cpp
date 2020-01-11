#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	//此种算法使用long long避免溢出, 使用int无法全部通过
	long long int a[3], b[3], c[3];
	scanf("%d.%d.%d %d.%d.%d", &a[0], &a[1], &a[2], &b[0], &b[1], &b[2]);
	c[2] = a[0]*17*29 + a[1]*29 + a[2] + b[0]*17*29 + b[1]*29 +b[2];
	c[0] = c[2]/17/29;
	c[1] = c[2]%(17*29)/29;
	c[2] = c[2] - c[0]*17*29 - c[1]*29;
	printf("%d.%d.%d",c[0],c[1],c[2]);
	return 0;
}
