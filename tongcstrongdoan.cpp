#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c=0;
	scanf("%d %d", &a, &b);
	if(a>b){
		for(int i=b;i<=a;i++){
			c+=i;
		}
	}
	else{
		for(int i=a;i<=b;i++){
			c+=i;
		}
	}
	printf("%d", c);
}