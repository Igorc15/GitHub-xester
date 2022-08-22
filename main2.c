#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int i;
    int num2[1000];
    int soma=0;
    int media;


    srand(time(NULL));

    for(i=0;i<1000;i++)
        num2[i]=(rand()%1000);

    printf("\n\n");

    for(i=0;i<1000;i++)
         printf("\n Numero %d: %d \n",i,num2[i]);
    printf("\n\n");
    for(i=0;i<1000;i++)
        soma= num2[i]+soma;

    printf("\n%d\n",soma);

    media = soma/1000;

    printf("A media dos valores dentro do vetor eh: %d \n",media);
    return 0;
}
