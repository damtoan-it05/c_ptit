#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int x=0, y=0;
	for(int i=0;i<n;i++) if(a[i]>x) x=a[i];
	for(int i=0;i<n;i++) if(a[i]>y&&a[i]!=x) y=a[i];
	printf("%d %d", x, y);
}