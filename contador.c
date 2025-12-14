#include "types.h"
#include "user.h"

char *nombres[] = {
  "none",
  "fork",
  "exit",
  "wait",
  "pipe",
  "read",
  "kill",
  "exec",
  "fstat",
  "chdir",
  "dup",
  "getpid",
  "sbrk",
  "sleep",
  "uptime",
  "open",
  "write",
  "mknod",
  "unlink",
  "link",
  "mkdir",
  "close",
  "ratrear",
  "estado",
  "contador"
};

int
main(int argc, char *argv[])
{
  if(argc == 2){
    int n = atoi(argv[1]);
    int r = contador(n);
    printf(1, "syscall %d (%s): %d\n",
           n, nombres[n], r);
  } else {
    for(int i = 1; i < 25; i++){
      printf(1, "syscall %d (%s): %d\n",
             i, nombres[i], contador(i));
    }
  }
  exit();
}
