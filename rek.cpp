#include <stdio.h>
/*Klavyeden girilen sayinin basamak deðerlerinden tek olanlarin kareleri ile çift olanlarin
kareleri arasindaki farki bulan rekursif fonksiyon*/

int F(int n){
	if(n<1)
		return 0;
	if(n%2==0)
		return (n%10)*(n%10)+F(n/10);
	    return -(n%10)*(n%10)+F(n/10);
}
int main(){
	int a,x;
	printf("Bir sayi giriniz:");
		scanf("%d",&x);
	a=F(x);
	printf("%d",a);
	return 0;
}
