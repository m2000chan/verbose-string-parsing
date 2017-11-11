#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ){

    char ** pointers = malloc (5 * 2);

    int i = 0;

    char * entry = malloc(2);
    while (entry = strsep(&line, " "), entry != NULL){
        
		pointers[i] = entry;
        i++;
		printf("pointer %d: %s\n", i, pointers[i]);
		

    }

    //pointers[i] = NULL;

    //printf("[%s]\n", strsep( &line, " " ));
    //printf("[%s]\n", line);

    return pointers;

}

int main(){
	
    char line[100] = "ls -a -l";

    char * p = line;

    char ** args = parse_args(p);

    //printf("args: %s, %s", args[0], args[1]);

    execvp(args[0], args);
    return 0;

}
