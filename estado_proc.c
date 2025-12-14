#include "types.h"
#include "stat.h"
#include "user.h"

// Programa de usuario para llamar a la syscall estado_sistema()
// y mostrar el tiempo de ejecucion y el conteo de procesos
int
main(int argc, char *argv[])
{
  int tiempo_ticks;
  int procesos_activos;

  // 1. Obtener el tiempo de ejecucion del sistema (syscall existente en user.h)
  tiempo_ticks = uptime(); 
  
  // 2. Obtener el numero de procesos activos (nuestra nueva syscall)
  procesos_activos = estado_sistema();
  
  // Mostrar la informacion
  printf(1, "--- Estado Extendido del Sistema ---\n");
  printf(1, "Tiempo de ejecucion: %d ticks\n", tiempo_ticks);
  printf(1, "Procesos activos: %d\n", procesos_activos);
  printf(1, "------------------------------------\n");

  exit();
}