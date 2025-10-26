#include<stdio.h>
#include<string.h>
char t[10005];
int a[5]={},b[5]={};
int check(){
	for(int i=1;i<=3;i++){
		if(a[i]!=b[i]) return 0;
	}
	if(a[4]%2!=0||b[4]%2!=0) return 0;
	return 1;
}
int main(){
	gets(t);
	int n=strlen(t);
	for(int i=0;i<n;i++){
		if(t[i]=='(') a[1]++;
		else if(t[i]==')') b[1]++;
		else if(t[i]=='[') a[2]++;
		else if(t[i]==']') b[2]++;
		else if(t[i]=='{') a[3]++;
		else if(t[i]=='}') b[3]++;
		else if(t[i]=='"') a[4]++;
		else b[4]++;
	}
    if(check()) printf("1");
    else printf("0");
}