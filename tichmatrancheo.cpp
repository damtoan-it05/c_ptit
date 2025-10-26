#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int k=1;k<=t;k++){
		int n;
		scanf("%d", &n);
		int a[n][n], a1[n][n], a2[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(j<=i) a1[i][j]=j+1;
				else a1[i][j]=0;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				a2[i][j]=a1[j][i];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				a[i][j]=0;
				for(int p=0;p<n;p++){
					a[i][j]+=a1[i][p]*a2[p][j];
				}
			}
		
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