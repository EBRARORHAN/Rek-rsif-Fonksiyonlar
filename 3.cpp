#include <stdio.h>
//Girilen sayi kadar fibonacci seri yazdýrma (rekursif ile)
int fib(int n){
	if(n==1||n==2)
		return 1;
	else 
		return fib(n-1)+fib(n-2);
		}
int main(){
	int x;
	int i;
	printf("Bir sayi giriniz:");
		scanf("%d",&x);
	for(i=1;i<=x;i++){
	printf(" %d\t",fib(i));
	}
	return 0;
}

