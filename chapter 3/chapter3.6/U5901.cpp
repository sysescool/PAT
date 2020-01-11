//#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string.h>


bool judge(char str[]){
	int len = strlen(str);
	for(int i=0; i<len/2; i++){
		if(str[i] != str[len-1-i]) return false;
	}
	return true;
}

int main(){
	//OJ上提交时把gets_s改为gets
	char str[260];
	while(gets_s(str)){
		bool flag = judge(str);
		if(flag == true) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
