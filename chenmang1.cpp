#include<stdio.h>
#include<math.h>
int main(){
	int n, m, x;
	scanf("%d%d", &n,&m);
    int a[n], b[m];
	for(int i=0;i<n;i++) scanf("%d", &a[i]);
	for(int i=0;i<m;i++) scanf("%d", &b[i]);
	scanf("%d", &x);
	for(int i=0;i<x;i++) printf("%d ", a[i]);
    for(int i=0;i<m;i++) printf("%d ", b[i]);
    for(int i=x;i<n;i++) printf("%d ", a[i]);
}