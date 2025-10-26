#include<stdio.h>
#include<math.h>
void t(int n){
	int x=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(n/i!=i){
			  if(i%2==0) x++;
			  if(n/i%2==0) x++;
			}
			else if(n/i==i){
				if(n%2==0) x++;
			}
		}
	}
	printf("%d", x);
}
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a;
		scanf("%d", &a);
		t(a);
		printf("\n");
	}
}