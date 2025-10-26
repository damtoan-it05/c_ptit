#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char a[101], b[101];
    gets(a);
    scanf("%s", b);
    char *token=strtok(a," ");
		while(token!=NULL){
			if(strcmp(token,b)!=0){
				printf("%s ", token);
		    }
		    token = strtok(NULL, " ");
		}
}