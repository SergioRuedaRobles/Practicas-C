/* 
 * File:   main.c
 * Author: Sergio Rueda Robles
 *
 * Created on 8 de marzo de 2015, 17:21
 */

#include <stdio.h>
#include <stdlib.h>


void comparar(int num1, int num2){//Compara dos num e indica cual es mayor y menor
    if(num1>num2){
        printf("El primero es mayor que el segundo");
    }else if(num1<num2){
        printf("El segundo es mayor que el primero");
    }else{
        printf("Son iguales");
    }
}
int leerNum(){//escanea un num del teclado y lo devuelve
    int x; 
    printf("Escribe un numero: ");
    scanf("%d",&x);
    printf("%d",x);
    printf("\n");
    return x;
}

void par(int num){//mira si el numero introducido es o no par
    if(num%2==0){
        printf("Es par");
    }else{
        printf("No es par");
    }
}

int main(int argc, char** argv) {
    par(leerNum());
    return (0);
}

