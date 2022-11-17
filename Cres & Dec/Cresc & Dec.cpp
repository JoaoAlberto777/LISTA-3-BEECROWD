#include <stdio.h>

	int main (){
        int X,Y;

	do{
 		scanf("%d", &X);
		scanf("%d", &Y);

		if( X < Y){
        	printf("Crescente\n");
		}else{
        	printf("Decrescente\n");
		}

	}while(X != Y);
	return 0;
}
