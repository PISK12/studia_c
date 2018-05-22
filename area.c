#include <stdio.h>
#include <math.h>

double circle_area(double r){
    return M_PI*r*r;}

double trigle_area(double a,double b,double c){
    double s=(a+b+c)/2;
    double p=sqrt(s*(s-a)*(s-b)*(s-c));
    return p;}

int get_shape(){
    int n;
    do{
        printf("1 kolo\n2 trojkat\n");
        scanf("%i",&n);
    }while(n!=1&&n!=2);
    return n;}

int main(){

    int n=get_shape();

    switch(n){
        case 1:{
                double r;
            do{
                printf("Daj promien: ");
                scanf("%lg",&r);
            }while(r<=0);
            printf("Pole Kola: %lg\n",circle_area(r));
            break;
        }

        case 2:{
            double a,b,c;
            do{
                printf("Daj boki: ");
                scanf("%lg%lg%lg",&a,&b,&c);
            }while(a<=0&&b<=0&&c<=0);
            printf("a %lg\n",a);
            printf("b %lg\n",b);
            printf("c %lg\n",c);
            printf("Pole trojkata: %lg\n",trigle_area(a,b,c));
            break;
        }
    }
    return 0;
}

