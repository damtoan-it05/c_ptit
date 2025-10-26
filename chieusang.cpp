#include<stdio.h>
int main (){
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int a[n+2], b[n+2];
	for(int i=1;i<n+2;i++){
		a[i]=0;
		b[i]=0;
	}
	for(int i=1;i<=m;i++){
		int x;
		scanf("%d", &x);
		a[x]++;
		b[x]=x;
	}
	a[0]=1;a[n+1]=1;
	for(int j=1;j<=n;j++){
		if(b[j]==j){
			for(int i=1;i<=n;i++){
				if(i>=j-k&&i<=j+k){
				   a[i]=1;
		    	}
			}
		}
	}
	int x=0,c=0;
	for(int j=1;j<=n;j++){
		if(a[j]==0){
			c++;
			if(c==(2*k+1)||a[j+1]==1){
				x++;
				c=0;
			}	
		}
	}
	printf("%d", x);
}