#define _CRT_SECURE_NO_WARNINGS
//�÷������÷Ǳ�����������.
//�����ҵķ���������, ����,
//�Ҿ���������벻��, ����������codeup.cn��AC��
//���� 9 2 1 3 5 7
//���� 9 2 1 3 6 7
//������һ��, �����������Ӧ�õı�����Ķ�һ����
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n,m,x,y,maxs,mins,a,rest;
    scanf("%d %d",&n,&m);

    //����ʹ������ܶ��飬ֱ��n��m��Ϊ0ʱֹͣѭ����������
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
        //�Ƚ���������˵�
        for(int i = 1;i < 2*m;i ++){
            if(maxs <= arr[i]){
                maxs = arr[i];
            }
        }
        //�Ƚ���С����˵�
        for(int i = 0;i < 2*m;i ++){
            if(mins >= arr[i]){
                mins = arr[i];
            }
        }
        //�����������ж��ٿ����������˵㣩
        a = maxs - mins + 1;
        rest = (n + 1) - a;
        printf("%d\n",rest);
        scanf("%d %d",&n,&m);
    }
    return 0;
}
