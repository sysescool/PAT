#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student{
	char name[20];
	char id[20];
	int score;
}temp, malelow, femalehigh;

void init(){
	malelow.score = 100;
	femalehigh.score = 0;
}

int main(){
	//init();
	int N;
	int mc=0, fc=0;
	while(scanf("%d", &N)!=EOF){
		char gender;
		init();
		for(int i=0; i<N; i++){
			scanf("%s %c %s %d", temp.name, &gender, temp.id, &temp.score);
			if(gender=='M') {mc++; if(temp.score<malelow.score) malelow=temp;}
			if(gender=='F') {fc++; if(temp.score>femalehigh.score) femalehigh=temp;}
		}
		if(fc!=0) printf("%s %s\n", femalehigh.name, femalehigh.id);
		else printf("Absent\n");
		if(mc!=0) printf("%s %s\n", malelow.name, malelow.id);
		else printf("Absent\n");
		if(fc!=0 && mc!=0) printf("%d\n", femalehigh.score - malelow.score);
		else printf("NA\n");
		
	}
	return 0;
}
