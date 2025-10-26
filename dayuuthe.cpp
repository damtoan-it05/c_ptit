#include<stdio.h>
int check(int a[], int x){
	int c=0,l=0;
	for(int i=0;i<x;i++){
		if(a[i]%2==0) c++;
		else l++;
	}
	if(x%2==0&&c>l) return 1;
	if(x%2==1&&c<l) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a[205]={0}, x=0;
		while(scanf("%d", &a[x++])!=-1){
			char c=getchar();
			if(c=='\n') break;
		}
		if(check(a, x)) printf("YES\n");
		else printf("NO\n");
	}
}