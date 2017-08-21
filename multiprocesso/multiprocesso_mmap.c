
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

void sigquit() {
  /* Funcao que trata o sinal SIG_QUIT */
  printf("Recebi sinalizacao para terminar!\n");
  sleep(1);
  exit(0);
}

int main() {
  pid_t filho;
  int a;
  a = 5;

  int protection = PROT_READ | PROT_WRITE;
  int visibility = MAP_SHARED | MAP_ANON;

  /* Criar area de memoria compartilhada */
  void *b;
  b = (void*) mmap(NULL, sizeof(int)*100, protection, visibility, 0, 0);
  if (b==-1) printf("Erro de alocacao!\n");
  int L = 10;
  memcpy(b, &L, sizeof(int));

  filho = fork();
  if (filho == 0) {
    /* Esta parte do codigo executa no processo filho */
    signal(SIGQUIT, sigquit); /* Associa sinal SIGQUIT a funcao sigquit */

    while(1) {
      memcpy(&L, b, sizeof(int));
      printf("Processo filho: a=%d, *b=%d\n", a, L);
      sleep(1);
    }

  } else {
    /* Esta parte executa no processo pai */
    printf("Processo filho tem PID: %d\n", filho);
    do {
      printf("Processo pai: a=%d, *b=%d\n", a, L);
      sleep(1);
      a--;
      L++;
      memcpy(b, &L, sizeof(int));
      if (a==3) kill(filho, SIGQUIT); /* Termina filho */
    } while (a >  0);

  }
}

