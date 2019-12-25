#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	double a[1001]={0.0};
	int exp;
	double cof;
	for(int i=0; i<N; ++i){
		scanf("%d %lf", &exp, &cof);
		a[exp] = cof;
	}
	int M;
	scanf("%d", &M);
	double result[2001]={0.0};
	for(int i=0; i<M; ++i){
		scanf("%d %lf", &exp, &cof);
		for(int j=0; j<=1000; ++j){
			if(a[j] != 0){
				result[j+exp] += a[j]*cof;	
			}
		}	
	}
	int count=0;
	for(int i=0; i<=2000; ++i){
		if(result[i]!=0.0) count++;
	}
	printf("%d", count);
	for(int i=2000; i>=0; i--){
		if(result[i]!=0.0){
			printf(" %d %.1f", i, result[i]);
		}
	}
	return 0;
}
