#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct sinhvien{
	int msv;
	char name[100];
	float a, b, c;
};
struct sinhvien f[100];
void add(int n){
	int d=1;
	while(d<=n){
		f[d].msv=d;
    	scanf("\n%[^\n]s", f[d].name);
	    scanf("%f%f%f", &f[d].a, &f[d].b, &f[d].c);
	    d++;
	}
}
void change(int d){
	scanf("\n%[^\n]s", f[d].name);
	scanf("%f%f%f", &f[d].a, &f[d].b, &f[d].c);
}
int check(int i){
	if(f[i].a<f[i].b&&f[i].b<f[i].c) return 1;
	return 0;
}
void list(int n){
	for(int i=1;i<=n;i++){
		if(check(i)){
			printf("%d ", f[i].msv);
			printf("%s ", f[i].name);
			printf("%.1f %.1f %.1f\n", f[i].a, f[i].b, f[i].c);
		}
	}
}
int main(){
	int n;
	while(1){
		int x;
		scanf("%d", &x);
		if(x==1){
			scanf("%d", &n);
			add(n);
			printf("%d\n", n);
		}
		else if(x==2){
			int m;
			scanf("%d", &m);
			change(m);
			printf("%d\n", m);
		}
		else{
			list(n);
			return 0;
		}
	}
}