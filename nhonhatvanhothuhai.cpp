#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n;i++) scanf("%d", &a[i]);
	int c=100000, d=100000;
	for(int i=0; i<n;i++) if(a[i]<c) c=a[i];
	for(int i=0; i<n;i++) if(a[i]<d&&c!=a[i]) d=a[i];
	printf("%d %d", c, d);
	
}