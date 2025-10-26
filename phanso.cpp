#include<stdio.h>
#include<string.h>
struct phanso{
	int tu,mau;
};
int uoc(int a, int b){
	while(a!=0){
		int x=a;
		a=b%a;
		b=x;
	}
	return b;
}
int boi(int a, int b){
	return a*b/uoc(a,b);
}
typedef struct phanso PS;
int main(){
	int t;
	scanf("%d", &t);
	PS a,b,c,d;
	for(int h=1;h<=t;h++){
		scanf("%d%d%d%d", &a.tu,&a.mau, &b.tu,&b.mau);
		int a1=uoc(a.tu,a.mau);
		   a.tu/=a1;
		   a.mau/=a1;
		int b1=uoc(b.tu,b.mau);
		   b.tu/=b1;
		   b.mau/=b1;
		int mc=boi(a.mau,b.mau);
		   a.tu*=(mc/a.mau);
		   a.mau=mc;
		   b.tu*=(mc/b.mau);
		   b.mau=mc;
		   c.tu=a.tu+b.tu;
		   c.mau=a.mau;
		printf("Case #%d:\n", h);
		printf("%d/%d ", a.tu,a.mau);
		printf("%d/%d\n", b.tu,b.mau);
		int uc=uoc(a.tu,b.tu);
		   a.tu/=uc;
		   b.tu/=uc;
		   d.tu=a.tu;
		   d.mau=b.tu;
		printf("%d/%d\n", c.tu,c.mau);
		printf("%d/%d\n", d.tu,d.mau);
	}
}