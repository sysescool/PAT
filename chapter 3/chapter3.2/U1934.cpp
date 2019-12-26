#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int num[201]={0};
int main(){
	int N;
	while( scanf("%d", &N)!=EOF ){
		for(int i=0 ; i<N; i++){
			scanf("%d", &num[i]);
		}
		int temp = 0;
		scanf("%d", &temp);
		int i=0;
		for(i=0; i<N; i++){
			if(temp == num[i]){
				printf("%d\n", i);
				break;
			}
		}
		if(i==N) printf("-1\n");
	}
	return 0;
}
