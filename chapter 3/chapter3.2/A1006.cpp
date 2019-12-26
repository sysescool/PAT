#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student{
	char id[20];
	int ah;
	int am;
	int as;
	int lh;
	int lm;
	int ls;
}temp, opener, closer;

bool open(student a, student b){
	//printf("%d %d %d <= %d %d %d", a.ah, a.am, a.as, b.ah, b.am, b.as);
	if(a.ah!=b.ah) return a.ah<=b.ah;
	else if(a.am!=b.am) return a.am<=b.am;
	else return a.as<=b.as;
}

bool close(student a, student b){
	if(a.lh!=b.lh) return a.lh>=b.lh;
	else if(a.lm!=b.lm) return a.lm>=b.lm;
	else return a.ls>=b.ls;
}

void init(){
	opener.ah = 23; 
	opener.am = opener.as = 59;
	closer.lh = closer.lm = closer.ls = 0;
}

int main(){
	init();
	int N;
	while( scanf("%d", &N)!=EOF){
		for(int i=0; i<N; i++){
			scanf("%s %d:%d:%d %d:%d:%d", temp.id, &temp.ah, &temp.am, &temp.as, &temp.lh, &temp.lm, &temp.ls);
			if(open(temp, opener)) opener = temp;
			if(close(temp, closer)) closer = temp;
		}
		printf("%s %s\n", opener.id, closer.id);
	};
	
	return 0;
}
