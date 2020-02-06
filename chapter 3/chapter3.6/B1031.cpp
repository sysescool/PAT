#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

int main(){
	char s[20];
	int weight[17]={7,9,10,5,8,
			4,2,1,6,3,
			7,9,10,5,8,
			4,2};
	char Ztable[11]={'1','0','X','9','8','7','6',
			 '5','4','3','2'};
	int n=0;
	scanf("%d",&n);
	bool flag = true;
	for(int i=0; i<n; ++i){
		scanf("%s", s);
		int weights=0;
		bool isNum = true;
		for(int j=0; j<strlen(s)-1; ++j){
			if(s[j]-'0'>9 || s[j]-'0'<0) isNum=false;
			weights += (s[j]-'0')*weight[j];
		}
		if (Ztable[weights % 11] != s[17]  || !isNum){
			flag = false;
			printf("%s\n", s);
		}
	}
	if(flag) printf("All passed\n");
	return 0;
}
