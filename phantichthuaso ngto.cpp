#include<stdio.h>
#include<math.h>
void phantich(int n){
	for(int i=2;i<=sqrt(n);i++){
		int x=0;
		while(n%i==0){
			x++;
			n/=i;
		}
	if(x!=0){
		printf("%d^%d", i, x);
	if(n!=1){
		printf(" * ");
	}
	}
	}
	if(n!=1){
		printf("%d^1", n);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a;
		scanf("%d", &a);
		printf("%d = ", a);
	    phantich(a);
	    printf("\n");
	}
}