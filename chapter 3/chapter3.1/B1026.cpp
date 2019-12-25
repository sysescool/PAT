#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(){
	const int CLK_TCK=100;
	int C1, C2;
	scanf("%d %d",&C1 ,&C2);
	int seconds = (int)round((double)(C2-C1)/CLK_TCK);
	printf("%02d:%02d:%02d",seconds/3600, seconds%3600/60, seconds%3600%60);
	return 0;
}
