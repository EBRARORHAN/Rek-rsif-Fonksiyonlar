#include <stdio.h>
int tek_sayi(int *x,int y){
	if(y>=1)
		if(x[y-1]%2==0)
			return tek_sayi(x,y-1);
		else 
			return 1+tek_sayi(x,y-1);
		else 
			return 0; 
}
int main(){
	int dizi[]={3,5,87,94,23,16,48};
	int boyut=sizeof(dizi)/sizeof(dizi[0]);
	printf("%d",tek_sayi(dizi,boyut));
	}
