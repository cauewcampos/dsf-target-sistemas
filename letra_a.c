#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
    char entrada[200];
    int cont1=0;
    int cont2=0;
    fflush(stdin);
    scanf("%[^\n]", &entrada);


    for(int i=0; i<strlen(entrada); i++){
        int cod = entrada[i];
        if(cod==65){
            cont1++;
        }else if(cod==97){
            cont2++;
        }
    }

    if(cont1==0&&cont2==0){
        printf("A letra 'A' não aparece nenhuma vez,");
    }else{
        if(cont1+cont2==1){
            printf("A letra 'A' aparece uma vez, ");
        }else{
            printf("A letra 'A' aparece %d vezes, ", cont1+cont2);
        }

        if(cont1==0){
            printf("nenhuma vez na forma minuscula ");
        }else if(cont1 == 1){
            printf("1 vez na forma maiuscula ");
        }else{
            printf("%d vezes na forma maiuscula ", cont1);
        }

        if(cont2==0){
            printf("e nenhuma vez na forma minuscula!\n");
        }else if(cont2 == 1){
            printf("e 1 vez na forma minuscula!\n");
        }else{
            printf("e %d vezes na forma minuscula!\n", cont2);
        }
    }



    return 0;
}
