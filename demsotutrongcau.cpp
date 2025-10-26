#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	scanf("\n");
	while(t--){
	    char a[200];
	    gets(a);
	    int x=0;
		char *token=strtok(a," ");
		while(token!=NULL){
			x++;
			token=strtok(NULL, " ");
		}
		printf("%d\n", x);
		scanf("\n");
	}
}