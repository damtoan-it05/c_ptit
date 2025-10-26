#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char* chuanhoa(char *s){
	for(int i=0;i<strlen(s);i++){
		s[i]=tolower(s[i]);
	}
	return s;
}
int main(){
	char a[100];
	gets(a);
	chuanhoa(a);
	char b[20][50];
	int x=0;
	char *token=strtok(a, " ");
	while(token!=NULL){
		strcpy(b[x],token);
		x++;
		token=strtok(NULL, " ");
	}
	for(int i=0;i<x-1;i++){
		printf("%c", b[i][0]);
	}
	printf("%s@ptit.edu.vn", b[x-1]);
}