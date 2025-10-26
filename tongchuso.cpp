#include <stdio.h>
#include <math.h>
int main(){
	int n, m, tong=0;
	scanf("%d", &n);
	while(n>0){
		m=n%10;
		tong=tong+m;
		n=n/10;
	}
	printf("%d", tong);
}