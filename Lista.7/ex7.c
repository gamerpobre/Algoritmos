/*7) Faça um algoritmo que receba o salário de um funcionário, calcule e mostre o novo salário,
sabendo-se que este sofreu um aumento de 25%.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
float sal, aumento=0.25, new_sal;
printf("Qual o salario: R$");
scanf("%f", &sal);

new_sal = sal*(aumento+1);
printf("O novo salario eh: R$%f", new_sal);

return 0;
}

