#include <stdio.h>
int islem_yap(int x){
	if(x<1)
	return 0;
	return x%3+islem_yap(x/3);
}
int main(){
	int n,a;
	printf("Bir sayi giriniz:");
		scanf("%d",&n);
	a=islem_yap(n);
	printf("%d",a);
	return 0;	
}
