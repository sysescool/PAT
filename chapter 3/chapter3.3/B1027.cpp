#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 相对于B1027_2.cpp中晴神的写法, 晴神的写法需要提前进行数学推导
 * 对数学要求较高, 这种写法, 是算出行高, 根据行高和所在输出行计算空格和字母
 */
int main(){
	int n;
	char c;
	scanf("%d %c", &n, &c);
	if(n<7){
		printf("%c\n%d",c, n-1); return 0;
	}
	int N=n;
	n=n-1;
	int j = 1;
	while(n>=0){
		n=n-2*(2*j+1);
		j++;
	}
	//printf("%d", j-2);
	j = j - 2;
	int num=0;
	for(int i=0; i<2*j+1; i++){
		if(i<j){
			for(int k=0; k<i%j; k++) printf(" ");
			for(int k=0; k<(2*j+1-i%j*2); k++) {printf("%c", c); num++;}
			printf("\n");
		}
		else if(i==j){
			for(int k=0; k<(i-1)%j+1; k++) printf(" ");
			printf("%c\n", c);
		}
		else if(i>j){
			for(int k=0; k<2*j-i; k++) printf(" ");
			for(int k=0; k<2*j+1-4*j+2*i; k++) printf("%c", c);
			printf("\n");
		}
	}
	printf("%d", N-1-2*num);
	return 0;
}
