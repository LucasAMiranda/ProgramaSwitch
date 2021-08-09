#ifndef OPCAOMENU_H_INCLUDED
#define OPCAOMENU_H_INCLUDED

/*  
 Importação de bibliotecas
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <opcaomenu.c>

/*   
DECLARAÇÃO de constantes
*/

#define ANO 2021



typedef struct dados{
  return  opcaomenu_imprimeMensagem();
};

typedef enum opcoesmenu{
opcao0= opcaomenu_imprimeMensagem,
opcao1= opcaomenu_validaDados,
opcao2= opcaomenu_lerNumeros,
opcao3= opcaomenu_conversortemperatura,
opcao4= opcaomenu_fatorial,
opcao5= opcaomenu_Turno,
opcao6= opcaomenu_tabuada,
opcao7= opcaomenu_matrizDouble, 
}opcao;



typedef void tipofuncao(char[]);

typedef struct hello_world
{
    char  *mensagem;
    return  opcaomenu_imprimeMensagem(mensagem);

} hello;


     /**
     * @file            opcaomenu.h
     * @author          Lucila Guaraná
     * @date            08-08-2021 21:30
     * @brief           valida a main no .exe 
     */
bool opcaomenu_validaDados(int argc, char* argv[], char** return_valida[]);

     /**
     * @file            opcaomenu.h
     * @author          Lucila Guaraná
     * @date            08-08-2021 21:30
     * @brief           Imprime as informacoes do autor na tela
     */

void menuopcao_imprimeMenu(int n);

     /**
     * @file            opcaomenu.h
     * @author          Lucila Guaraná
     * @date            08-08-2021 21:30
     * @brief           Imprime o menu e retorna a opcao desejada pelo usuario
     */
int opcaomenu_validaDados();

     /**
     * @file            opcaomenu.h
     * @author          Lucila Guaraná
     * @date            05-08-2021 17:37
     * @brief           Recebe o valor do ano como parametro e solicita ao usuario o nome, sobrenome e ano de nascimento,
                       retorna em uma struct o nome completo, idade e o ano de nascimento
     */
tipoum opcaomenu_validaDados(int ano_nascimento, FILE *plog);

     /**
     * @file            opcaomenu.h
     * @author          GabryellaCorrea
     * @date            05-08-2021 21:30
     * @brief           Faz operacoes matematicas com os dois números armazenando-os as informacoes no vetor.
     */
void opcamenu_lerNumeros(int num1, int num2, int produto, int soma, int quadrado, int raiz_quadrada, int seno, int modulo  , FILE *plog);

     /**
     * @file            opcaomenu.h
     * @author          Lucila Guaraná
     * @date            08-08-2021 21:
     * @brief           Informa ao usuario a temperatura em Fahrenheit e retorna a conversao do valor para celsius
     */
double opcaomenu_conversortemperatura(FILE *plog);

     /**
     * @file            menuopcao.h
     * @author          Lucila Guaraná
     * @date            08-08-2021 21:30
     * @brief           Entra com um numero e retorna o valor do fatorial do mesmo
     */
int opcaomenu_calculofatorial(int valor, FILE *plog);

     /**
     * @file            opcaomenu.h
     * @author          Lucila Guaraná
     * @date            08-08-2021 21:30
     * @brief           Entra com  um valor de hora e altera na string o cumprimento equivalente a hora informada
     */
void opcaomenu_Turno(int hora, FILE *plog);

     /**
...