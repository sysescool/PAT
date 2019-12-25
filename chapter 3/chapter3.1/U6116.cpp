#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
int dis[100005];
int main(){
	int N;
	scanf("%d",&N);
	dis[0]=0;
	for(int i=1; i<=N; ++i){
		scanf("%d", &dis[i]);
		dis[i] += dis[i-1];
	}
	int M;
	scanf("%d", &M);
	while(M--){
		int start, end;
		scanf("%d %d", &start, &end);
		if(start>end) std::swap(start, end);
		int temp = dis[end-1] - dis[start-1];
		printf("%d\n", std::min(temp, dis[N]-temp));
	}
	return 0;
}
