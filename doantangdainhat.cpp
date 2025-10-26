#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int n, x=0,y=1,s=0;
		scanf("%d",&n);
		int a[n+1], b[n+1][n+1], c[n+1];
		a[0]=1000;
		for(int j=1;j<=n;j++){
			scanf("%d",&a[j]);
			if(a[j-1]>=a[j]){
				c[x]=y;
				y=1;
				x++;
			}
			b[x][y++]=a[j];
			if(y>s) s=y;
		}
		c[x]=y;
		printf("Test %d:\n", i);
		printf("%d\n", s-1);
		for(int j=0;j<=x;j++){
			if(c[j]==s){
				for(int k=1;k<s;k++){
					printf("%d ", b[j][k]);
				}
				printf("\n");
			}
		}
	}
}