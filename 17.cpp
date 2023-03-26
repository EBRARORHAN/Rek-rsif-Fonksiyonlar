#include <stdio.h>
int F(int n){

	if(n<1) return 1;
	else 
	return F(n-1)+(n-1)*(n+1);
}
int main(){
	int a;
	printf("Bir sayi giriniz:");
		scanf("%d",&a);
	printf("%d",F(a));
	return 0;
}
