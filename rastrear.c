#include "types.h"
#include "stat.h"
#include "user.h"

// Programa de usuario para llamar a la nueva syscall rastrear(int)
int
main(int argc, char *argv[])
{
  if(argc < 2){
    printf(2, "Uso: rastrear <0|1>\n");
    exit();
  }
  
  // Convertir el argumento de string a entero (0 o 1)
  int alternar = atoi(argv[1]);
  
  // Llamar a la nueva syscall del kernel
  int resultado = rastrear(alternar); 
  
  if (resultado < 0) {
      printf(2, "rastrear: Error al establecer el estado.\n");
  } else {
      printf(1, "Rastreo de syscalls %s.\n", alternar == 1 ? "ACTIVADO" : "DESACTIVADO");
  }

  exit();
}