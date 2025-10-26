#include<stdio.h>
void doi(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}
int main(){
	int t;
	scanf("%d", &t);
	for(int h=1;h<=t;h++){
		int n,m;
		scanf("%d%d", &n, &m);
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", h);
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				for(int i1=i; i1<n; i1++){
					for(int j1=j; j1<m; j1++){
						if(a[i][j] > a[i1][j1]){
							doi(&a[i][j], &a[i1][j1]);
						}
					}
				}
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}