#include <stdio.h>
//Girilen iki sayinin obebini bulma(rekursif ile)
int obeb_bulma(int x,int y){
	if(y==0)
	return x;
	return obeb_bulma(y,x%y);
}
int main(){
	int a,b;
	int OBEB;
	printf("Birinci sayiyi giriniz:");
		scanf("%d",&a);
	printf("Ikinci sayiyi giriniz:");
		scanf("%d",&b);
	OBEB=obeb_bulma(a,b);
	printf("OBEB=%d",OBEB);
	return 0;
}
