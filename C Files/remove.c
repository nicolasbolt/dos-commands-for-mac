
#include <stdio.h>
#include <stdlib.h>

void rm(char filename[]) {
    int status = remove(filename);
    if (status == 0) {
    printf("File Deleted\n");
    } else {
        printf("Error Deleting File\n");
    }
}

int main(int argc, char **argv) {
    rm(argv[1]);
    
    return 0;
    }
