#include <stdio.h>

/* Declaramos un búfer */
static char entrada[2048];

int main (int argc, char** argv){
  /* Imprimimos mensaje de bienvenida */
  puts("\nBienvenido a la REPL de Lhisp. v.0.0.0\nEste programa viene sin garantía y puede tomar decisiones por usted.\nExamine su código fuente para hacer de él un uso responsable.\n(c) 2018 bajo los términos de la licencia GPL2");
  /* Imprimimos ayuda fundamental */
  puts("\nPara pedir ayuda, escriba (ayuda). Para salir, presione Ctrl+c\n");
  /* Y ahora, en un bucle interminable */
  while (1) {
    /* Mostramos el puntero del programa (descomentar la siguiente
       línea si queremos puntero) */
    //    fputs("digamelón? ",stdout);
    /* Leemos la línea introducida por el usuario (con un máximo de
       2048 caracteres */
    fgets(entrada,2048,stdin);
    /* Y devolvemos la línea de entrada, precedida del signo "=>" para que visualmente sea más claro cuál es la información introducida por el usuario y cuál la devuelta pro el programa */
    printf(";; => %s", entrada);
  }

  return 0;
}
