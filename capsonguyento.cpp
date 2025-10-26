#include<stdio.h>
#include<math.h>
int check(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a;
		scanf("%d", &a);
		if(a%2==0){
			for(int i=2;i<=a;i++){
				int x=i,y=a-i;
				if(check(x)&&check(y)&&x<=y) printf("%d %d ", x, y);
			}
		}
		printf("\n");
	}
}