#include<stdio.h>
#include<math.h>
int tn(int n){
	int s=0, m=n;
	while(n){
		if(n%10==9) return 0;
		s=s*10+n%10;
		n/=10;
	}
	if(s==m) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	int x=0;
	for(int i=2;i<t;i++){
		if(tn(i)){
			printf("%d ", i);
			x++;
		}
	}
	printf("\n");
	printf("%d", x);
}