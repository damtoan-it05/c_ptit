#include<stdio.h>
#include<math.h>
int main(){
	int a;
	scanf("%d", &a);
	while(a--){
	int n;
	scanf("%d", &n);
	for(int i=2;i<=n;i++){
		if(n%i==0){
			while(n%i==0){
				printf("%d ", i);
				n/=i;
			}
	}
		}
			printf("\n");
	}
}