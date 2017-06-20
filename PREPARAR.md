# Instalação do ambiente computacional

Neste curso, utilizaremos Linux, GCC, MakeFiles e outras ferramentas livres.
Este texto explica como instalar e usar todas essas ferramentas, mas cada um
deve se sentir livre para usar outras (por sua própria conta e risco).

## Máquina Virtual Linux
Se você não usa Linux (em especial, se você usa Windows) vai ser uma boa idéia
instalá-lo numa máquina virtual. Uma máquina virtual é uma espécie de
"computador dentro do computador": é um programa (software) que simula um outro
processador, de forma que você pode instalar um outro sistema operacional de
forma que ele execute dentro de seu sistema nativo.

Existem vários programas para a criação de máquinas virtuais, e um muito usado é
o [Virtual Box](https://www.virtualbox.org/) da Oracle. O primeiro passo, então,
é baixá-lo e instalá-lo no seu computador. Enquanto você baixa o Virtual Box,
baixe simultaneamente uma imagem ISO com alguma distribuição do [Ubuntu
Linux](https://www.ubuntu.com/download/desktop).

Depois de instalar o Virtual Box, você deverá abri-lo, configurar uma máquina
virtual e instalar o Ubuntu nela. Fiz um
[vídeo-tutorial](https://youtu.be/F48Re5e-fBQ) sobre essa etapa. Depois do
ubuntu ser instalado, recomendo acostumar-se um pouco com alguns comandos
essenciais.

### Comandos essenciais em Linux

Tipicamente, Linux vem com alguns programas pré-instalados. Se você nunca usou
Linux, deve tomar algum tempo para se acostumar com os mais essenciais deles:

* ls
* cd
* pwd
* mkdir
* rmdir

Se preferir, há um [vídeo-tutorial](https://youtu.be/ztsLWWKtvFM) sobre esse
assunto.

### Comandos simples em Linux

Outros comandos também serão úteis em Linux (em especial, `sudo apt-get install
git`). Há esse outro [vídeo-tutorial](https://youtu.be/fCAeu6c3VV4) sobre eles.

* cat
* grep
* pipe, <, >
* sudo
* apt-get

Uma tarefa essencial nesse ponto é **instalar o Git através do Apt-get**. Se você
conseguiu fazer isso sem problemas, então deve prosseguir; caso contrário, deve
retomar os tutoriais ou procurar outras fontes.

## GCC, Make, Lex, Yacc

* make

## Git
* git clone
* git commit
* git push
* git pull

