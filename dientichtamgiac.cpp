#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
struct tamgiac{
	double a,b,c,p,s;
};
typedef struct tamgiac T;
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	T x[4];
	for(int i=1;i<=t;i++){
		double x1,y1,x2,y2,x3,y3;
		scanf("%lf%lf%lf%lf%lf%lf", &x1,&y1 ,&x2,&y2, &x3,&y3);
		x[i].a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		x[i].b = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		x[i].c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
		if((x[i].a + x[i].b) > x[i].c && (x[i].a + x[i].c) > x[i].b && (x[i].c + x[i].b) > x[i].a && x[i].a!=0){
			x[i].p = (x[i].a + x[i].b + x[i].c)/2;
			x[i].s = sqrt(x[i].p*(x[i].p-x[i].a)*(x[i].p-x[i].b)*(x[i].p-x[i].c));
			printf("%.2lf\n", x[i].s);
		}
		else printf("INVALID\n");
	}
}