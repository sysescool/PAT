#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int tonum(char s[]){
	int res=0;
	for(int i=0; i<strlen(s); ++i){
		if('0'<=s[i] && s[i]<='9'){
			res = res*10 + s[i]-'0';
		}
	}
	if(s[0]=='-') res = -res;	
	return res;
}

int main(){
	char s1[30], s2[30];
	while(scanf("%s%s", s1, s2)!=EOF){
		printf("%d\n", tonum(s1) + tonum(s2) );
	}	
	return 0;
}
