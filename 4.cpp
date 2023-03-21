#include <stdio.h>
//Girilen us ve tabana göre işlem yapma (rekursif ile)
int us_alma(int taban,int us){
	if(us==0){
		return 1;
	}
	else if(us==1){
		return taban;
	}
	else if(taban==0){
		return 0;
	}
	else 
		return taban*us_alma(taban,us-1);
}
int main(){
	int x,y;
	printf("Bir taban sayisi giriniz:");
		scanf("%d",&x);
	printf("Bir us sayisi giriniz:");
		scanf("%d",&y);
	printf("Cevap=%d",us_alma(x,y));
	return 0;
}
