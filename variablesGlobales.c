#include "stdio.h"

//variable global es antes del main

int var = 5;

// Function
int mostrar_numero(){
    int var1=2, var2;
    var2 = var1 + var;
    printf("El valor de mi variable global2 es %d", var2);
}

int main(){
    int var1=2, var2;
    var2 = var1 + var;
    printf("El valor de mi variable global1 es %d\n", var);
    mostrar_numero();
    return 0;
}

