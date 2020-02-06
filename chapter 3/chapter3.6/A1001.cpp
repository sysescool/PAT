#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

int main(){
	int a, b;
	scanf("%d %d",&a,&b);
	int sum = a+b;
	if(sum<0){ printf("-"); sum = -sum;}
	if(sum==0){ printf("0"); return 0;}
	char ans[20];
	int i=0;
	while(sum!=0){
		if(i%4==3){
			ans[i] = ',' ;
			i++;
		}
		ans[i] = '0'+sum%10;
		sum=sum/10;
		i++;
	}
	for(int j=i-1; j>=0; j--){
		printf("%c", ans[j]);
	}
	return 0;
}
