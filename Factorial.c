#include <stdio.h>
#include <stdlib.h>

int factorial(int);
int main(){
  int n;
  printf("Ingrese un numero entre (0-12) para calcular su factorial\n");
  scanf("%i", &n);
    if(n > 12){
      printf("No se puede calcular factorial de %i = 0 \n",n );
      return 0;
    }else{
      //int aux = factorial(n);
      printf("El factorial es:%i ",factorial(n));
    }
    return 0;
}

int factorial(int n){
  if(n > 0){
    return (n*factorial(n-1));
  }
  else{
    return 1;
  }
}
/*Ejemplo

/*int factorial(int n){
  int aux = 1;
    while(n > 1){
      aux = aux*n;
      n--;
    }
    return (aux);
}*/
