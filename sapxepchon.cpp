#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n+1];
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=1;i<n;i++){
		printf("Buoc %d: ", i);
		int c=i;
		for(int j=i+1;j<=n;j++){
			if(a[j]<a[c]){
				c=j;
			}
		}
		int x=a[c];
		a[c]=a[i];
		a[i]=x;	
		for(int j=1;j<=n;j++){
			printf("%d ", a[j]);
		}
		printf("\n");
	}
}