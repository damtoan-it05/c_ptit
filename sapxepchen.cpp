#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		printf("Buoc %d: ", i);
		for(int j=0;j<=i;j++){
			if(a[j]>a[i]){
			   int x=a[i];
			   a[i]=a[j];
			   a[j]=x;	
			}
		}
		for(int j=0;j<=i;j++){
			printf("%d ", a[j]);
		}
		printf("\n");
	}
}