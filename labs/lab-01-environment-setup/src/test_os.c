#include <stdio.h>
#include <unistd.h>

int main() {
    printf("OS Lab Environment is fully operational.\n");
    printf("Current Process ID (PID): %d\n", getpid());
    return 0;
}
