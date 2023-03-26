#include <stdio.h>
int toplam(int n){
	if(n<2)
		return 1;
	else
		return toplam(n-1)*toplam(n-1)+n;
	}
int main(){
	int x=3;
	printf("%d",toplam(x));
	return 0;
	
}
