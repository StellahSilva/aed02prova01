#include <stdio.h>
#include <stdlib.h>

//Crie um algoritmo que ap�s receber o Sal�rio Bruto, calcule o sal�rio l�quido descontando 10% quando o sal�rio bruto for menor que R$ 2000,
//caso contr�rio descontar 20%. No final, exiba o sal�rio l�quido.

 void entradaQ1(float *salarioB){

 printf("Qual o seu salario Bruto: ");
 scanf("%f", salarioB);

 }

 void procesamentoQ1 (float *salarioB, float *salarioL, float *resultado){
     if (*salarioB < 2000){
        *resultado = *salarioB -((*salarioB * 10)/100);
     } else {
        *resultado = *salarioB -((*salarioB * 20)/100);
    }

 }

 void saidaQ1 (float *reultado){
    printf("\n");
 }

 void questao01(void){
 //entrada


 //processamento
    procesamentoQ2 (&salarioBr, &salarioLi, &resultado);

  //saida
    saidaQ2(&resultado);
 }
