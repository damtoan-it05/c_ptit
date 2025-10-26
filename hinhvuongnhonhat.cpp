#include<stdio.h>
#include<math.h>
int main(){
	int a[4], b[4];
	for(int i=0;i<4;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	int mina = 1e9, minb = 1e9, maxa = 0, maxb = 0;
	for(int i=0;i<4;i++){
		if(a[i]<mina) mina=a[i];
		if(a[i]>maxa) maxa=a[i];
		if(b[i]<minb) minb=b[i];
		if(b[i]>maxb) maxb=b[i];
	}
	int x=abs(maxa-mina), y=abs(maxb-minb);
	if(x>y){
		printf("%d",x*x);
	}
	else printf("%d",y*y);
}