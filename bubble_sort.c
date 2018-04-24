#include <stdio.h>
#include <stdlib.h>

void swap(double *a,double *b){
    double c=*a;
    *a=*b;
    *b=c;
}

void bubble_sort(double table[], int size) {
    int unordered = size;
    while (unordered) {
        unordered = 0;
        for (double *pointer=table;pointer+1<table+size;++pointer) {
            if (*(pointer+1)<*pointer) {
                swap(pointer,pointer+1);
                unordered = 1; 
            }
        }
    }
}

int size=0, capacity=0;
double *table=NULL;

void push_back(double element){
    if (size==capacity){
        capacity=(capacity?2*capacity:1);
        table=(double*)realloc(table,capacity*sizeof(double));
    }
    table[size++]=element;
}

int main() {
    double element;
    while (scanf("%lg", &element) == 1) {
        push_back(element);}
    bubble_sort(table,size);
    for(double *pointer=table; pointer<table+size;++pointer){
        printf("%lg ",*pointer );
    }
    printf("\n");
    free(table);
    return 0;
}