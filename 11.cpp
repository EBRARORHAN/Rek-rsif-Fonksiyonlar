#include <stdio.h>
//Girilne iki sayinin okek hesabýný yapma(rekursif ile)
int obeb_bulma(int x,int y){
	if(y==0)
	return x;
	return obeb_bulma(y,x%y);
}
int okek_bulma(int x,int y){
	return x*y/obeb_bulma(x,y);
}
int main(){
	int a,b;
	int OKEK;
	printf("Birinci sayiyi giriniz:");
		scanf("%d",&a);
	printf("Ikinci sayiyi giriniz:");
		scanf("%d",&b);
	OKEK=okek_bulma(a,b);
	printf("OKEK=%d",OKEK);
	return 0;
}
