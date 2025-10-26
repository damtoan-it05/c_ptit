#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, x;
		scanf("%d", &n);
		long long s=0,max=0;
		for(int i=0;i<n;i++){
			scanf("%d", &x);
			s=s+x;
			if(max<s) max=s;
			if(s<0) s=0;
		}
		printf("%lld", max);
		printf("\n");
	}
}