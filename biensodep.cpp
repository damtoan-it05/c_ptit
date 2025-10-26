#include<stdio.h>
#include<string.h>
int check(char a[]){
	if(a[6]<a[7]&&a[7]<a[8]&&a[8]<a[10]&&a[10]<a[11]) return 1;
	if(a[6]==a[7]&&a[7]==a[8]&&a[10]==a[11]) return 1;
	for(int i=6;i<=11;i++){
		if(i!=9){
			if(a[i]!='6'&&a[i]!='8') return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	scanf("\n");
	while(t--){
		char a[50];
		gets(a);
		if(check(a)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}