/*6) Escreva um algoritmo que receba duas notas, calcule e mostre a média ponderada destas,
considerando peso 2 para a primeira nota e peso 3 para a segunda nota.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
float a, b, mp;
int p1=2, p2=3;

printf("Digite a primeira nota: ");
scanf("%f", &a);
printf("Digite a segunda nota: ");
scanf("%f", &b);

mp = (((a*p1)+(b*p2))/(p1+p2));

printf("A media ponderada eh: %f", mp);

return 0;
}

