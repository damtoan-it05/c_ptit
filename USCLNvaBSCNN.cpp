#include<stdio.h>
#include<math.h>
int USCLN(int n, int m){
	int kq;
	while(n*m !=0){//20 15
		if(m>n) m=m%n;//m=5
		else	n=n%m;
	}
	kq=m+n;
	return kq;
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", USCLN(a,b));
	printf("%lld", ((long long)a*b)/USCLN(a,b));
} 