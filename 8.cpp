#include <stdio.h>
//B�lme operat�r� kullanmadan b�lme i�lemi yapma (rek�rsif ile)
int bolme_islemi(int x,int y){
	if(y==0)
		return 0;
	if(y>x)
		return 0;
	if(x-y==0)
		return 1;
	return 1+bolme_islemi(x-y,y);
	
}
int main(){
	int a,b;
	printf("Birinci sayiyi giriniz:");
		scanf("%d",&a);
	printf("Ikinci sayiyi giriniz:");
		scanf("%d",&b);
	printf("Cevap=%d",bolme_islemi(a,b));
	return 0;
}
