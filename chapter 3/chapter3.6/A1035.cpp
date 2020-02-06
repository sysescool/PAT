#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
typedef struct Student{
	bool flag;
	char name[100];
	char pass[100];
}Stu;

int main(){
	int n;
	scanf("%d", &n);
	Stu student[n];
	int sum=0;
	for(int i=0; i<n; i++){
		student[i].flag = false;
		scanf("%s %s", student[i].name, student[i].pass);
		for(int j=0; j<strlen(student[i].pass); j++){
			if(student[i].pass[j] == '1') { student[i].pass[j]='@'; student[i].flag=true; }
			else if(student[i].pass[j] == '0') { student[i].pass[j]='%'; student[i].flag=true; }
			else if(student[i].pass[j] == 'l') { student[i].pass[j]='L'; student[i].flag=true; }
			else if(student[i].pass[j] == 'O') { student[i].pass[j]='o'; student[i].flag=true; }
			else ;
		}
	}
	for(int i=0; i<n; i++){
		if(student[i].flag==true){
			sum++;
		}
	}
	if(sum!=0){
		printf("%d\n", sum);
		for(int i=0; i<n; i++){
			if(student[i].flag == true)
				printf("%s %s\n", student[i].name, student[i].pass);
		}
	}
	else{
		if(n==1) printf("There is %d account and no account is modified\n", n);
		else printf("There are %d accounts and no account is modified\n", n);
	}
	return 0;
}

