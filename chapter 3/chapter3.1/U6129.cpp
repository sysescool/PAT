#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int N;
	while(scanf("%d", &N)!=EOF){
		int sum=0, sum2=0, flag=1, count=0, count2=0, max=0;
		int flag2=0; //
		double averg=0.0;
		while(N--){
			int a;
			scanf("%d", &a);
			if(a%10==0) sum+=a;
			if(a%5==1) {
				sum2 += (flag)*a;
			        flag = -flag;
				flag2 = 1;	
			}
			if(a%5==2){
				count++;
			}
			if(a%5==3){
				averg+=a;
				count2++;
			}
			if(a%5==4 && a>max){
				max = a;
			}
		}
		if(sum==0) printf("N "); else printf("%d ",sum);
		if(flag2==0) printf("N "); else printf("%d ",sum2);
		if(count==0) printf("N "); else printf("%d ",count);
		if(averg==0.0) printf("N "); else printf("%.1f ",averg/count2);
		if(max==0) printf("N\n"); else printf("%d\n",max);
	}
	return 0;
}
