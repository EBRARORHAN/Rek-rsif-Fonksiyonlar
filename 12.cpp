#include <stdio.h>
//Klavyeden girilen say�dan 1'e kadar olan say�lar�n ayr� ayr� karelerinin al�n�p toplanmas�
int karesini_al(int x){
	if(x==0) return 0;
	if(x>=1)
		return x*x+karesini_al(x-1);
}
int main(){
	int n;
	printf("Bir sayi giriniz:");
		scanf("%d",&n);
	printf("%d",karesini_al(n));
	return 0;
}
