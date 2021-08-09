#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

char *mensagem;
void opcaomenu_imprimeMensagem(int **opcao0, FILE *plog, char *mensagem){
  printf("Hello world");
}
 

aux = 0;
bool opcaomenu_validaDados(int **opcao1, FILE *plog, char *nome[40], char sobrenome[40], int idade, int ano_nascimento){
   if(sobrenome[40] == aux){
      printf("Não é possível validar esses dados");
   }
    return opcaomenu_validaDados;
}


struct pessoa{
  char nome[40];
  char sobrenome[40];
  int idade;
  int ano_nascimento;
};

double opcaomenu_tabuada(int **opcao6, FILE * plog, int i, int j, int tabuada[i][j]){

  for(i=1; i<=10; i++)
  {
    
    for(j=1; j<=10; j++)
    {
        tabuada[i][j] = i * j;
        
    }
  }

  if (i != 5 && j!=5){
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
}

double opcaomenu_matrizDouble(int **opcao7, **mal, FILE *plog){

   int i =0 ;
   int j =0 ;
   double soma_impares = 0;
   double soma_pares = 0;
   double matriz[5][3];
   char opcao_menu[80];
   char resp[100];
   int quantidade_pares =0;
   int quantidade_impares = 0;
   double diferencaMatriz = 0;

    mal = malloc(5 * sizeof(double *));
    for (i=0; i<5; i++)
    {
        mal[i]=malloc(3*sizeof(double));
    } 

    printf("Digite os valores na tabela: \n");
    for(j = 0; j<3; j++)
    {

      for(j=0; j<3; j++)
       {
           scanf("%lf", &mal[i][j]);
           
           if(j%2==0){
             soma_pares += mal[i][j];
             quantidade_pares++; 
           }
           else if(i%2!=0){
             soma_impares = mal[i][j];
             quantidade_impares++;
           }
        }
      }
      
    diferencaMatriz = (soma_pares/quantidade_pares) - (soma_impares/quantidade_impares);
    printf("A diferença da Matriza da tabela %lf", diferencaMatriz);
}
int opcaomenu_lerNumeros(int **opcao2, FILE * plog, int **opcao, int num1, int num2, int produto, int soma, int quadrado, int raiz_quadrada, int seno, int modulo){

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

  return opcaomenu_lerNumeros;

}

int opcaomenu_conversortemperatura(int **opcao3, FILE *plog, int fah, int celsius){
   printf("Digite um valor do Fahrenheit: ");
   scanf("%d", &fah);  

   celsius = fah - 32 * 5/9;  

   printf("O valor de graus celsius é %d", celsius);

   return opcaomenu_conversortemperatura;

}

int opcaomenu_fatorial(int **opcao4,FILE *plog,int fat, int num){
  printf("Insira um valor para o qual deseja calcular seu fatorial: "); 
  scanf("%d", &num); 
  for(fat = 1; num > 1; num = num - 1){
      fat = fat * num; 
      printf("\nFatorial calculado: %d", fat); 
  }

  return opcaomenu_fatorial;
}

int opcaomenu_Turno(int **opcao5, FILE *plog, int hora){
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

    return opcaomenu_Turno;
}

int main(void) {

setlocale(LC_ALL, NULL);

struct pessoa p;

printf("Digite seu nome: ");
scanf("%s", &p.nome);
printf("Digite seu sobrenome: ");
scanf("%s", &p.sobrenome);
printf("Digite seu idade: ");
scanf("%d", &p.idade);
printf("Digite seu ano de nascimento: ");
scanf("%d", &p.ano_nascimento);

 
  return 0;
}
