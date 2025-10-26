#include <stdio.h>
#include <math.h>
int main(){
	int a;
	scanf("%d", &a);
	while(a--){
		int n;
		scanf("%d", &n);
		if(n<2){
			printf("NO");
		}
		
		int x=1;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
			x=0;
			break;	
			}
		}
		if(x==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}