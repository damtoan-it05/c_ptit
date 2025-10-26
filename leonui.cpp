#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a,b, mina=1e9,minb=1e9, maxa=0,maxb=0, sa=0,sb=0;
	for(int i=0;i<n;i++){
	    scanf("%d%d", &a,&b);
	    sa+=a;
	    sb+=b;
	    if(a < mina) mina=a;
	    else if(a>maxa) maxa=a;
	    if(b < minb) minb=b;
	    else if(b>maxb) maxb=b;
	}
	if(sa>sb){
		sa+=minb;
		printf("%d", sa);
	}
	else if(sa<sb){
		sb+=mina;
		printf("%d", sb);
	}
	else{
		sa+=maxb;
		sb+=maxa;
		if(sa<sb) printf("%d", sa);
		else printf("%d", sb);
	}
}