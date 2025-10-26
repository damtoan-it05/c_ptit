#include<stdio.h>
#include<math.h>
#include<string.h>
int chan(char a[]){
	for(int i=0;i<strlen(a);i++){
		if((a[i]-'0')%2!=0||a[i]!=a[strlen(a)-1-i]) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    char a[500];
	    scanf("%s", a);
	    if(chan(a)) printf("YES\n");
		else printf("NO\n");
	}
}