#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
	char s[10][6]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	char ans[1000][6];
	char n[105];
	scanf("%s", n);
	int sum=0;
	int i=0;
	for(i=0; i<strlen(n); i++){
		sum += n[i] - '0';
	}
	i=0;
	do{
		strcpy(ans[i], s[sum%10]);
		sum = sum/10;
		i++;
	}while(sum!=0);
	for(int j=i-1; j>=0; j--){
		printf("%s", ans[j]);
		if(j!=0) printf(" ");
	}
	return 0;
}
