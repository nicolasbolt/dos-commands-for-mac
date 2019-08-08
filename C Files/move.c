
#include <stdio.h>
#include <stdlib.h>


// Add dirent to add .. functionality (see dir.c)

void mv(char sourcefile[], char targetfile[]) {
    FILE *source, *target;
    char ch;
    
    source = fopen(sourcefile, "r");
    target = fopen(targetfile, "w");
    
    while(( ch = fgetc(source)) != EOF ) {
        fputc(ch, target);
    }
    fclose(source);
    fclose(target);
    
   int status = remove(sourcefile);
    
   if (status == 0) {
       printf("File Moved\n");
   } else {
       printf("Error Deleting File\n");
       
   }
}

int main(int argc, char **argv) {
   mv(argv[1], argv[2]);
    
    return 0;
}
