#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[]){
	FILE *input=fopen(argv[2],"r");
	char *line = NULL;
    size_t len = 0;
    ssize_t read;

   while ((read = getline(&line, &len, input)) != -1) {
   		if(strstr(line,argv[1])!=NULL){
   			printf("%s",line);
   		}
    }
}

