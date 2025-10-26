#include <stdio.h>
#include <math.h> 
int main(){
	int i, n;
	scanf("%d", &n);
	if(n>=1&&n<=9){
	for(i=1;i<=10;i++){
		printf("%d ", n*i);
	}
}
}