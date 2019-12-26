#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct people{
	char name[6];
	int yy, mm, dd;
}temp, left, right, youngest, oldest;

bool less(people a, people b){
	if(a.yy != b.yy) return a.yy<=b.yy;
	else if(a.mm != b.mm) return a.mm<=b.mm;
	else return a.dd<=b.dd;
		
}

bool more(people a, people b){
	if(a.yy != b.yy) return a.yy>=b.yy;
	else if(a.mm != b.mm) return a.mm>=b.mm;
	else return a.dd>=b.dd;
		
}

void init(){
	youngest.yy = left.yy =1814;
	oldest.yy = right.yy = 2014;
	youngest.mm = oldest.mm = left.mm = right.mm = 9;
	youngest.dd = oldest.dd = left.dd = right.dd = 6;
}

int main(){
	init();
	int N;
	int num = 0;
	scanf("%d", &N);
	for(int i=0; i<N; ++i){
		scanf("%s %d/%d/%d", temp.name, &temp.yy, &temp.mm, &temp.dd);
		if(more(temp, left) && less(temp, right)){
			num++;
			if(less(temp, oldest)) oldest = temp;
			if(more(temp, youngest)) youngest = temp;
		}
	}
	if(num!=0) printf("%d %s %s", num, oldest.name, youngest.name);
	else printf("0");
	return 0;
}
