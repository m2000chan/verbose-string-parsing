#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** parse_args( char * line ){

    char ** pointers = malloc (5 * 2);

    int i = 0;

    char * entry = malloc(2);
    strsep(&line, " ");
    while (entry = strsep(&line, " "), entry != NULL){

        pointers[i] = entry;
        i ++;

    }

    //printf("[%s]\n", strsep( &line, " " ));
    //printf("[%s]\n", line);

    return pointers;

}

int main(){

    char line[100] = "ls -a -l";

    char * p = line;

    char ** pointers = parse_args(p);

    printf("args: %s, %s\n", pointers[0], pointers[1]);

    return 0;

}
