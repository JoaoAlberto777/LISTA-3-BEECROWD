#include <stdio.h>
 
int main(){
    int pass;
    
    do{
        scanf("%d", &pass);
        if(pass != 2002){
            printf("Senha Invalida\n");
        }else{
            printf("Acesso Permitido\n");
        }
    }while(pass != 2002);
    return 0;
}
