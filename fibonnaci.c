#include <stdio.h>

int main ()
{
    int num,x,y,z;

    x=0;
    y=1;
    z=0;

    scanf("%d",&num);

    while(z < num){
        z = x + y;
        x = y;
        y = z;
    }

    if(z==num){
        printf("O numero pertence a sequencia!\n");
    }else{
        printf("O numero não pertence a sequencia!\n");
    }

    return 0;
}
