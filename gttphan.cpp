#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		double a;
		scanf("%lf", &a);
		printf("%.15lf\n", 1/a);
	}
}