#include<stdio.h>
#include<math.h>
struct tamgiac{
	float a, b, c;
	float p;
	float s;
};
int main(){
	int n;
	scanf("%d", &n);
	struct tamgiac t,f[n+1];
	for(int i=1;i<=n;i++){
		scanf("%f%f%f", &f[i].a, &f[i].b, &f[i].c);
	    f[i].p=(f[i].a+f[i].b+f[i].c)/2;
    	f[i].s=sqrt(f[i].p*(f[i].p-f[i].a)*(f[i].p-f[i].b)*(f[i].p-f[i].c));
	}
    for(int i=1;i<n;i++){
    	for(int j=n;j>i;j--){
    		if(f[j].s<f[j-1].s){
    			t=f[j];
    			f[j]=f[j-1];
    			f[j-1]=t;
			}
		}
	}
	for(int i=1;i<=n;i++) printf("%1.f %1.f %1.f\n", f[i].a, f[i].b, f[i].c);
}