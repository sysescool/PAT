#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

int main(){
	//gets_s(), ¸ÄÎªgets()
	char num[1005];
	scanf("%s", num);
	int len = strlen(num);
	int res[10]={0};
	for(int i=0; i<len; i++){
		res[num[i]-'0']++;
	}
	for(int i=0; i<10; i++){
		if(res[i]!=0){
			printf("%d:",i);
			printf("%d\n",res[i]);
		}
	}
	return 0;
}
