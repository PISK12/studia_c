#include <stdio.h>
#include <ctype.h>

int main()
{
    char str;
    int n;


    char string[50];

    for(int index=0;index<50;++index){
        scanf("%c",&string[index]);
    }

    for (int index = 49; index>=0; --index) {
        str=string[index];
        if(isdigit(str)){
            n=str-'0';
            n=9-n;
            printf("%i",n);
        }else{printf("%c", str);}

    }
        printf("\n");
    return 0; }

