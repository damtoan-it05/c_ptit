#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int a[10]={1,2,5,10,20,50,100,200,500,1000};
	while(t--){
		int n, x=0;
		scanf("%d", &n);
		for(int i=9;i>=0;i--){
			if(n>=a[i]){
				while(n>=a[i]){
					n=n-a[i];
					x++;
				}
			}
		}
		printf("%d\n", x);
	}
}