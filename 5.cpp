#include <stdio.h>
//Girilen sayi kadar fibonacci seri yazdirma ve yazilan sayilarin toplamini bulma(rekursif ile)
int fib(int n){
	if(n==1||n==2)
		return 1;
	else 
		return fib(n-1)+fib(n-2);
		}
int main(){
	int x;
	int i;
	int toplam=0;
	printf("Bir sayi giriniz:");
		scanf("%d",&x);
	for(i=1;i<=x;i++){
	printf(" %d\t",fib(i));
	toplam+=fib(i);
	}
	printf("Toplam=%d\n",toplam);
	return 0;
}

