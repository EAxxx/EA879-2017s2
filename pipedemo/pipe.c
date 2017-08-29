#include <stdio.h>

int main() {
  FILE *fp;
  char c;

  int contador = 0;

  fp = popen("ls -R ~/", "r");


  while (c != EOF) {
    c = fgetc(fp);
    if (c=='c')
      contador++;
  }

  printf("Encontrei %d letras c\n", contador);
  return 0;
}
