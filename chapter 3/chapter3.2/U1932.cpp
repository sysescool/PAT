#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int stu[1000]={0};
int main(){
	int N;
	while( scanf("%d", &N)!=EOF ){
		if(N==0) break;
		for(int i=0; i<N; ++i){
			scanf("%d", &stu[i]);
		}
		int temp=0;
		int count=0;
		scanf("%d", &temp);
		for(int i=0; i<N; ++i){
			if(stu[i]==temp) count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
