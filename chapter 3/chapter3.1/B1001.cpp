#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(){
	int n;
	scanf("%d", &n);
	int count=0;
	while(n!=1){
		count++;
		if(n%2==0) n = n/2;
		else n = (3*n+1)/2;
	}
	printf("%d", count);
}
