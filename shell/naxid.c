#include <stdio.h>
#include <stdlib.h>


#define MAX_PATH 256

int main(void){
    FILE* file;
    char buffer[MAX_PATH];
    unsigned long pid_max;
    file = fopen("/proc/sys/kernel/pid_max", "r");
    if ( file == NULL) {
    perror("Error opening file or file does not exist");
    exit(1);
}
    if (fgets(buffer, sizeof(buffer), file) != NULL){
        pid_max =  strtoul (buffer, NULL, 10);
        printf("Maximum PID value: %lu\n", pid_max);
} else {
   perror ("Error reading file");
}
fclose(file);

return(0);
}
