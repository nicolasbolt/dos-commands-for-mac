#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char **argv) {
    int status;
    
    if (argc == 2) {
    status = mkdir(argv[1], S_IRWXU);
    } else {
        printf("Please only enter one argument(directory name)\n");
    }
    if (status != 0) {
        printf("Error creating directory\n");
    }
    
    return 0;
}
