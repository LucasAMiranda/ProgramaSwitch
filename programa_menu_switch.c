/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main(void) {

int opcao;
int idade;
char nome[20];
char sobrenome[20];
int ano_nascimento;
int num1, num2 , tabuada[10][10], i, j;
int soma, produto, quadrado, modulo, fah, celsius, num, fat, hora;
char ch[20];
float raiz_quadrada , seno;
double soma_pares = 0;
double soma_impares = 0;
double quantidade_pares = 0;
double quantidade_impares = 0;
double media_par = 0;
double media_impar = 0;
double diferen_matriz = 0;
double matriz[5][3];


setlocale(LC_ALL, NULL);

printf("\n============== Menu =========== \n");
printf("1- Cadastro de Usuário\n");
printf("2- Cálculo de expressões Matemática\n");
printf("3- Conversor de Temperatura\n");
printf("4- Fatorial\n");
printf("5- Turno\n");
printf("6- Array de char de 10 posições\n");
printf("7- Matriz Tabuada\n");
printf("8 -Lê valores para uma matriz do tipo Double");
printf("\n=============================== \n");
printf("Escolha a opção desejada: ");
scanf("%d", &opcao); 
 
  switch(opcao){

    case 1:
        printf("Qual sua idade: ");
        scanf("%d", &idade);
        printf("Qual seu primeiro nome: ");
        scanf("%s", nome);
        printf("Qual o seu segundo nome: ");
        scanf("%s", sobrenome);
        printf("Qual ano de nascimento: ");
        scanf("%d", &ano_nascimento);

        break;

    case 2:
        printf("Infome um número: ");
        scanf("%d", &num1);
        printf("Infome o segundo número: ");
        scanf("%d", &num2);
        soma = num1 + num2;
        printf("A soma é %d\n", soma);
        produto = num1 * num2 * pow(num2, 2);
        printf("O produto é %d\n", produto);
        quadrado = pow(num1, 2);
        printf("O quadrado do primeiro número %d\n", quadrado);
        raiz_quadrada = sqrt(num1 + num2);
        printf("A raiz da quadrada da soma %f\n ", raiz_quadrada);
        seno = sin(num1 - num2);
        printf("Valor de seno de %.2f \n",seno);
        modulo = num1 % 2;
        printf("O módulo do primeiro número é %d\n", modulo);

        break;

    case 3:
        printf("Digite um valor do Fahrenheit: ");
        scanf("%d", &fah);  

        celsius = fah - 32 * 5/9;  

        printf("O valor de graus celsius é %d", celsius);

        break;

    case 4:
       printf("Insira um valor para o qual deseja calcular seu fatorial: ");
       scanf("%d", &num); 
       for(fat = 1; num > 1; num = num - 1){
           fat = fat * num; 
           printf("\nFatorial calculado: %d", fat); 
       }

       break;

    case 5:
       printf("Digite seu horario: ");
       scanf("%i", &hora);

       if (hora >= 0 && hora < 12) {
          printf("Bom dia");
       } else if(hora >= 12 && hora < 18){
          printf("Boa tarde");
       } else if(hora >= 18 && hora<= 23) {
          printf("Boa noite");
       } else {
          printf("Horario invalido");
       }

    case 6:
      printf("Informe os valores: ");
      scanf("%s", ch);

       for (i = 0; i < 10; i++)
       {
        int val = ch[i] - '0';
        soma = soma + val;
       }

        float media = soma / 10.0;

        printf("\nArray de char: %s", ch);
        printf("\nMedia dos numeros: %f", media);

        break;

    case 7:
        
      for(i=1; i<=10; i++)
      {
        for(j=1; j<=10; j++)
        {
            tabuada[i][j] = i * j;
            
        }
      }
      
        if (i != 4 && j!=4){
            printf("%d", tabuada[i][j]); 
        } 

      for(i=1; i<=10; i++)
      {
          printf("\n");
          
          for(j=1; j<=10; j++)
          {
            printf("%d x %d = %d\t", i,j, tabuada[i][j]);
          }
      }

      break;

    case 8:
      for (i=0; i<5; i++)
      {
         for(j = 0; j<3; j++)
         {
           printf("\nElemento[%d][%d] =", i,j);

           fflush(stdin);
           scanf("%lf", &matriz[i][j]);
           
           if(j%2==0){
             soma_pares += matriz[i][j];
             quantidade_pares++; 
           }
           else if(i%2!=0){
             soma_impares = matriz[i][j];
             quantidade_impares++;
           }
         }
      }

      media_par = (soma_pares/quantidade_pares);
      media_impar = (soma_impares/quantidade_impares);
      diferen_matriz = media_par - media_impar;
      
      printf("\n A média dos pares são: %lf ", media_par);
      printf("\n A média dos ímpares são: %lf ", media_impar);
      printf("\n A diferença entre as médias dos números pares com os números ímpares são: %lf ", diferen_matriz);

      break;
  
  }
  return 0;
}

