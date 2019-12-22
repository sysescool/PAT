#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	for(int i=0; i<N; ++i){
		long long a, b, c;
		scanf("%lld %lld %lld", &a, &b, &c);
		if(a>0 && b>0 && a+b<0) printf("Case #%d: true\n", i+1);
		else if(a<0 && b<0 && a+b>=0) printf("Case #%d: false\n", i+1);
		else if(a+b>c) printf("Case #%d: true\n", i+1);
		else printf("Case #%d: false\n", i+1);
	}
	return 0;
}
