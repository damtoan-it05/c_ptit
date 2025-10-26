#include<stdio.h>
#include<math.h>

int main(){
	int a, b, end, sogiua, ans, boi=0;
	scanf("%d", &a);
	b=a;
	end=a%10;
	while(a>10){
		boi++;
		a/=10;
	}
	sogiua=(b-a*pow(10,boi))/10;
	ans=end*pow(10,boi)+sogiua*10+a;
	printf("%d", ans);
}