#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int even=0;
		while(n--){
			int a;
			scanf("%d",&a);
			if(a%2==0) even++;
		        else even--;	
		}
		if(even>0) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
