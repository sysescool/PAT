#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int array[N];
	int M;
	scanf("%d", &M);
	M = M % N;
	for(int i=M; i<N; ++i){
		scanf("%d", &array[i]);
	}
	for(int i=0; i<M; ++i){
		scanf("%d", &array[i]);
	}
	for(int i=0; i<N; ++i){
		printf("%d", array[i]);
		if(i!=N-1) printf(" ");
	}
	return 0;
}
