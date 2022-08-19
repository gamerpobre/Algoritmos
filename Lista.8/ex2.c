/*2) Faça um algoritmo que receba dois números, calcule e mostre a subtração do primeiro pelo
segundo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, sub;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    sub = a - b;
    printf("a subtracao do primeiro pelo segundo eh: %d", sub);

return 0;
}

