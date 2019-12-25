#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(){
	int start[55], end[55], next[55];
	char mp[5]={'S','H','C','D','J'};
	int K;
	scanf("%d", &K);
	for(int i=1; i<55; ++i){
		start[i] = i;
	}
	for(int i=1; i<55; ++i){
		scanf("%d",&next[i]);
	}
	for(int i=0; i<K; ++i){
		for(int j=1; j<55; ++j){
			end[next[j]] = start[j];
		}
		for(int j=1; j<55; ++j){
			start[j] = end[j];
		}
	}
	for(int i=1; i<55; ++i){
		start[i]--;
		printf("%c%d",mp[start[i]/13],start[i]%13+1);
		if(i!=54) printf(" ");
	}
	return 0;
}
