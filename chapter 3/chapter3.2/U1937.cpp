#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int num[105];
int main(){
	int N;
	while( scanf("%d", &N)!=EOF ){
		for(int i=0; i<N; ++i){
			scanf("%d", &num[i]);
		}
		int temp; 
		int M; scanf("%d", &M);
		for(int i=0; i<M; ++i){
			scanf("%d", &temp);
			int j;
			for(j=0; j<N; ++j){
				if(temp == num[j]){
					printf("YES\n");
					break;
				}
			}
			if(j==N) printf("NO\n");
		}
	}
	return 0;
}
