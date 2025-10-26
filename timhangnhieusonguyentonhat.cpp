#include<stdio.h>
#include<stdio.h>
int check(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int n, m, max=0;
	scanf("%d", &n);
	int a[n][n], b[n][n];
	for(int i=0;i<n;i++){
		int c=0;
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
			if(check(a[i][j])){
				b[i][c]=a[i][j];
				c++;
			}
		}
		if(c>max){
			max=c;
			m=i;
		}
	}
	printf("%d\n", m+1);
	for(int i=0;i<max;i++){
		printf("%d ", b[m][i]);
	}
}