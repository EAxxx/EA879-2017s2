# Trabalho 2: Otimizando o tempo de execução

Desenvolver uma nova linguagem de programação permite ao projetista incorporar
uma série de otimizações a operações corriqueiras. Um exemplo disso é a
multiplicação matricial implementada no MatLab (e, de forma semelhante, em
outros pacotes numéricos como o NumPy). Esse tipo de incorporação permite
executar funções que são corriqueiras a um domínio do conhecimento (como a
álgebra linear) sem se preocupar com elementos de outro domínio (como a
administração de memória ou a análise de algoritmos).

Neste trabalho, otimizaremos a linguagem que fizemos no Trabalho 1. Na verdade,
não modificaremos a sintaxe da linguagem. Ao invés disso, modificaremos seu
funcionamento interno, verificando se ela fica mais rápida ou mais lenta ao
utilizar

## Problema e requisitos

Gostaríamos de avaliar cientificamente o impacto de diferentes variações de
nossa implementação da função brilho na velocidade de operação do sistema. Para
isso, utilizaremos sistemas multi-thread e multi-processo (com memória
compartilhada), e utilizaremos variações da forma de varredura da matriz (em
linhas ou em colunas). O objetivo do trabalho é otimizar, ao máximo, o código de
aplicação de brilho, demonstrando que as escolhas de otimização, de fato, têm
impacto na velocidade da funcionalidade.

O roteiro abaixo é uma sugestão de como proceder, e tem o
objetivo de ajudar o grupo a se organizar. Porém, o grupo pode pular etapas,
invertê-las ou adicionar novas, se achar necessário.

1. Adicione a sua linguagem a funcionalidade de, sempre que uma operação de
   brilho for executada, o programa imprima na tela o tempo que levou para
   executar a operação de aplicar brilho.
1. Implemente algumas variações de sua linguagem, contemplando os seguintes
   casos:
   1. O brilho é aplicado usando múltiplas threads, varrendo a matriz em suas
      linhas. Varie o número de threads até encontrar um número ótimo.
   1. O brilho é aplicado usando múltiplos processos, varrendo a matriz em suas
      linhas. Varie o número de processos até encontrar um número ótimo.
   1. O brilho é aplicado usando uma única linha de execução, varrendo a matriz
      em suas linhas.
   1. O brilho é aplicado usando uma única linha de execução, varrendo a matriz
      em suas colinas.
1. Verifique a diferença do tempo de execução de cada uma das variações,
   considerando imagens de diferentes tamanhos (use imagens bem pequenas, como
   cliparts de 32 por 32 pixels, e também imagens gigantescas)
1. Por fim, decida-se sobre qual é a variação da função que é mais rápida para
   imagens pequenas e qual é mais rápida para imagens grandes.

# Entregas
Para este trabalho, deverão ser entregues:

1. O código-fonte da linguagem implementada, num repositório Git do grupo.
  1. Obrigatoriamente, deve haver um script de teste que executa todos os testes
   que forem utilizados pelo grupo e imprime, de forma clara, todos os
   resultados na tela. Se precisar, suba algumas imagens-exemplo para o
   repositório.
1. Relatório (trata-se de um texto **científico**, com **uma página, em coluna dupla, fontes Times New Roman 10**!),
contendo:
  1. **Contextualização**, isto é, um breve texto introdutório explicando do que se
     trata o documento, em uma linguagem que poderia ser entendida por qualquer
     pessoa que entenda programação (ou seja: referências diretas à disciplina
     não são desejáveis)
  1. **Demonstração**, isto é, os resultados de medições de desempenho
  (tempo de execução) para cada  uma das versões implementadas.
  1. **Análise** discutindo quais são os fatores que têm maior impacto no
     desempenho da nova função brilho, evidenciando *qual é o recurso de máquina
     que representa o maior gargalo para a aplicação de brilho em imagens*.

# Datas importantes

* 21/11: Entrega da primeira versão do relatório
* 28/11: Entrega da versão final do relatório



