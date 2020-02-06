#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include "stdio.h"

int main(){
	std::string str[105];
	int n;
	scanf("%d", &n);
	getchar();
	int minlen = 999;
	int i=0;
	while(n--){
		std::getline(std::cin, str[i]);
		int len = str[i].length();
		if(len < minlen) minlen = len;
		std::reverse(str[i].begin(), str[i].end());
		i++;
	}
	bool flag = false;
	int charnum = 0;
	for(charnum=0; charnum<minlen; ++charnum){	
		for(int j=1; j<i; ++j){
			if(str[0][charnum] != str[j][charnum]) flag=true;
		}
		if(flag){
			break;
		}	
	}
	if(charnum==0)
		printf("nai");
	else{
		for(charnum=charnum-1;charnum>=0;charnum--){
			printf("%c", str[0][charnum]);
		}	
	}
	return 0;
}

