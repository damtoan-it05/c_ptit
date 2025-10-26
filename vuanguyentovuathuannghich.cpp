#include<stdio.h>
#include<math.h>
int thuannghich(int n){
	int m=n, s=0;
	while(n!=0){
		s=s*10+n%10;
		n/=10;
	}
	if(s==m)return 1;
	else return 0;
}
int nguyento(int n){
	for(int i=2; i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int a;
	scanf("%d", &a);
	for(int i=1;i<=a;i++){
		int n, m;
		scanf("%d %d", &n, &m);
		int x=0;
		for (int i=n; i<=m; i++){
			if(thuannghich(i)==1&&nguyento(i)==1){
				printf("%d ", i);
				x++;
			if(x==10){
				printf("\n");
				x=0;
			}
			}
			
		}
		printf("\n");
		printf("\n");
	}
}