#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char* chuanhoa(char *s){
	s[0]=toupper(s[0]);
	for(int i=1;i<strlen(s);i++){
		s[i]=tolower(s[i]);
	}
	return s;
}
char* chuanhoa1(char *s){
	for(int i=0;i<strlen(s);i++){
		s[i]=toupper(s[i]);
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
		char c[100]=", ";
		char *token=strtok(a, " ");
		int ok=1;
		while(token!=NULL){
			chuanhoa(token);
			if(ok==1){
				chuanhoa1(token);
				strcat(c,token);
				ok=0;
			}
			else{
				strcat(res,token);
			    if(token!=NULL){
				    strcat(res," ");
			    }
			}
			token=strtok(NULL, " ");
		}
		int x=strlen(res);
		res[x-1]=NULL;
		printf("%s", res);
		printf("%s\n", c);
	}
}