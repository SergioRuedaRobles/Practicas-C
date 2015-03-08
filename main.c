/* 
 * File:   main.c
 * Author: Sergio
 *
 * Created on 8 de marzo de 2015, 17:21
 */

#include <stdio.h>
#include <stdlib.h>


void comparar(int num1, int num2){
    if(num1>num2){
        printf("El primero es mayor que el segundo");
    }else if(num1<num2){
        printf("El segundo es mayor que el primero");
    }else{
        printf("Son iguales");
    }
}
int leerNum(){
    int x; 
    printf("Escribe un numero: ");
    scanf("%d",&x);
    printf("%d",x);
    printf("\n");
    return x;
}

int main(int argc, char** argv) {
    int x,y;
    x=leerNum();
    y=leerNum();
    comparar(x,y);
    return (EXIT_SUCCESS);
}

