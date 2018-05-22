#include <stdio.h>

char upper(char character){
    if('a'<=character && character<='z'){
        return character-32;
    }else{
    return character;
    }
}

int blank (char character){
    return character == ' ' || character == '\t' || character == '\n';
    }


int main(){
    FILE *input=fopen("input.txt","r");
    char previous=' ',current;
    while(fscanf(input,"%c",&current)!=EOF){
        if(!blank(current)){
            current=blank(previous) ? upper(current):current;
        }
        printf("%c",current);
        previous=current;

    }
    fclose(input);
    printf("%i",'A'-'a');
    return 0;
}
