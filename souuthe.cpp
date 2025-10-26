#include<stdio.h>
#include<string.h>
int check(char a[]){
	int s=strlen(a), c=0, l=0;
	if((a[0]-'0')==0) return 2;
	for(int i=0;i<s;i++){
		if(a[i]<'0'||a[i]>'9') return 2;
		if((a[i]-'0')%2==0) c++;
		if((a[i]-'0')%2==1) l++;
	}
	if(s%2==0&&c>l) return 1;
	if(s%2==1&&c<l) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[1005];
		gets(a);
		if(check(a)==0){
			printf("NO\n");
		}
		if(check(a)==1){
			printf("YES\n");
		}
		if(check(a)==2){
			printf("INVALID\n");
		}
	}
}