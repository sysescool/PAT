#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int number[N];
	for(int i=0; i<N; ++i){
		scanf("%d", &number[i]);
	}
	bool f[5]={false};
	int a[5]={0};
	int flag=1;
	int count=0;
	for(int i=0; i<N; ++i){
		if(number[i]%5==0){
			if(number[i]%2==0){
				f[0] = true;
				a[0] += number[i];
			}
		}
		else if(number[i]%5==1){
			f[1] = true;
			if(flag){
				a[1] += number[i]; flag=0;
			}else{
				a[1] -= number[i]; flag=1;
			}
		}
		else if(number[i]%5==2){
			f[2] = true;
			a[2] += 1;
		}
		else if(number[i]%5==3){
			f[3] = true;
			count++;
			a[3] += number[i];
		}
		else if(number[i]%5==4){
			f[4] = true;
			if(number[i]>a[4]) a[4] = number[i];
		}
	}
	for(int i=0; i<5; ++i){
		if(i<3){
			if(f[i]==true) printf("%d ",a[i]);
			else printf("N ");
		}
		if(i==3){
			if(f[3]==true) printf("%.1lf ", a[3]*1.0/count);
			else printf("N ");
		}
		if(i==4){
			if(f[4]==true) printf("%d", a[4]);
			else printf("N");
		}			
	}
	return 0;
}
