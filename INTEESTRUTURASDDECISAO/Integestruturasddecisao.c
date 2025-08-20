/*
Para um bom desenvolvedor é importante saber combinar diferentes estruturas de decisão
para criar programas com lógica mais robusta e eficiente. 
As estruturas if, if-else e switch são fundamentais para 
tomar decisões baseadas em condições variadas.

Na sequência, vamos explorar como integrar essas estruturas em um único programa para resolver problemas complexos. 
Desenvolveremos um programa que gerencia as notas de estudantes e determina seu status 
(aprovado, em recuperação ou reprovado) com base nas notas. 
O programa também terá um menu para o usuário escolher entre diferentes operações.

#include <stdio.h>

int main() {
  int opcao;
  float nota1, nota2, media;

  // Exibição do menu
  printf("Menu de Gerenciamento de Estudantes\n");
  printf("1. Calcular Média\n");
  printf("2. Determinar Status\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      // Entrada de notas
      printf("Digite a primeira nota: ");
      scanf("%f", &nota1);
      printf("Digite a segunda nota: ");
      scanf("%f", &nota2);

      // Cálculo da média
      media = (nota1 + nota2) / 2;
      printf("A média do estudante é: %.2f\n", media);
      break;
    case 2:
      // Determinação do status com base na média
      printf("Digite a média do estudante: ");
      scanf("%f", &media);

      if (media >= 7.0) {
        printf("Status: Aprovado\n");
      } else if (media >= 5.0) {
        printf("Status: Recuperação\n");
      } else {
        printf("Status: Reprovado\n");
      }
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}
Vamos analisar a lógica desse programa passo a passo.

Declaração das variáveis

Declaramos a variável opcao do tipo int para armazenar a escolha do usuário.
Declaramos as variáveis nota1, nota2 e media do tipo float para armazenar as notas dos estudantes e a média calculada.

Exibição do menu

Usamos printf para exibir o menu de gerenciamento de estudantes.
Usamos scanf para ler a escolha do usuário e armazená-la na variável opcao.

Estrutura switch

A variável opcao é usada como controle para o switch.
Cada case verifica um valor específico da variável opcao. 
Se o valor da variável corresponder a um dos casos, o código dentro desse case é executado.
O break é usado para sair do switch após a execução do código do case correspondente. 
Sem o break, o programa continuaria executando os casos seguintes.
O default é executado se nenhum dos casos corresponder ao valor da variável. 
Isso garante que sempre haverá uma resposta, 
mesmo que a entrada do usuário não corresponda a nenhuma das opções.

Cálculo da média (case 1)

Quando o usuário escolhe a opção 1, o programa solicita as duas notas do estudante.
Calculamos a média das notas e armazenamos na variável media.
Usamos printf para exibir a média calculada.

Determinação do status (case 2)

Quando o usuário escolhe a opção 2, o programa solicita a média do estudante.
Usamos a estrutura if-else para determinar o status do estudante com base na média:
Se a média for maior ou igual a 7.0, o status é "Aprovado".
Se a média for maior ou igual a 5.0, mas menor que 7.0, o status é "Recuperação".
Se a média for menor que 5.0, o status é "Reprovado".
Usamos printf para exibir o status determinado.

Saída do programa (case 3)

Quando o usuário escolhe a opção 3, o programa imprime "Saindo..." 
e termina a execução do programa.

Opção inválida (default)

Se o usuário digitar um valor que não seja 1, 2 ou 3, o default será executado, 
imprimindo "Opção inválida. Tente novamente." 
Isso orienta o usuário a fazer uma escolha válida.

Integrar estruturas de decisão como if, if-else e switch em um único programa 
permite criar lógicas mais robustas e eficientes. 
No exemplo do sistema de gerenciamento de estudantes, 
vimos como usar essas estruturas para calcular a média das notas e determinar o status do estudante com base nas notas.

Resumindo
A combinação dessas estruturas torna o programa mais dinâmico e interativo, 
oferecendo uma melhor experiência ao usuário. 
Experimente aplicar essas técnicas em seus próprios projetos para desenvolver 
soluções mais sofisticadas e funcionais.

*/

#include <stdio.h>

int main (){

    int opcao;
    float nota1, nota2, media;

    printf ("Menu de Gerenciamento de Estudantes\n");
    printf ("1. Calcular Média\n");
    printf ("2. Determinar Status\n");
    printf ("3. Sair\n");
    printf ("Escolha uma opção: \n");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf ("Calcular a média\n");
        printf ("Digite a primeira nota:\n");
        scanf ("%f", &nota1); 
        printf ("Digite a segunda nota:\n");
        scanf ("%f", &nota2);    

        //Testar a condição se a nota é >= 0 e <=10

        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
            media = (nota1 + nota2) /2;
            printf ("A média é: %.2f\n", media);
            printf ("Entrada correta!\n");
        } else {
            printf ("Entrada com valores errados.\n");
        }
    break;

    case 2:
        printf ("Determinar Status\n"); 
        printf ("Entrar com a média:\n");
        scanf  ("%f", &media);
       // media >= 5 ? printf("Aprovado!\n") : printf ("Reprovado!\n");  

       if (media >= 7){
        printf ("Aprovado!\n");
       } else if (media >= 5) {
        printf ("Recuperação!\n");
       } else {
        printf ("Reprovado!\n");
       }
    break;

    case 3:
        printf ("Saindo do programa\n");    
    break; 
    
    default:
        printf ("Opção inválida\n");
        break;
    }

}


