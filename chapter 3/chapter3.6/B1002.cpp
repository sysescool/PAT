#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

int main(){
	char res[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char s[100];
	scanf("%s", s);
	int temp = 0;
	for(int i=0; i<strlen(s); ++i){
		temp += (s[i]-'0');
	}
	int num=0;
	int ans[100];
	int i=0;
	while(temp!=0){
		ans[i++] = temp%10;
		temp = temp / 10;
	}
	for(i=i-1; i>=0; i--){
		printf("%s", res[ans[i]]);
		if(i!=0) printf(" ");
	}
	return 0;
}
