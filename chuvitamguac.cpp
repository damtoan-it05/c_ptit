#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
struct tamgiac{
	float a,b,c;
};
typedef struct tamgiac T;
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	T x[4];
	for(int i=1;i<=t;i++){
		float x1,y1,x2,y2,x3,y3;
		scanf("%f%f%f%f%f%f", &x1,&y1 ,&x2,&y2, &x3,&y3);
		x[i].a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		x[i].b = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		x[i].c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
		if((x[i].a + x[i].b) > x[i].c && (x[i].a + x[i].c) > x[i].b && (x[i].c + x[i].b) > x[i].a && x[i].a!=0){
			printf("%.3f\n", x[i].a + x[i].b + x[i].c);
		}
		else printf("INVALID\n");
	}
}