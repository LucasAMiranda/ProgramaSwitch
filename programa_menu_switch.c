#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main(void) {

int opcão;
int idade;
char nome[20];
char sobrenome[20];
int ano_nascimento;
int num1, num2;
int soma, produto, quadrado, módulo, fah, celsius, num, fat, hora;
float raiz_quadrada , seno;

printf("\n============== Menu =========== \n");
printf("1- Cadastro de Usuário\n");
printf("2- Cálculo de expressões Matemática\n");
printf("3- Conversor de Temperatura\n");
printf("4- Fatorial\n");
printf("5- Turno\n");
printf("6- Em manutenção\n");
printf("7- Exit\n");
printf("\n=============================== \n");
printf("Escolha a opção desejada: ");
scanf("%d", &opcão); 
 
  switch(opcão){

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

        exit(0);

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
        módulo = num1 % 2;
        printf("O módulo do primeiro número é %d\n", módulo);

        break;

        exit(0);

    case 3:
        printf("Digite um valor do Fahrenheit: ");
        scanf("%d", &fah);  

        celsius = fah - 32 * 5/9;  

        printf("O valor de graus celsius é %d", celsius);

        break;

        exit(0);

    case 4:
       printf("Insira um valor para o qual deseja calcular seu fatorial: ");
       scanf("%d", &num); 
       for(fat = 1; num > 1; num = num - 1){
           fat = fat * num; 
           printf("\nFatorial calculado: %d", fat); 
       }

       exit(0);

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

       exit(0);

    default:
        exit(0);

      
  }

  return 0;
}