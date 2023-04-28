#include <stdio.h>
#include <stdlib.h>
#include "questao2.h"

//Crie um algoritmo que após receber o Salário Bruto, calcule o salário líquido descontando 10% quando o salário bruto for menor que R$ 2000,
//caso contrário descontar 20%. No final, exiba o salário líquido.

 void entradaQ2(float *salarioB){

 printf("Qual o seu salario Bruto: ");
 scanf("%f", salarioB);

 }

 void procesamentoQ2 (float *salarioB, float *salarioL, float *resultado){
     if (*salarioB < 2000){
        *resultado = *salarioB -(*salarioB * 0.10);
     } else {
        *resultado = *salarioB -(*salarioB * 0.20);
    }

 }

 void saidaQ2 (float *resultado){
    printf("\nO seu salario liquido e: R$ %.2f", *resultado);
 }

 void questao2(void){
 //declaração
    float resultado;
    float salarioBr;
    float salarioLi;

 //entrada
 entradaQ2(&salarioBr);

 //processamento
    procesamentoQ2 (&salarioBr, &salarioLi, &resultado);

  //saida
    saidaQ2(&resultado);
 }
