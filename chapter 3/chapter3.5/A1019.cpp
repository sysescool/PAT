#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int convert(int res[], int num, int d){
	int bits = 0;
	do{
		res[bits++] = num%d;
		num = num/d;
	}while(num!=0);
	return bits;
}

bool judge_palindromic(int res[], int bits){
	for(int i=0; i<bits--; i++){
		if(res[i]-res[bits]!=0) return false;
	}
	return true;
}

int main(){
	int num, d;
	int res[40];
	scanf("%d %d", &num, &d);
	int bits = convert(res, num, d);
	if( judge_palindromic(res, bits) ) printf("Yes\n");
	else printf("No\n");
	for(int i=bits-1; i>=0; i--){
		if(i!=0) printf("%d ",res[i]);
		else printf("%d",res[i]);
	}
	return 0;
}
