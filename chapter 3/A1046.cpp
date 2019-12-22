#define _CRT_SECURE_NO_WARNINGS
/* 这种做法非常容易超时, 因为当结点K个数过多时, 查询距离较远时
 * 反复遍历距离数组, 造成超时;
 * 参考晴神的代码, 写的非常好, 在输入距离时, 将其优化, 存储结点1到每一个结点
 * 的距离, 这样计算结点N到M(N<M)的距离是, 只需要拿1到M的距离减去1到N的距离
 * 而反向绕行的距离恰好就是绕一圈的距离减去刚才的距离. 非常棒的想法.
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
