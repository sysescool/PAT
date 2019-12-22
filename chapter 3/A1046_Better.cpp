#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <algorithm>

int main(){
	int K;
	scanf("%d", &K);
	int Distance[K+1];
	for(int i=0; i<K+1; ++i){Distance[i]=0;}
	for(int i=1; i<=K; ++i){
		scanf("%d",&Distance[i]);
		Distance[i] += Distance[i-1];
		printf("%d ", Distance[i]);
	}
	int M;
	scanf("%d", &M);
	int start, end;
	for(int i=0; i<M; ++i){
		scanf("%d %d", &start, &end);
		if(start>end) std::swap(start, end);
		int temp = Distance[end-1]-Distance[start-1];
		printf("%d",std::min(temp, Distance[K]-temp));
		if(i!=M-1) printf("\n");
	}
	return 0;
}
