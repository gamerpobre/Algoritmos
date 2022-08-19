/*3) Faça um algoritmo que receba três notas, calcule e mostre a média aritmética entre elas.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, ma;
    printf("Digite a primeira nota: ");
    scanf("%d", &a);
    printf("Digite a segunda nota: ");
    scanf("%d", &b);
    printf("Digite a terceira nota: ");
    scanf("%d", &c);
    ma = (a+b+c)/3;
    printf("A media aritmetica entre as notas %d, %d e %d eh %d", a, b, c, ma);

return 0;
}

