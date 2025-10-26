#include<stdio.h>
#include<math.h>
int main(){
	int n ,m, a;
	scanf("%d %d", &n,&m);
	int x=m;
	if(n>m){
		a=n;
		while(a>m){
		printf("%d", a);
		for(int k=a-1;k>=a-m+1;k--){
		printf("%d", k);
		}
		a--;
		printf("\n");
		if(a==m)break;
	}
		}
	for(int i=1;i<=n;i++){
		for(int j=x;j>=2;j--){
			if(i>m)break;
		    printf("%d", j);
		}
		x--;
		for(int j=1;j<=i;j++){
			if(i>m)break;
			printf("%d", j);
			}
		printf("\n");	
	}
}

