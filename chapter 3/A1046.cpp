#define _CRT_SECURE_NO_WARNINGS
/* ���������ǳ����׳�ʱ, ��Ϊ�����K��������ʱ, ��ѯ�����Զʱ
 * ����������������, ��ɳ�ʱ;
 * �ο�����Ĵ���, д�ķǳ���, ���������ʱ, �����Ż�, �洢���1��ÿһ�����
 * �ľ���, ����������N��M(N<M)�ľ�����, ֻ��Ҫ��1��M�ľ����ȥ1��N�ľ���
 * ���������еľ���ǡ�þ�����һȦ�ľ����ȥ�ղŵľ���. �ǳ������뷨.
 */
#include <stdio.h>

int main(){
	int K;
	scanf("%d", &K);
	int Distance[K];
	int sum_dis=0;
	for(int i=0; i<K; ++i){
		scanf("%d",&Distance[i]);
		sum_dis += Distance[i];
	}
	int M;
	scanf("%d", &M);
	int start, end;
	for(int i=0; i<M; ++i){
		int left = 0;
		scanf("%d %d", &start, &end);
		if(start==end){
			printf("0");
			if(i!=M-1){ printf("\n"); continue; }
			else continue;
		}
		if(start > end){
			int temp = start;
			start = end;
			end = temp;
		}
		for(int j=start-1; j<end-1; j++){
			left += Distance[j];
		}
		if(left>sum_dis-left) printf("%d", sum_dis-left);
		else printf("%d", left);
		if(i!=M-1) printf("\n");			
	}
	return 0;
}
