#define _CRT_SECURE_NO_WARNINGS 
#include <cstdio> 
#include <cstring> 
#include <algorithm>

int main(){ 
	char anum[105], bnum[105], cnum[110]; 
	char s[14] = {'0','1','2','3','4','5','6','7','8','9','J','Q','K'}; 
	scanf("%s %s", anum, bnum);
       	int alen = strlen(anum) - 1;
       	int blen = strlen(bnum) - 1; 
	int c, savec;
       	if(alen>blen) {c=alen; savec=alen; } 
	else {c=blen; savec=blen; }
	while(alen>=0 || blen>=0 ){
		int numa = alen<0 ? 0:anum[alen]-'0';
		int numb = blen<0 ? 0:bnum[blen]-'0';
	       	if( c%2==1 ){ 
			int temp = numb - numa; 
			if(temp < 0) temp = temp + 10; 
			cnum[c] = temp + '0'; 
		} 
		if( c%2==0 ){ 
			cnum[c] = s[ (numb + numa)%13 ]; 
		}
	        //printf("%s %d %d %d\n", cnum, alen, blen, c);	
		blen--;	alen--; c--; 
	} 
	cnum[savec+1]='\0';
	printf("%s", cnum);
	return 0;
}
