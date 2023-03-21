#include <stdio.h>
//x'den 1'e kadar olan sayýlarý sýralama(rekürsif ile)
int siralama(int n){
	if(n<=1)
		return 1;
    printf("%d\n",n);
	return siralama(n-1);
}
int main(){
	int x;
	int i;
	printf("Bir sayi giriniz:");
		scanf("%d",&x);
	
	printf("%d\n",siralama(x));

	return 0;
}
