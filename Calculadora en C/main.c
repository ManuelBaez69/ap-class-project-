#include <stdio.h>


int main ()
{

int firstNumber ; 
int secondNumber ;

printf("Ingrese primer valor");
scanf("%d", &firstNumber);
printf("Ingrese segundo  valor");
scanf("%d", &secondNumber);
int result = firstNumber + secondNumber;
printf("Resultado: %d \n", result);


printf("Ingrese primer valor");
scanf("%d", &firstNumber);
printf("Ingrese segundo  valor");
scanf("%d", &secondNumber);
int resultA = firstNumber - secondNumber;
printf("Resultado: %d \n", resultA);


printf("Ingrese primer valor");
scanf("%d", &firstNumber);
printf("Ingrese segundo  valor");
scanf("%d", &secondNumber);
int resultB = firstNumber * secondNumber;
printf("Resultado: %d \n", resultB);

printf("Ingrese primer valor");
scanf("%d", &firstNumber);
printf("Ingrese segundo  valor");
scanf("%d", &secondNumber);
int resultC = firstNumber / secondNumber;

printf("Resultado: %d \n", resultC);
   
return 0; 
}
