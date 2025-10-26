#include<stdio.h>
#include<string.h>
struct danhsach{
	char ten[100];
	char nhom[100];
	int ma;
	double mua,ban,loi;
};
typedef struct danhsach DS;
int main(){
	int t;
	scanf("%d",&t);
	DS k, d[t+1];
	for(int i=1;i<=t;i++){
		scanf("\n");
		d[i].ma=i;
		gets(d[i].ten);
		gets(d[i].nhom);
		scanf("%lf%lf", &d[i].mua, &d[i].ban);
		d[i].loi=d[i].ban-d[i].mua;
	}
	for(int i=1;i<t;i++){
		for(int j=t;j>i;j--){
			if(d[j].loi>d[j-1].loi){
				k=d[j];
				d[j]=d[j-1];
				d[j-1]=k;
			}
		}
	}
	for(int i=1;i<=t;i++){
		printf("%d %s %s %.2lf\n", d[i].ma,d[i].ten,d[i].nhom,d[i].loi);
	}
}