#include<stdio.h>
#include<math.h>
int main(){
	int x,y,z=0;
	while(scanf("%d%d", &x,&y)!=-1){
		int k=abs(x-y);
		if(k==3){
			printf("%d\n", k);
			continue;
		}
		int k1=sqrt(k);
		int k2=k1*(k1-1);
		if((k-2*k1)>k2){
			z=2*k1+1;
		}
		else if((k-k1)>k2){
			z=2*k1;
		}
		else z=2*k1-1;
		printf("%d\n", z);
		
	}
}