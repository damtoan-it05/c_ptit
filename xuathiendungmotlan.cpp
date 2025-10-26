#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n] ,b[100000]={}, x=0;
	for(int i=0; i<n;i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	for(int i=0; i<n;i++){
		if(b[a[i]]==1) x++;
	}
	printf("%d\n", x);
	for(int i=0; i<n;i++){
		if(b[a[i]]==1) printf("%d ", a[i]);
	}
}