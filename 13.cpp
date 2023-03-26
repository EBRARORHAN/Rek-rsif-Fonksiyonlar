#include <stdio.h>
//Girilen sayinin basamak toplamini veren program(rekursif ile)
int basamak_toplami(int n){
	if(n!=0)
		return n%10+basamak_toplami(n/10);
	else 
		return 0;
}
int main(){
	int x;
	printf("Bir sayi giriniz:");
		scanf("%d",&x);
	printf("%d",basamak_toplami(x));
	return 0;
	}
