#include <stdio.h>
#include <math.h>
int main(){
	int n, m, tong=1;
	scanf("%d", &n);
	while(n>0){
		m=n%10;
		tong*=m;
		n=n/10;
	}
	printf("%d", tong);
}