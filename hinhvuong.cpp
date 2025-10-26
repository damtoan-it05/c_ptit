#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if((c-a)==(d-b)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}