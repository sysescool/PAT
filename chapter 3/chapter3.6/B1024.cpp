#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

int main(){
	char num[100000];
	scanf("%s", num);
	if(num[0]=='-') printf("-");
	int epos=1;
	while(num[epos]!='E'){
		epos++;
	}
	int exp=0;
	for(int i=epos+2; i<strlen(num); ++i){
		exp = exp * 10 + (num[i]-'0');
	}
	if(exp == 0){
		for(int i=1; i<epos; i++){
			printf("%c", num[i]);
		}
	}
	if(num[epos+1]=='-'){
		printf("0.");
		for(int i=0; i<exp-1; ++i){
			printf("0");
		}
		printf("%c",num[1]);
		for(int i=3; i<epos; ++i){
			printf("%c", num[i]);
		}	
	}else{
		printf("%c",num[1]);
		for(int i=3; i<epos; ++i){
			printf("%c", num[i]);
			//epos-3 != exp 的意思是:
			//小数点恰好在最后一位, 不需要输出小数点, 也不需要补零
			if(exp+2 == i && epos - 3!=exp){
				printf(".");
			}
		}
		for(int i=0; i<exp-(epos-3); i++){
			printf("0");
		}
	}
	return 0;
}
