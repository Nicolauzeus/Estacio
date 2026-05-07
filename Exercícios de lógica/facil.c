//Bloco 1: Entrada e Saída (I/O)

   /* Formatadores de Tipo: Qual a diferença prática entre usar %d, %i, %f e %c? O que acontece se você tentar ler um número decimal com %d?
R: %d e %i são usados para ler inteiros, mas %i pode interpretar números em diferentes bases (decimal, octal, hexadecimal) 
dependendo do formato do número. %f é usado para ler números de ponto flutuante (decimais), e %c é usado para ler um único caractere. 
Se você tentar ler um número decimal com %d, ele irá truncar a parte decimal e ler apenas a parte inteira.*/
#include <stdio.h>

int main () {
    int inteiro;
    float decimal;
    char caractere;

    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um número decimal: ");
    scanf("%f", &decimal);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // O espaço antes de %c é para limpar o buffer

    printf("Você digitou o inteiro: %d\n", inteiro);
    printf("Você digitou o decimal: %.2f\n", decimal); // Exibe com 2 casas decimais
    printf("Você digitou o caractere: %c\n", caractere);

    return 0;
}



/*O Operador de Endereço: Por que usamos o símbolo & antes da variável no scanf("%d", &var), mas geralmente não o usamos no printf?
R: No scanf, o símbolo & é usado para passar o endereço da variável onde o valor lido deve ser armazenado. Isso é necessário porque
o scanf precisa modificar a variável original. No printf, não precisamos do & porque estamos apenas lendo o valor da variável 
para exibi-lo, não precisamos modificá-la.
ex: 
    printf("Digite um número decimal: ");
    scanf("%f", &decimal);
*/

/*Leitura de Caracteres: Por que, ao usar scanf(" %c", &letra), é comum (e recomendado) colocar um espaço antes do %c? O que esse espaço "limpa"?
R: O espaço antes do %c no scanf é usado para limpar o buffer de entrada, removendo quaisquer caracteres de nova linha (\n)
ou espaços em branco que possam ter sido deixados para trás por leituras anteriores. Isso garante que o scanf 
leia o próximo caractere válido em vez de um caractere de nova linha ou espaço.
ex:
    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // O espaço antes de %c é para limpar o buffer
*/

/*Precisão em Ponto Flutuante: Como você formataria um printf para exibir o número 3.14159 com apenas duas casas decimais (ex: 3.14)?
R: Você pode usar o especificador de formato %.2f para exibir um número de ponto flutuante com duas casas decimais.
ex:
    float pi = 3.14159;
    printf("Valor de pi com 2 casas decimais: %.2f\n", pi);
*/ 

/*Retorno do Scanf: O scanf retorna um valor inteiro. O que esse valor representa e como ele pode ser usado para validar 
se o usuário digitou um número ou uma letra por engano?
R: O valor retornado pelo scanf representa o número de itens lidos com sucesso. Se o usuário digitar um número quando se 
espera um inteiro, o scanf retornará 1 (indicando que um item foi lido com sucesso). Se o usuário digitar uma letra ou algo que 
não pode ser convertido para o tipo esperado, o scanf retornará 0 (indicando que nenhum item foi lido com sucesso). Você pode usar 
esse valor para validar a entrada do usuário e solicitar que ele tente novamente se a entrada for inválida.
ex:
    int num;
    printf("Digite um número inteiro: ");
    if (scanf("%d", &num) != 1) {
        printf("Entrada inválida! Por favor, digite um número inteiro.\n");
    } else {
        printf("Você digitou: %d\n", num);
    }


/*Strings Básicas: Embora ainda não tenhamos aprofundado em strings, qual a limitação do scanf("%s", nome) ao ler um nome completo como 
"Nicolau Martins"?
R: O scanf("%s", nome) lê apenas até o primeiro espaço, então se você tentar ler um nome completo como "Nicolau Martins", ele só armazenará "Nicolau" na variável nome, e "Martins" será ignorado. Para ler uma linha completa, incluindo espaços, você precisaria usar uma função diferente, como fgets.
ex:
    char nome[50];
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin); // Lê uma linha completa, incluindo espaços
*/
/*Saída de Caracteres Especiais: Como você faria para imprimir na tela o caractere de porcentagem (%) ou as aspas duplas (") 
sem que o compilador pense que é um comando?
R: Para imprimir um caractere de porcentagem (%) ou aspas duplas (") no printf, você precisa usar uma barra invertida (\) para escapar esses caracteres.
ex:
    printf("Para imprimir um porcentagem, use %%\n");
    printf("Para imprimir aspas duplas, use \\\"\n");
*/
/*Buffer do Teclado: O que acontece com o caractere "Enter" (\n) após uma leitura com scanf? Ele desaparece ou fica armazenado em algum lugar?
R: O caractere "Enter" (\n) fica armazenado no buffer de entrada após uma leitura com scanf. Ele não desaparece automaticamente e pode causar problemas em leituras subsequentes, especialmente ao ler caracteres ou strings. Por isso, é comum usar um espaço antes do %c ou usar funções como getchar() para limpar o buffer.
ex:
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    getchar(); // Limpa o caractere de nova linha do buffer
    char letra;
    printf("Digite um caractere: ");
    scanf("%c", &letra); // Sem o espaço, isso pode ler o \n deixado pelo scanf anterior
*/
/*Múltiplas Entradas: É possível ler três valores inteiros em uma única linha de código usando apenas um scanf? Se sim, como seria a sintaxe?
R: Sim, é possível ler três valores inteiros em uma única linha de código usando um único scanf. A sintaxe seria algo como:
    int a, b, c;
    printf("Digite três números inteiros separados por espaço: ");
    scanf("%d %d %d", &a, &b, &c);
*/

/*Alinhamento de Saída: Para que servem os números entre o % e o d (ex: %5d) no printf? Como isso ajuda na criação de tabelas no console?
R: Os números entre o % e o d no printf, como %5d, especificam a largura mínima do campo para a saída. Isso significa que o 
número será alinhado à direita dentro de um campo de 5 caracteres. Se o número tiver menos de 5 dígitos, ele será preenchido 
com espaços à esquerda. Isso é útil para criar tabelas no console, pois garante que os números estejam alinhados verticalmente, 
facilitando a leitura.
ex:
    int num1 = 42, num2 = 7, num3 = 123;
    printf("%5d\n", num1); // Alinhado à direita em um campo de 5 caracteres
    printf("%5d\n", num2); // Alinhado à direita em um campo de 5 caracteres
    printf("%5d\n", num3); // Alinhado à direita em um campo de 5 caracteres   
*/