#include<stdio.h>
#include<math.h>
int gi(int n){
	int x, y;
	while(n>=10){
		x=n%10;
		n/=10;
		y=n%10;
		if(x>=y) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		int a, b, c=0;
		scanf("%d %d", &a, &b);
		for(int i=a;i<=b;i++){
			if(gi(i)) c++;
		}
		printf("%d\n", c);
	}
}