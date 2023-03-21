#include <stdio.h>
//Bir sayinin asal sayi olup olmadýgýný bulan program (rekursif ile)
int asal_sayi(int x, int i) {
    if (x<2)
        return 0;
    if (i==1)
        return 1;
    if (x%i==0)
        return 0;
    return asal_sayi(x,i-1);
}
 int main() {
    int a;
    printf("Bir sayi giriniz:");
    	scanf("%d",&a);
    int sonuc=asal_sayi(a,a/2);
    if (sonuc==0)
        printf("%d asal sayi degildir\n",a);
    else
        printf("%d asal sayidir\n",a);
    return 0;
}
