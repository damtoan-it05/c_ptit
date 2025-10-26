#include<stdio.h>
long long f[100];
void fibo(){
	f[0]=0;
	f[1]=1;
	for(int i=2;i<92;i++){
		f[i]=f[i-1]+f[i-2];
	}
}
int main(){
	int n;
	scanf("%d", &n);
	long long a[n][n];
	fibo();
	int x=0, h1=0, h2=n-1, c1=0, c2=n-1;
	while(h1<=h2&&c1<=c2){
		for(int i=c1;i<=c2;i++){
			a[h1][i]=f[x];
			x++;
		}
		h1++;
		for(int i=h1;i<=h2;i++){
			a[i][c2]=f[x];
			x++;
		}
		c2--;
		for(int i=c2;i>=c1;i--){
			a[h2][i]=f[x];
			x++;
		}
		h2--;
		for(int i=h2;i>=h1;i--){
			a[i][c1]=f[x];
			x++;
		}
		c1++;
    }
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}