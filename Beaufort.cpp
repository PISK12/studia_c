#include <stdio.h>
#include<stdlib.h>

int beaufort(double speed){
    double t[]={0.5,6.5,11.5,19.5,29.5,39.5,50.5,62.5,75.5,87.5,102.5,117.5 };
    int i=0;
    for(i;i<12 && t[i]<speed;++i);
    return i;
}


int main(int argc, char *argv[]){
        double speed=atof(argv[1]);
        //scanf("%lg",&speed);
        printf("%i",beaufort(speed));

    return 0;
}
