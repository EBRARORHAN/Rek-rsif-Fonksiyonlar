#include <stdio.h>
int toplam(int n){
	if(n<1)
		return 1;
	if(n==1)
		return 3;
	return n+toplam(n-1)+toplam(n-2);
}
int main(){
	int a=15;
	printf("%d",toplam(a));
	return 0;
	
}
