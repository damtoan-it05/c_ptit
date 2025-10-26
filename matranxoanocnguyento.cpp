#include<stdio.h>
int c[1000005],b[1000005];
void ngt(){
	for(int i=2;i*i<=1000000;i++){
		if(!c[i]){
			for(int j=i*i;j<=1000000;j+=i){
				c[j]=1;
			}
		}
	}
}
int main(){
	ngt();
	int t, x=0;
	scanf("%d", &t);
	for(int i=2;i<=1000000;i++){
		if(!c[i]){
			b[x++]=i;
		}
	}
	for(int k=1;k<=t;k++){
		int n, y=0;
		scanf("%d", &n);
		int a[n][n], h1=0, h2=n-1, c1=0,c2=n-1;
		while(h1<=h2&&c1<=c2){
			for(int i=c1;i<=c2;i++){
				a[h1][i]=b[y];
				y++;
			}
			h1++;
			for(int i=h1;i<=h2;i++){
				a[i][c2]=b[y];
				y++;
			}
			c2--;
			for(int i=c2;i>=c1;i--){
				a[h2][i]=b[y];
				y++;
			}
			h2--;
			for(int i=h2;i>=h1;i--){
				a[i][c1]=b[y];
				y++;
			}
			c1++;
		}
		printf("Test %d:\n", k);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}