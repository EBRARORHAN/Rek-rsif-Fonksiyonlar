#include <stdio.h>
//Carpma operatoru kullanmadan carpma islemi yapma(rekursif ile)
int carpma(int x,int y){
	if(y==0)                   
		return 0;
	else 
	return x+carpma(x,y-1);
	}
int main(){
	int a,b;
	printf("Birinci sayiyi giriniz:");
		scanf("%d",&a);
	printf("Ikinci sayiyi giriniz:");
		scanf("%d",&b);
	printf("Cevap=%d",carpma(a,b));
	return 0;
}
