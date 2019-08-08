
#include <stdio.h>
#include <stdlib.h>

void copy(char sourcefile[], char targetfile[]) {
    FILE *source, *target;
    char ch;
    
    source = fopen(sourcefile, "r");
    target = fopen(targetfile, "w");
    
    while(( ch = fgetc(source)) != EOF ) {
        fputc(ch, target);
    }
    fclose(source);
    fclose(target);
}

int main(int argc, char **argv) {
    copy(argv[1], argv[2]);
    
    return 0;
}
