#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
	char a[30], b[30];
	while(scanf("%s %s",a,b)!=EOF){
		int sum = 0;
		for(int i=0; i<strlen(a); i++){
			for(int j=0; j<strlen(b); j++){
				sum += (a[i]-'0')*(b[j]-'0'); 	
			}
		}
		printf("%d\n",sum);
	}
}
