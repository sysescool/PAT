#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int a[100000]={0};

int main(){
	int N;
	int k=0;
	scanf("%d", &N);
	int school, score;
	for(int i=0; i<N; ++i){
		scanf("%d %d",&school, &score);
		a[school] += score;
		if(a[school]>a[k])	k=school;		
	}
	printf("%d %d", k, a[k]);
	return 0;
}
