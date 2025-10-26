#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
	    int n, m, x=0;
		scanf("%d%d", &n, &m);
		for(int j=1;j<=n;j++){
			int k=j;
			if(k%m==0){
				while(k%m==0){
					x++;
					k/=m;
				}
			}
		}
		printf("%d\n", x);
	}
}