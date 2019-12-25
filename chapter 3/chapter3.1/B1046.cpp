#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(){
	int jspeak, jdo, yspeak, ydo;
	int jwin=0, ywin=0;
	int n;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d %d %d", &jspeak, &jdo, &yspeak, &ydo);
		if(jdo==ydo) continue;
		else{
			if(jdo==jspeak+yspeak) jwin++;
			if(ydo==jspeak+yspeak) ywin++;
		}	
	}
	printf("%d %d", ywin, jwin);
	return 0;
}
