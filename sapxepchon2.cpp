#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		int ok=0,x=i;
		for(int j=i+1;j<n;j++){
			if(a[x]>a[j]){
				x=j;
			}
		}
		int c=a[x];
		a[x]=a[i];
		a[i]=c;
		if(i<n-1){
			for(int j=0;j<n;j++){
		        printf("%d ", a[j]);
		    }
		    printf("\n");
		}
	}
}