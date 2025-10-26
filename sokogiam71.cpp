#include<stdio.h>
#include<math.h>
int kgiam(int n) {
	int x, y;
	while(n) {
		x=n%10;
		n/=10;
		y=n%10;
		if(x<y) return 0;
	}
	return 1;
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int s = pow(10,n-1), e = pow(10,n); 
		for(int i=s; i< e; i++) {
			if(kgiam(i)) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}