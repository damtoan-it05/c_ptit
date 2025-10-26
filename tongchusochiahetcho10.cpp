#include<stdio.h>
#include<math.h>
int main(){
	int n, m;
	scanf("%d", &n);
	while(n--){
		int a, sum=0;
		scanf("%d", &a);
		while(a>0){
		m=a%10;
		sum+=m;
		a/=10;
		}
		if(sum%10==0){
			printf("YES");
		}
		else{
			printf("NO");
		}
		printf("\n");
	}
}