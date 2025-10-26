#include<stdio.h>
int a[15][15]={0};
void dao( int n ,int m){
	for(int i=n;i>=0;i--){
		for(int j=m;j>=0;j--){
			a[i][j]=1-a[i][j];
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int x=0;
	char b;
	for(int i=0;i<n;i++){
		scanf("\n");
		for(int j=0;j<n;j++){
			scanf("%c", &b);
			a[i][j] = b-'0';
		}
	}
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			if(a[i][j]==1){
				dao(i,j);
				x++;
			}
		}
	}
	printf("%d", x);
}