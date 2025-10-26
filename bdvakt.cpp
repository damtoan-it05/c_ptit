#include <stdio.h>
#include <math.h>
int main(){
	int a;
	scanf("%d", &a);
	while(a--){
		int n;
		scanf("%d", &n);
		int x = n%10;
		while(n>9){
				n=n/10;
		}
		if(x==n){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}