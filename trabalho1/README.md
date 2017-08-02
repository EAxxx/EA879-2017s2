# Trabalho 1: Uma linguagem para processamento de imagens

Embora linguagens de programação de propósito geral sejam bastante poderosas,
elas também podem ser entendidas como muito complicadas. Por esse motivo, já
foram inventadas linguagens de programação voltadas a público específico. Uma
linguagem de nicho bastante famosa é MatLab, cuja sintaxe favorece os cálculos
envolvendo matrizes e tensores e oculta o processo de alocação/desalocação de
memória.

Neste trabalho, trabalharemos na implementação de uma linguagem de programação
voltada para o processamento de imagens digitais. Julgamos que as bibliotecas
para processamento de imagens são muito complicadas, por isso queremos fornecer
uma interface mais intuitiva ao nosso usuário. Mais especificamente, gostaríamos
de implementar um operador `brilho` para nossos usuários.

## Conteúdo desde diretório
Neste diretório, já temos alguns arquivos e uma versão mínima, porém funcional,
de nossa linguagem. Ao rodar o `make`, o nosso interpretador compila. Para isso,
você vai precisar de garantir que sua máquina tem instalados os seguintes
pacotes:
* Lex (ou Flex), que você já deveria ter
* Bison, que você também já deveria ter
* libfreeimage-dev, que pode ser instalado usando `sudo apt-get install
  libfreeimage-dev` direto do terminal).

Depois, execute o interpretador usando `./main`. O único comando que funciona,
atualmente, é o de cópida de imagem. Ao digitar:

`teste.jpg = demo.jpg`

o programa abrirá o arquivo `demo.jpg`, copiará seu conteúdo para uma estrutura
intermediária (veja no arquivo `src/imageprocessing.h` o conteúdo dessa estrutura), e então
salvará o conteúdo para o arquivo `teste.jpg`. Confira se consegue compilar e
executar tudo antes de prosseguir.

Os arquivos Lex e Bison estão no diretório `src/`. Também, lá temos o arquivo
`imageprocessing.h`, que define estruturas e funções que são usadas no programa.
Preste atenção em especial à `struct imagem`, que armazena o conteúdo de
imagens. Essencialmente, ela guarda a altura (height), largura (width) e o
conteúdo dos pixels nos canais red, green e blue.

Veja no arquivo `src/lib_imageprocessing.c` como essa estrutura é usada na
prática.

Atualmente, as funções `abrir_imagem` e `salvar_imagem` já estão
implementadas. Elas usam funcionalidades da biblioteca FreeImage para converter
tipos de arquivo.

## Problema e requisitos
A única função que temos, atualmente, é a função de cópia. Cabe ao grupo
implementar as seguintes funcionalidades:

## Brilho
Aplicar *brilho* à imagem significa multiplicar o valor de seus pixels por uma
constante. A sintaxe para o brilho deve ser a de um rótulo de arquivo
multiplicado ou dividido por um valor float, como por exemplo:

* `teste.jpg = demo.jpg * 0.5`
* `teste.jpg = demo.jpg * 1.0`
* `teste.jpg = demo.jpg / 2`

## Valor máximo
O operador valor máximo deve retornar o valor máximo dos pixels da imagem. A
sintaxe para isso será o nome do arquivo cercado de colchetes, ou seja:

* `[teste.jpg]`

deverá escrever na tela o valor máximo entre todos os valores dos pixels de
`teste.jpg`.



# Entregas
Para este trabalho, deverão ser entregues:

1. O código-fonte da linguagem implementada, num repositório Git do grupo
1. Relatório (de **uma página, em coluna dupla, fontes Times New Roman 10**!),
contendo:
  1. **Contextualização**, isto é, um breve texto introdutório explicando do que se
     trata o documento, em uma linguagem que poderia ser entendida por qualquer
     pessoa que entenda programação (ou seja: referências diretas à disciplina
     não são desejáveis)
  1. **Demonstração**, isto é, entradas e saídas que demonstram o as
     funcionalidades implementadas
  1. **Análise** comparando a idéia de usar os comandos específicos da linguagem
     para aplicar brilho com uma aplicação equivalente, usando alguma biblioteca
     de linguagem de propósito geral (por exemplo, `OpenCV`). A análise deve
     se basear em dados reais, e mostrar todos os dados sobre os quais ela se
     baseia (exemplos de código, citações bibliográficas ou outros dados que o
     grupo considere relevantes)






