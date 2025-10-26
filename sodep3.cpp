#include<stdio.h>
#include<math.h>
#include<string.h>
int ngt(int n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int check(char a[]){
	int s=0;
	for(int i=0;i<strlen(a);i++){
		s+=(a[i]-'0');
		if(a[i]!=a[strlen(a)-1-i]||ngt((a[i]-'0'))==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char a[500];
		scanf("%s", a);
		if(check(a)) printf("YES\n");
		else printf("NO\n");
	}
}