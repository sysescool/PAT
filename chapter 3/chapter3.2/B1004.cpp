#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student{
	char name[11];
	char id[11];
	int score;
}temp, stumax, stumin;

int main(){
	stumax.score = -1;
	stumin.score = 101;
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; ++i){
		scanf("%s %s %d", temp.name, temp.id, &temp.score);
		if(temp.score>stumax.score) {
			stumax = temp;
		}
		if(temp.score<stumin.score){
			stumin = temp;
		}
	}
	printf("%s %s\n", stumax.name, stumax.id);
	printf("%s %s\n", stumin.name, stumin.id);
	return 0;
}
