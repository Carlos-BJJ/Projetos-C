#include <stdio.h>

int main(){

/*Conversão Implícita*/

int a = 10;
float b = 3.5;
float resultado = a + b; // 'a' é convertido implicitamente para float

printf("Conversão Implícita:\n");
printf("Resultado: %.2f\n", resultado);

printf("--------------------------------\n");

/*Conversão Explícita*/

int x = 10;
int y = 3;
float quociente = (float) x / y; /* 'a' é explicitamente 
convertido para float */

printf("Conversão Explícita:\n");
printf("Quociente: %.2f\n", quociente);


}
