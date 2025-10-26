#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	int a[t];
	for(int i=0;i<t;i++){
		scanf("%d", &a[i]);
	}
	int x;
	scanf("%d", &x);
	for(int i=x;i<t;i++) printf("%d ", a[i]);
	for(int i=0;i<x;i++) printf("%d ", a[i]);
}