#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int d=1, a[n+1];
	for(int i=1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=n;i++){
		int x=0;
		for(int j=1;j<n;j++){
			if(a[j]>a[j+1]){
				int c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
				x=1;
			}
		}
		if(x){
	        printf("Buoc %d: ", d++);
		    for(int j=1;j<=n;j++){
		        printf("%d ", a[j]);	
		    }
	        printf("\n");
		}
	}
}