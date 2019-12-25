#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(){
	int a,b;
	int count=0;
	int save[1010] = {0};
	while(scanf("%d %d",&a,&b)!=EOF){
		save[b]=a;	
	}
	save[0]=0;
	for(int i=1; i<=1000; ++i){
		save[i-1] = save[i] * i;
		save[i] = 0;
		if(save[i-1] != 0) count++;
	}
	if(count == 0) printf("0 0");
	else{
		for(int i=1000; i>=0; i--){
			if(save[i] != 0){
				printf("%d %d", save[i], i);
				count--;
				if(count != 0) printf(" ");
			}
		}
	}
	return 0;
}
