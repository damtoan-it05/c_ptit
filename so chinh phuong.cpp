#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a;
		scanf("%d", &a);
		int b=sqrt(a);
		if(b*b==a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}