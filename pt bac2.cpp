#include <stdio.h>
#include <math.h>
int main(){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double D=b*b-4*a*c;
	if(D<0){
		printf("NO");
	}
	else if(D>0){
		double a1=(-b+sqrt(D))/(2*a);
		double a2=(-b-sqrt(D))/(2*a);
		printf("%.2lf %.2lf",a1, a2);
	}
	else{
		double k=-b/(2*a);
		printf("%.2lf",k);
	}
}