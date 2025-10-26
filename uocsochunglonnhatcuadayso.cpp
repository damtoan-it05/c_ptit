#include<stdio.h>
#include<string.h>
int uoc(int a,int b){
	while(a!=0){
		int x=a;
		a=b%a;
		b=x;
	}
	return b;
}
int boi(int a, int b){
	return a*b/uoc(a,b);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n], b[n+1];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		b[0]=a[0];
		for(int i=0;i<n;i++){
			b[i+1]=boi(a[i],a[i+1]);
			
		}
		b[n]=a[n-1];
		for(int i=0;i<=n;i++){
			printf("%d ", b[i]);
		}
		printf("\n");
	}
}