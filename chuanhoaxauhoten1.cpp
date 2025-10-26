#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char* chuanhoa(char *s){
	s[0] = toupper(s[0]);
	for(int i=1; i<strlen(s);i++){
		s[i]=tolower(s[i]);
	}
	return s;
}
int main(){
	int t;
	scanf("%d", &t);
	scanf("\n");
	while(t--){
		char a[100];
		gets(a);
		char res[100]="";
		char *token=strtok(a, " ");
		while(token!=NULL){
			chuanhoa(token);
			strcat(res,token);
			if(token!=NULL){
				strcat(res," ");
			}
			token=strtok(NULL, " ");
		}
		printf("%s\n", res);
	}
}