#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n][n], c1[n], c2[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		c1[i]=a[i][i];
	}
	int j=n-1;
	for(int i=0;i<n;i++){
		c2[i]=a[i][j--];
	}
	j=n-1;
	for(int i=0;i<n;i++){
		a[i][i]=c2[i];
		a[i][j--]=c1[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}