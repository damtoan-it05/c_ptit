#include<stdio.h>
void sapxep(int a[],int b[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int x=a[i];
				a[i]=a[j];
				a[j]=x;
				int y=b[i];
				b[i]=b[j];
				b[j]=y;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n], b[n];
	for(int i=0;i<n;i++){
		scanf("%d ", &a[i]);
		scanf("%d", &b[i]);
	}
	sapxep(a,b,n);
	int max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]) max=a[i];
		max+=b[i];
	}
	printf("%d", max);
}