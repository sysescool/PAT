#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

int main(){
	char day[7][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	char str1[70], str2[70], str3[70], str4[70];
	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%s", str3);
	scanf("%s", str4);
	int i=0;
	for(i=0; i<strlen(str1) && i<strlen(str2); ++i){
		if(str1[i] == str2[i]){
			if(str1[i] >= 'A' && str1[i] <='G'){
				printf("%s ",day[str1[i]-'A']);
				break;
			}
		}
	}
	for(int j=i+1; j<strlen(str1) && j<strlen(str2); ++j){
		if(str1[j] == str2[j]){
			if(str1[j] >= '0' && str1[j] <='9'){
				printf("%02d:", str1[j]-'0');
				break;
			}if(str1[j] >= 'A' && str1[j] <= 'N'){
				printf("%02d:", str1[j]-'A'+10);
				break;
			}
		}
	}
	for(int j=0; j<strlen(str3) && j<strlen(str4); ++j){
		if(str3[j] == str4[j]){
			if( (str3[j]>='A' && str3[j]<='Z') || (str3[j]>='a' && str3[j]<='z') ){
				printf("%02d\n", j);
				break;
			}
		}
	}
	return 0;
}
