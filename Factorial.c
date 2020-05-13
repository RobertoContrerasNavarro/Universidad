#include <stdio.h>
#include <stdlib.h>

long long int factorial(long long int);
long long int main(){
  long long int n;
  printf("Ingrese un numero entre (0-20) para calcular su factorial\n");
  scanf("%lli", &n);
    if(n > 20){
      printf("No se puede calcular factorial de %lli = 0 \n",n );
      return 0;
    }else{
      printf("El factorial es:%lli ",factorial(n));
    }
    return 0;
}

long long int factorial( long long int n){
  if(n > 0){
    return (n*factorial(n-1));
  }
  else{
    return 1;
  }
}
/*Ejemplo

/*long long int factorial( long long int n){
  long long int aux = 1;
    while(n > 1){
      aux = aux*n;
      n--;
    }
    return (aux);
}*/
