#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 
 * 感谢segmentfault用户crashan的回答
 * return 0; 前需要一句printf
 * 因为最后一个数据末尾没有回车的话, ch1是数字
 * 接下来的ch1是EOF, 直接退出了while循环,
 * 简单地说:最后一个输入你没处理完!
 */
int main(){
	char ch1;
	int i=0;
	int a[2]={0,0};
	int flag[2]={1,1};
	int enterflag = 0;
	while(scanf("%c",&ch1)!=EOF){
		if(ch1=='-') flag[i]=-1;
		else if(ch1==' ') i=1;
		else if('0'<=ch1 && ch1<='9')
		{
			if(enterflag) {enterflag = 0; printf("\n");}
			a[i] = a[i]*10 + ch1-'0';
		}
		else if(ch1==',') continue;
		else{
			printf("%d", flag[0]*a[0]+flag[1]*a[1]);
			enterflag = 1;
			i=0;
			flag[0]=1; flag[1]=1;
			a[0]=0; a[1]=0;
		}		
	}
	printf("%d", flag[0]*a[0]+flag[1]*a[1]);
	return 0;
}
