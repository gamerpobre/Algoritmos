/*5) Escrever um algoritmo para ler dois números inteiros e exibir a soma, a diferença e o produto
dos mesmos. A saída deve mostrar os operandos, o operador e o resultado de cada operação.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
int a, b, soma, dif, prod;

printf("Digite o valor 1: ");
scanf("%d", &a);
printf("Digite o valor 2: ");
scanf("%d", &b);

soma = a+b;
dif = a-b;
prod = a*b;

printf("%d + %d = %d\n", a, b, soma);
printf("%d - %d = %d\n", a, b, dif);
printf("%d * %d = %d", a, b, prod);

return 0;
}