#include <stdio.h>
#include<string.h>
int check(char s[]){
	int x=0, a=strlen(s);
	for(int i=0;i<a/2;i++){
		if(s[i]!=s[a-i-1]) x++;
	}
	if((a%2==0&&x==1)||(a%2==1&&x<=1)) return 1;
	return 0;
}
int main() {
	int t;
	scanf("%d", &t);
	scanf("\n");
	while(t--){
		char s[25];
		gets(s);
		if(check(s)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}