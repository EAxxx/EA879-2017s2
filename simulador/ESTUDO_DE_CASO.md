# Estudo de caso: simulador

## As partes de um microprocessador
Um microprocessador é, fisicamente, uma pastilha de silício dopado com terminais
metálicos. A organização dos semicondutores no microprocessador pode ser
organizada na forma de funcionalidades lógicas. Dos rótulos abaixo, identifique
quais podem ser associados a blocos lógicos sem os quais um microprocessador não
funciona:

1. Program Counter
1. Registrador
1. Placa de som
1. Memória ROM
1. Unidade lógico-aritmética
1. Clock
1. Multiplexador
1. Modem
1. Memória RAM
1. Demultiplexador
1. Decodificador
1. UART
1. Máquina de Estados Finitos

## Tarefas de análise
1. Qual é a função de cada um dos blocos lógicos escolhidos?
1. Falta algum bloco lógico para fazer o microprocessador funcionar corretamente?
1. Lembre-se do ciclo fetch-decode-execute. Quais qual é a função de cada bloco
lógicos em cada uma das etapas do ciclo?

## Análise de código
Tomando por base o código-fonte do simulador de microprocessador em `simulador.h`
e `simulador.c`:
1. Quais funcionalidades lógicas estão implementadas nesse simulador? Como elas
   são implementadas?
1. Quais linhas de código estão ligadas a cada uma das etapas do ciclo
   fetch-decode-execute?
1. Quais instruções usam um byte? Quais instruções usam dois bytes?

## Arquitetura de computadores
Tente se lembrar de todas as *arquiteturas de computador* que você conhece.
Faça uma lista! Onde essas arquiteturas são encontradas?
Dos ítens abaixo, defina quais podem ser mudados sem mudar a arquitetura da
máquina:
1. Quantidade de registradores
1.  Tamanho dos registradores
1. Conjunto de instruções
1. Tamanho total da memória
1. Diferenciação entre memória de programa e memória de dados

## Simuladores dentro de simuladores
1. Eu conseguiria construir um simulador de processador Core i7
que executa no meu computador Core i7? Se não, por que não? Se sim, quais seriam
minhas limitações?

1. Eu conseguiria construir um circuito digital que implementa um algoritmo
   arbitrário escrito em ANSI-C? Se não, o que faltaria? Se sim, quais seriam
   minhas limitações?

1. É possível dizer que existe uma bi-equivalência entre circuitos digitais
   sequenciais e programas escritos em linguagens de programação?

## Programas em linguagem de máquina
Tome por base o código em `main.c`. Encontre as linhas de código referentes a:
1. Gravar a memória ROM do microprocessador
1. Gravar a memória RAM do microprocessador
1. Executar um ciclo de processamento

Após, encontre a linha: `const uint8_t rom_inicial[TAM_PROG] = {0, 0, 1, 1, 4, 2, 0, 1, 0, 5, 6, 0};
c`.
1. O que essas linha define?
1. Qual é o significado de cada um desses números?
1. Use os mnemônicos definidos em `simulador.h` para construir um código-fonte
   em linguagem assembly para nossa arquitetura simulada que seja equivalente a
   esse programa. Dica: comece com `LDA 0`.
1. É sempre possível gerar um código assembly através da análise da memória de
   programa? E o contrário -- é sempre possível gerar um programa em linguagem
   de máquina à partir de código assembly? Essa relação é um-para-um (ou seja, o
   mesmo código assembly só pode gerar um único programa em linguagem de máquina
   para uma determinada arquitetura, e vice-versa)? Como seria possível gerar erros
   intencionais nesse tipo de processo?

## Programas em C
Considere os programas:

`int i = 0;
int j = 0;
while (i<5) {
  j = j + i;
  i = i + 1;
}`

`int i;
int j = 0;
for (i=0; i<5; i++) j = j + i;`

1. Eles são equivalentes, em termos de suas pré-condições e pós-condições?
1. É possível gerar algum código assembly que seja equivalente a ambos os
   programas?
1. É possível gerar um único código C à partir da análise do programa em
   linguagem assembly?
1. É possível gerar um único código assembly à partir do programa em linguagem
   C?




