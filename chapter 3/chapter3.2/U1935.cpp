#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student{
	char id[200];
	char name[200];
	char gender[20];
	int number;
}stu[10005];

int main(){
	int N=0;
	while( scanf("%d", &N)!=EOF ){
		for(int i=0; i<N; ++i){
			scanf("%s %s %s %d", stu[i].id, stu[i].name, stu[i].gender, &stu[i].number);
		}
		int M=0;
		scanf("%d", &M);
		for(int i=0; i<M; ++i){
			char search[200];
			scanf("%s", search);
			int j=0;
			for(j=0; j<N; ++j){
				if( strcmp(search, stu[j].id)==0 ){
					printf("%s %s %s %d\n", stu[j].id, stu[j].name, stu[j].gender, stu[j].number);
					break;
				}
			}
			if(j==N) printf("No Answer!\n");
		}		
	}
	return 0;
}
