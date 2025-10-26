#include<stdio.h>
#include<string.h>
int check(int a[], char s[], int n){
	int b, c=0, d[15], sum;
	for(int i=2; i<=n;i++){
		for(int j=0;j<=9;j++){
			d[j]=0;
		}
		for(int j=n-1;j>=0;j--){
			sum=(s[j]-'0')*i+c;
			b=sum%10;
			d[b]++;
			c=sum/10;
		}
		if(c>0){
			d[c]++;
		}
		for(int j=0;j<=9;j++){
			if(a[j]!=d[j]) return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	int n, a[15];
    char s[100];
	while(t--){
		scanf("%s", s);
		n=strlen(s);
		for(int i=0;i<=9;i++){
			a[i]=0;
		}
		for(int i=0;i<n;i++){
			a[s[i]-'0']++;
		}
		if(check(a, s, n)) printf("YES\n");
		else printf("NO\n");
	}
}