#include<stdio.h>
#include<string.h>
char b[7]={'I', 'V', 'X', 'L', 'C', 'D', 'M'};
int c[7]={1, 5, 10, 50, 100, 500, 1000};
int check(char a){
	for(int i=0;i<7;i++){
		if(b[i] == a){
			return c[i];
		}
	}
	return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[50];
		scanf("%s", a);
		int x = 0, n = strlen(a);
		for(int i=0; i<n; i++){
			int x1=check(a[i]), x2;
			if(i!= n-1){
				x2=check(a[i+1]);
			}
			if(x2>x1){
				x+=x2-x1;
				i++;
			}
			else{
				x+=x1;
			}
		}
		printf("%d\n", x);
	}
}