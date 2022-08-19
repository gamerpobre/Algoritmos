/*4) Faça um algoritmo que receba quatro números inteiros, calcule e mostre a soma destes
números.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
int a, b, c, d, soma;
printf("Digite o numero 1: ");
scanf("%d", &a);
printf("Digite o numero 2: ");
scanf("%d", &b);
printf("Digite o numero 3: ");
scanf("%d", &c);
printf("Digite o numero 4: ");
scanf("%d", &d);

soma = a+b+c+d;

printf("A soma dos 4 numeros eh: %d", soma);

return 0;
}