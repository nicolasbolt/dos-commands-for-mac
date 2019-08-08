
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

void dir(char location[]) {
    DIR *d;
    struct dirent *dir;
    d = opendir(location);
    
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            printf("%s\n", dir->d_name);
        }
    } else {
        printf("Directory Does Not Exist\n");
    }
    closedir(d);
}

int main(int argc, char **argv) {
    if (argc == 2) {
        dir(argv[1]);
    } else if (argc == 1) {
        dir(".");
    } else {
        printf("Invalid Command\n");
    }
    
    return 0;
}

