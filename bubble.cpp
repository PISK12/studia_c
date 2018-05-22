#include <stdio.h>

void bubble(int t[], int n){
    int b=n;
    while(b){
        b=0;
        for(int i=0;i+1<n;++i){
                if(t[i+1]<t[i]){
                    int help=t[i];
                    t[i]=t[i+1];
                    t[i+1]=help;
                    ++b;
                }
        }
    }
}


int main(){
    int t[10];
    for(int i=0;i<10;++i){
        scanf("%i",&t[i]);
    }
    bubble(t,10);

    for(int i=0;i<10;++i){
        printf("%i " ,t[i]);
    }
    return 0;
}
