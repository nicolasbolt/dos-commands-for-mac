
#include <stdio.h>
#include <stdlib.h>

void Newname(char filename[], char newfile[]) {
    int status = rename(filename, newfile);
    
    if (status == 0) {
        printf("File renamed successfully\n");
    } else {
        printf("Error renaming file\n");
    }
}

int main(int argc, char **argv) {
    Newname(argv[1], argv[2]);
    
    return 0;
}

