#include<stdio.h>
#include<math.h>
int UC(int n, int m){
	int s;
	while(m*n!=0){
		if(m>n) m=m%n;
		else n=n%m;
		s=n+m;
	}
	return s;
}
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a, b, c, d, x, y;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		x=UC(a, b);
		y=UC(c, d);
		if(x==y){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}