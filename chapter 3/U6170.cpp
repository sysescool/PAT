#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(){
	long long a, da, b, db, pa=0, pb=0;
	scanf("%lld %lld %lld %lld", &a, &da, &b, &db);
	
	while(a!=0){
		if(a%10==da) pa=pa*10+da;
		a = a/10;
	}
	while(b!=0){
		if(b%10==db) pb=pb*10+db;
		b = b/10;
	}
	printf("%lld",pa+pb);
	return 0;
}
