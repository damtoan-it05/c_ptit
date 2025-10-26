#include<stdio.h>
#include<math.h>
int main(){
	int m, n, p, q;
	scanf("%d%d%d%d", &m, &n, &p, &q);
	int a1[m][n], a2[n][p], a3[p][q];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) scanf("%d", &a1[i][j]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++) scanf("%d", &a2[i][j]);
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++) scanf("%d", &a3[i][j]);
	}
	int a12[m][p],a123[m][q];
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			a12[i][j]=0;
			for(int k=0;k<n;k++){
				a12[i][j]+=a1[i][k]*a2[k][j];
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			a123[i][j]=0;
			for(int k=0;k<p;k++){
				a123[i][j]+=a12[i][k]*a3[k][j];
			}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			printf("%d ", a123[i][j]);
		}
		printf("\n");
	}
}