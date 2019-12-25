#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	long long a, b, c;
	int T;
	scanf("%d", &T);
	int i=1;
	while(T--){
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a+b>c) printf("Case #%d: true\n", i++);
		else printf("Case #%d: false\n", i++);
	}
	return 0;
}
