#include <stdio.h>
//1'den girilen sayiya kadar olan sayilarin toplami(rekursif ile)
int toplama(int n){
	if(n<=1){  
	}
	else 
		return n+toplama(n-1);
}
int main(){
	int x;
	printf("Bir sayi giriniz:");
		scanf("%d",&x);
	printf("Toplam=%d",toplama(x));
	return 0;
}
