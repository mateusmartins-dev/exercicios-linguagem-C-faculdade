#include <stdio.h>

int main(){

int escolha;
int EscolhaInvalida;

// menu inicial do programa //

do{
    printf(" \n--Resolvendo equacaoes de Primeiro e Segundo grau--");
    printf("\n1- Resolver equacao de Primeiro grau (mostrar passos)");
    printf("\n2- Resolver equacao de Segundo grau (mostrar passos)");
    printf("\n3- Sobre o Programa");
    printf("\n4- Sair");
    printf("\n Escolha uma opcao");

 
// verificando se a pessoa digitou um numero //

EscolhaInvalida = scanf("%d", &escolha);

if (EscolhaInvalida != 1){
    printf("Escolha somente numeros de 1 a 4\n");
}else if 
    (escolha < 1 || escolha > 4);{
    printf("Escolha somente numeros de 1 a 4\n");
}
} while (escolha < 1 || escolha > 4);

// passo a passo para resolver equacao primeiro grau //
switch (escolha){
    case 1:
    printf("modelo base equacao = a*x + b = 0\n");
    printf("Primeiro Exemplo de equacao\n");
    printf("Equacao: 2x + 6 = 0\n");
    
    printf("Primeiro passo: identificar os coeficientes A e B\n");
    printf("A = 2, B = 6\n\n");

    printf("Segundo passo: Isolar o termo ao lado de x mudando o sinal de b\n");
    printf("2x = -6\n\n");
    
    printf("Terceiro passo: passar o coeficiente 'A' para o outro lado dividindo");
    printf(" x = -6 / 2\n\n");

    printf("Resultado final  x = -3\n");

    printf("Segundo exemplo de equacao\n");
    printf("Equacao: 3x -7 = 11\n");
    
    printf("Primeiro passo: achar os coeficientes A e B\n");
    printf("para isso primeiro iremos simplificar a equacao\n");
    printf("passaremos o 11 para o lado\n");
    printf("3x - 7 - 11 = 0\n");
    printf(" A = 3, B = -18\n\n");

    printf("Segundo passo: isolar o termo ao lado de x mudando o sinal de b\n");
    printf(" x = 3\n\n");

    printf("Terceiro passo: passar o coeficiente 'A' para o outro lado dividindo\n");
    printf(" x = 3 / 18\n");

    printf("Resultado final x = 6\n");
    break;

    // passo a passo para resolver equacao de segundo grau //
    case 2:
    printf("Primeiro exemplo de equacao de segundo grau\n");
    printf("Equacao : x^2 - 5x + 6 = 0\n");

    printf("Primeiro passo: identificar os coeficientes A, B e C\n");
    printf("A = 1, B =-5, C = 6\n\n");

    printf("Segundo passo: Calcular o Delta (b^2 -4*a*c\n)");
    printf("Delta = (-5)^2 - 4 * 1 * 6\n");
    printf("Delta = 25 - 24\n");
    printf("Delta = 1\n\n");

    printf("Terceiro passo: aplicar a formulta de baskhara (-b +/- raiz quadrada de delta / 2a\n)");
    printf("x = (-(-5) +/- Raiz(1)) / (2*1)\n");
    printf("x = (5 +/-1) / 2\n\n");

    printf("Quarto passo: Encontrar as duas raizes de x\n");
    printf(" x1 = (5 + 1)/ 2 --> x1 = 6/2 --> x1 = 3\n");
    printf(" x2 = (5 - 1)/ 2 --> x2 = 4/2 --> x2 = 2\n");
    printf("Resultado final x1 = 3, x2 = 2\n\n");

    printf("Segundo exemplo de equacao de segundo grau\n");
    printf("Equacao: x^2 - 6x + 9 = 0\n");

    printf("Primeiro passo: identificar os coeficientes A, B e C\n");
    printf("A = 1, B = -6, C = 9\n");

    printf("Segundo passo: Calcular o Delta\n");
    printf("Delta = (-6)^2 - 4 * 1 * 9\n");
    printf("Delta = 36 - 36\n");
    printf("Delta = 0\n\n");

    printf("Terceiro passo: aplicar a formula de baskhara");
    printf("x = (-(-6)+/- Raiz(0))/ (2*1)\n");
    printf("x = (6+/-0)/ 2\n\n");
    
   printf("Quarto passo: Encontrar as duas raizes de x\n");
   printf("x1 = (6 + 0)/ 2 --> x1 = 3\n");
   printf("x2 = (6 - 0)/ 2 --> x2 = 3\n");
   printf("Resultado final x = 3 (Raiz real dupla\n)");
   break;

   case 3:
   printf("Sobre o programa\n");
   printf("Programa feito por Mateus Rodrigues Martins, Aluno da universidade Uniavan");
   break;

   case 4:
   printf("encerrando o programa");
   break;
}

return 0;

}
