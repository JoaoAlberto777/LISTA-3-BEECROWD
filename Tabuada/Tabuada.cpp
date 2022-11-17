#include <stdio.h>
 
int main() {
	int N,R;
	
	scanf("%d",&N);
	
	for (int i= 1; i <= 10; i++){
     R = i * N;
     printf("%d x %d = %d\n",i,N,R);
 }

    return 0;
}
