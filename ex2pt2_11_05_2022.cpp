#include <stdio.h>
main()
{

//==================//*
//GUILHERME HENRIQUE MACHADO RIBEIRO //
// RAPHAEL GUSTAVO MEIRELES//
//==================//*
	
//==================//*
//DECLARA��O DE VARIAVEIS//
//==================//*


int peso; // declara�ao de variaveis 
int altura; // declara�ao de variaveis 
int imc;
int sexo;
int idade;
float altura2;
float altura3;
int pessoas;
int i;
printf("Quantas pessoas voce quer calcular? \n");
scanf("%d", &pessoas);
for(i = 1; i <= pessoas; i++)
{
	printf("Iremos calcular seu IMC! \n");

printf("Voce � homem ou mulher? Digite 1 para homem 2 para mulher! \n");
scanf("%d", &sexo);
printf("Quantos anos voc� tem? \n");
scanf("%d", &idade);

printf("Digite seu peso: \n");
scanf("%d", &peso);
printf("Seu peso � de: %d kg \n", peso);

printf("Digite sua altura em metros \n");
scanf("%f", &altura3);
// printf("%.2f", altura3);

printf("A f�rmula para achar o IMC � == IMC = Peso � (Altura � Altura) ent�o: \n");
imc = peso / (altura3*altura3);; 
printf("Seu imc � de %d kg/m� \n", imc);
if((imc >= 0) && (imc <= 18))
{
	printf("Voce est� classificado com Magreza. \n");
}
	else if((imc >=18)&&(imc <= 24))
	{
	 	printf("Voce est� classificado como Normal. \n");
	} else if((imc >= 25)&&(imc <= 29))
		{
			printf("Voce esta classificado como Sobrepeso \n");
		}
			else if((imc >= 30)&& (imc <= 35))
			{
				printf("Voce esta classificada com Obesidade de grau 1");
			}
				else if((imc >= 36)&& (imc <= 40))
				{
					printf("Voce esta classificada com Obesidade de grau 2");
				}
					else 
					{
						printf("Voce esta classificada com Obesidade de grau 3");
					}
}}
