#include <stdio.h>

int main(void)
{
    int i,longitudA,longitudB;
    float vectorA[100],vectorB[100],resultado[100];
    //captura
    printf("Proporcione la dimension del primer arreglo: ");
    scanf("%d",&longitudA);
    for(i=0;i<longitudA;i++){
        printf("Proporcione el valor del vector A en la posicion %d: ",i+1);
        scanf("%f",&vectorA[i]);
    }
    //proceso
    printf("\n\nProporcione la dimension del segundo arreglo: ");
    scanf("%d",&longitudB);
    for(i=0;i<longitudB;i++){
        printf("Proporcione el valor del vector B en la posicion %d: ",i+1);
        scanf("%f",&vectorB[i]);
    }
    if(longitudA==longitudB){
        for(i=0;i<longitudA;i++){
            resultado[i]=vectorA[i]+vectorB[i];
        }
        //salida
        for(i=0;i<longitudA;i++){
            printf("\n%f\n",resultado[i]);
        }
    }
    else{
        printf("\n\nError no es posible efectuar la suma\n");
    }
    return 0;
}
