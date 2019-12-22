#include<cstdio>
int main(){
	int l,m;
	int sum;
	while(scanf("%d %d",&l,&m)!=EOF){ 
		sum=0;
		bool delect[l+1]={false};
		if(l==0 || m==0)	continue;
		for(int i=0;i<l+1;i++)		delect[i]=true; 
		while(m--){
			int a,b;
			scanf("%d %d",&a,&b);
			for(int i=a;i<=b;i++){
				delect[i]=false; 
			} 	
		}
		for(int i=0;i<l+1;i++){
			if(delect[i])	sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
	
} 
