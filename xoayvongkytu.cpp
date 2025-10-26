#include<stdio.h>
#include<string.h>
void xoay(char a[]){
	int n=strlen(a);
	char b[n];
	strcpy(b, a);
	for(int i=1;i<n;i++){
		a[i-1]=b[i];
	}
	a[n-1]=b[0];
}
int main(){
	int n;
	scanf("%d", &n);
	int ok=1, t=1e9;
	char a[n][55], x[55], y[55];
	for(int i=0;i<n;i++){
		scanf("%s", a[i]);
	}
	strcpy(x,a[0]);
	int m=strlen(x);
	for(int i=0;i<m;i++){
		int d=0;
		for(int j=0;j<n;j++){
			int k;
			strcpy(y,a[j]);
			for(k=0;k<m;k++){
				if(strcmp(y,x)==0){
					d+=k;
					break;
				}
				xoay(y);
			}
			if(k==m){
				ok=0;
				break;
			}
		}
		if(d<t) t=d;
		xoay(x);
	}
	if(ok==0){
		printf("-1");
	}
	else printf("%d", t);
}