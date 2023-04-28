#include <stdio.h>
#include <stdlib.h>
#include "questao1.h"

//Faça um algoritmo em que receba o tamanho do raio de um círculo e faça o cálculo do
//diâmetro, do perímetro e da área do círculo. Calcule também o volume se esse círculo fosse
//a base para se criar uma esfera.

 void entradaQ1(float *r){
 printf("\nQual o tamanho do raio: ");
 scanf("%f", r);

 }

 void procesamentoQ1(float *r, float *volume, float *pi, float *diametro, float *perimetro, float *area){
     *pi = 3.14;
     *diametro = (*r) * 2.00;
     *volume = (4.00 * (*pi) * (*r) * (*r) * (*r))/3.00;
     *perimetro = 2.00 * (*pi) * (*r);
     *area = 2.00 * (*pi) * (*r) * (*r);
 }

 void saidaQ1(float *diametro, float *volume, float *perimetro, float *area){
    printf("\nA area e %.2f, o diametro %.2f, o perimetro %.2f, o volume %.2f.", *area, *diametro, *perimetro, *volume);
 }

 void questao1(void){
 //declaração
     float raio;
     float volume;
     float pi;
     float diametro;
     float perimetro;
     float area;

 //entrada
    entradaQ1(&raio);

 //processamento
    procesamentoQ1(&raio, &volume, &pi, &diametro, &perimetro, &area);

  //saida
    saidaQ1(&diametro, &volume, &perimetro, &area);
 }

