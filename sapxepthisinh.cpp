#include<stdio.h>
#include<string.h>
struct danhsach{
	int ma;
	char ten[100];
	char sinh[100];
	float d1,d2,d3,s;
};
typedef struct danhsach DS;
int main(){
	int t;
	scanf("%d", &t);
	DS k,a[t+1];
	float max=0;
	for(int i=1;i<=t;i++){
		scanf("\n");
		a[i].ma = i;
		gets(a[i].ten);
		gets(a[i].sinh);
		scanf("%f%f%f", &a[i].d1,&a[i].d2,&a[i].d3);
		a[i].s = a[i].d1+a[i].d2+a[i].d3;
		if(a[i].s>max){
			max = a[i].s;
		}
	}
	for(int i=1;i<t;i++){
		for(int j=t;j>i;j--){
			if(a[j].s>a[j-1].s){
				k=a[j];
				a[j]=a[j-1];
				a[j-1]=k;
			}
		}
	}
	for(int i=1;i<=t;i++){
		printf("%d %s %s %.1f\n", a[i].ma,a[i].ten,a[i].sinh,a[i].s);
	}
}