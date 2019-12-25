#define _CRT_SECURE_NO_WARNINGS
//该方法采用非暴力方法解题.
//经过我的反复看代码, 看题,
//我觉得这个代码不对, 但是是能在codeup.cn上AC的
//案例 9 2 1 3 5 7
//案例 9 2 1 3 6 7
//输出结果一样, 很明显下面的应该的比上面的多一颗树
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n,m,x,y,maxs,mins,a,rest;
    scanf("%d %d",&n,&m);

    //可以使其输入很多组，直到n，m均为0时停止循环，输出结果
    while(n != 0 && m != 0){
        int arr[2*m];
        int j = 0;
        for(int i = 0; i < m; i ++){
            scanf("%d %d",&x,&y);
            arr[j] = x; j++;
            arr[j] = y; j++;
        }
        maxs = arr[0];
        mins = arr[0];
        //比较最大的区间端点
        for(int i = 1;i < 2*m;i ++){
            if(maxs <= arr[i]){
                maxs = arr[i];
            }
        }
        //比较最小区间端点
        for(int i = 0;i < 2*m;i ++){
            if(mins >= arr[i]){
                mins = arr[i];
            }
        }
        //计算区间中有多少棵树（包含端点）
        a = maxs - mins + 1;
        rest = (n + 1) - a;
        printf("%d\n",rest);
        scanf("%d %d",&n,&m);
    }
    return 0;
}
