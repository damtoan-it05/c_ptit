#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	int a[100005]={0}, x, y;
	for(int i=0; i < t-1; i++){
		scanf("%d%d", &x, &y);
		a[x]++;
		a[y]++;
	}
	for(int i=1;i<=100000;i++){
		if(a[i] == t-1){
			printf("Yes");
			return 0;
		}
	 }
	 printf("No");
}