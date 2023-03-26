#include <stdio.h>
int f(int n){
   if (n==10)
	return n;
   else 
    return 2*f(n+1);
	}
int main(){
  printf("%d ",f(5));
return 0;
}
