#include <stdio.h>
//Girilen sayýinin faktoriyelini bulma(rekursif fonksiyon ile)
int fact(int n){
	if(n==1){
		return 1;
	}
	 else 
	 return n*fact(n-1);
}
int main(){
	int x;
	printf("Bir sayi giriniz:");
		scanf("%d",&x);
	printf("Faktoriyel=%d",fact(x));
	return 0;
		}
