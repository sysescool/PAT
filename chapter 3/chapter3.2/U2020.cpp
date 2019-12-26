#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student{
	int id;
	char name[200];
	char gender[20];
	int age;
}stu[25];

int main(){
	int M;
	scanf("%d", &M);
	while(M--){
		int N;
		scanf("%d", &N);
		for(int i=0; i<N; i++){
			scanf("%d %s %s %d", &stu[i].id, stu[i].name, stu[i].gender, &stu[i].age);
		}
		int search;
		scanf("%d", &search);
		for(int i=0; i<N; i++){
			if(search==stu[i].id){
				printf("%d %s %s %d\n", stu[i].id, stu[i].name, stu[i].gender, stu[i].age);
				break;
			}
		}
	}	
	return 0;
}
