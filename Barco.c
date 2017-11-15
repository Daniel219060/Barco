#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bienvenida();

void navegarAlSur(int *x, int *y){
    printf("Navegando al SUR! \n");
    *x = *x;
    *y-=10;
}

void navegarAlEste(int *x, int *y){
	printf("Navegando al ESTE! \n");
	*x+=6;
	*y = *y;
}

void navegarAlNorte(int *x, int *y){
	printf("Navegando al NORTE! \n");
	*x = *x;
	*y+=6;
}

void navegarAlOeste(int *x, int *y){
	printf("Navegando al OESTE! \n");
	*x-=4;
	*y = *y;
}

void imprimirPosicion(int x, int y){
    printf("La posicion actual del barco es: %d, %d \n", x, y);
}

int main() {
    int x = 0;
    int y = 0;
    
    bienvenida();
    imprimirPosicion(x, y);
    
    navegarAlSur(&x, &y);
    
    imprimirPosicion(x, y);
    
    printf("El valor de X es: %d \n", x);
    printf("La direccion de X es: %p \n", &x);
    int *direccion_x = &x;
    printf("La direccion de X guardada en otra variable es: %p \n", direccion_x);
    
    navegarAlSur(&x, &y);
    imprimirPosicion(x, y);
    
    navegarAlNorte(&x, &y);
    imprimirPosicion(x, y);
    
    navegarAlEste(&x, &y);
    imprimirPosicion(x, y);
    
    navegarAlOeste(&x, &y);
    imprimirPosicion(x,y);
    
    return 0;
}

void bienvenida(){
    printf("Bienvenido al barco! \n");
}
