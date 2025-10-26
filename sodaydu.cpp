#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char a[]){
	if(a[0]=='0') return 2;
	int b[10]={0};
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='0'&&a[i]<='9'){
			b[a[i]-'0']++;
		}
		if(a[i]<'0'||a[i]>'9') return 2;
	}
	for(int j=0;j<=10;j++){
	    if(b[j]==0) return 0;
	    return 1;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	scanf("\n");
	while(t--){
		char a[1005];
		gets(a);
		if(check(a)==1){
			printf("YES\n");
		}
		else if(check(a)==2) printf("INVALID\n");
		else if(check(a)==0) printf("NO\n");
	}
}