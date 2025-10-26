#include<stdio.h>
#include<math.h>

int main(){
	int a;
	scanf("%d", &a);
	while(a--){
	int n;
	scanf("%d", &n);
	int c=0, l=0;
	while(n){
	if(n%2==0)c++;
	else l++;
	n/=10;
}
	printf("%d %d\n", l, c);
}
}