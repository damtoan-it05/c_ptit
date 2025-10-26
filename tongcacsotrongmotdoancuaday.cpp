#include<stdio.h>
int main(){
	int uo, d, n, s=0;
	scanf("%d%d%d", &uo,&d,&n);
	int u[n+2];
	u[0]=uo;
	s+=uo;
	for(int i=1;i<=n;i++){
		u[i+1]=u[i]+d;
		s+=u[i];
	}
	printf("%d", s);
}