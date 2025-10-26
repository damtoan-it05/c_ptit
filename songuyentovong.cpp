#include<stdio.h>
#include<math.h>
int check(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return a>1;
}
int vong(int a){
	int v=0,m=a;
	while(m){
		m/=10;
		v++;
	}
	m=a;
	int res;
	for(int i=0;i<v;i++){
		int tmp=m%10;
		if(tmp==0) return 0;
		m/=10;
		res=tmp*pow(10,v-1)+m;
		m=res;
		if(check(res)==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	int a[t];
	for(int j=0;j<t;j++){
		scanf("%d",&a[j]);
	}
	for(int j=0;j<t;j++){
		if(vong(a[j])) printf("1 ");
	    else printf("0 ");
	}
}