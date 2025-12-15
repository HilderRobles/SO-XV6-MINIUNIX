#include "types.h"
#include "user.h"

char *statestr_kernel[] = {
    "UNUSED", "EMBRYO", "SLEEPING", "RUNNABLE", "RUNNING", "ZOMBIE"
};

char*
statestr(int s) {
    if(s < 0 || s > 5) return "?";
    return statestr_kernel[s];
}

int
main(void)
{
    int pids[64];
    int states[64];
    char names[64*16];

    int n = psinfo(pids, states, names, 64);

    printf(1, "PID  STATE      NAME\n");
    for(int i = 0; i < n; i++){
        printf(1, "%d   %s   %s\n",
               pids[i],
               statestr(states[i]),
               &names[i*16]);
    }

    exit();
}
