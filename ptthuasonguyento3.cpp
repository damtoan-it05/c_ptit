#include<stdio.h>
#include<math.h>
void t(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int x=0;
			while(n%i==0){
				x++;
				n/=i;
			}
			printf("%d(%d) ", i, x);		
		}
	}
	if(n!=1)printf("%d(1)", n);
}
int main(){
	int a;
	scanf("%d", &a);
	for(int i=1;i<=a;i++){
		int n;
		scanf("%d", &n);
		printf("Test %d: ", i);
		t(n);
		printf("\n");
	}
}