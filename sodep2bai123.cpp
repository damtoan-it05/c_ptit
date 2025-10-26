#include<stdio.h>
#include<string.h>
int check(char a[]){
	int s=0;
	for(int i=0;i<strlen(a);i++){
		s+=(a[i]-'0');
		if(a[i]!=a[strlen(a)-1-i]||(a[0]-'0')!=8&&(a[strlen(a)-1]-'0')!=8) return 0;
	}
	if(s%10!=0) return 0;
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