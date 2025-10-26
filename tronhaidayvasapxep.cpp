#include<stdio.h>
void doi(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		int n;
		scanf("%d", &n);
		int a[n],b[n];
		for(int j=0;j<n;j++){
			scanf("%d", &a[j]);
		}
		for(int j=0;j<n;j++){
			scanf("%d", &b[j]);
		}
	    for(int j=0;j<n;j++){
	    	for(int k=j+1;k<n;k++){
	    		if(a[j]>a[k]){
	    			doi(&a[j],&a[k]);
				}
				if(b[j]<b[k]){
	    			doi(&b[j],&b[k]);
				}
			}
		}
		printf("Test %d:\n", i);
		int x=0,y=0;
		for(int j=0;j<n*2;j++){
			if(j%2==0) printf("%d ", a[x++]);
			else printf("%d ", b[y++]);
		}
		printf("\n");
	}
}