#include <stdio.h>
#include <math.h>
int main(){
	float a,b;
	scanf("%f %f", &a, &b);
	float x=-b/a;
	if(a!=0){
		printf("%.2f", x);
	}
	else if(a==0&&b==0){
		printf("Vo so nghiem");
	}
	else{
		printf("Vo nghiem");
	}
}