
#define _CRT_SECURE_NO_WARNINGS

/* �����ǿ�ҽ���ο�����<<�㷨�ʼ�>>�Ľⷨ
 * ��Ŀ������, ������д������, ����Ҫ����.
 * ע��س��Ķ�ȡ
 */

#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	getchar();
	//enum hand{C=67, J=74, B=66};
	//enum hand jh, yh;
	//����ö���Ҿ���~~, ����...
	int jh=0, yh=0;
	int jc=0,jj=0,jb=0;
	int yc=0,yj=0,yb=0;
	int jwin=0, jlose=0, jtie=0;
	//int ywin=0, ylose=0, ytie=0;
	while(N--){
		scanf("%c", &jh);
	        getchar();
		scanf("%c", &yh);
		//printf("%d %d\n", jh, yh);
		getchar();
		if(jh==67){
			if(yh==67) {
				jtie++;
			}
			else if(yh==74){
				jwin++;
				jc++;
			}
			else{
				jlose++;
				yb++;
			}
		}
		else if(jh==74){
			if(yh==74){
				jtie++;
			}else if(yh==67){
				jlose++;
				yc++;
			}else if(yh==66){
				jwin++;
				jj++;
			}
		}
		else{
			if(yh==66){
				jtie++;
			}
			else if(yh==74){
				jlose++;
				yj++;
			}else{
				jwin++;
				jb++;
			}
		}
	}
	printf("%d %d %d\n", jwin, jtie, jlose);
	printf("%d %d %d\n", jlose, jtie, jwin);
	if(jb>=jc && jb>=jj) printf("B ");
	else if(jc>jb && jc>=jj) printf("C ");
	else printf("J ");
	if(yb>=yc && yb>=yj) printf("B");
	else if(yc>yb && yc>=yj) printf("C");
	else printf("J");
	return 0;
}
