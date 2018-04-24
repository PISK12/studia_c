//
// Created by Dell on 2018-04-24.
/*
Napisz funkcję quadratic rozwiązującą równanie kwadratowe ax2 + bx + c = 0. Funkcja przyjmuje
wartości parametrów a, b, c oraz adresy dwóch zmiennych rzeczywistych i zwraca wyróżnik równania.
Jeżeli rówanie posiada rozwiązania, funkcja wpisuje je pod wskazane adresy. Korzystając z tej funkcji
napisz program quadratic, który wczytuje ze standardowego wejścia parametry a, b, c, i wypisuje na
        standardowe wyjście wyróżnik. Jeżeli równanie posiada rozwiązania, program również je wypisuje, w
        kolejności rosnącej.
Przykładowe wykonanie
In: 2 -7 -15
Out: 169
Out: -1.5 5
*/

//

#include <stdio.h>
#include <math.h>

double quadratic(double a, double b, double c, double *x1, double *x2){
    double delta=pow(b,2)-4*a*c;
    if (delta>0){
    	*x1=(-b-sqrt(delta))/(2*a);
    	*x2=(-b+sqrt(delta))/(2*a);
    }else if(delta==0){
    	*x1=(-b)/(2*a);
    }
    return delta;

}

int main(){
    double a=2,b=-7,c=-15;
    double x1,x2;
    double qua=quadratic(a,b,c,&x1,&x2);
    printf("%lg\n", qua);
    if (qua>=0){
    	printf("%lg ",x1);
    	if(qua>0){
    		printf("%lg\n",x2);
    	}
	}
    return 0;
}